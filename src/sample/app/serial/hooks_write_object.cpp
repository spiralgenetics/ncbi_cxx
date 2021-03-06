#include <ncbi_pch.hpp>
#include <objects/biblio/Cit_art.hpp>
#include <serial/objectio.hpp>
#include <serial/objistr.hpp>
#include <serial/objostr.hpp>
#include <serial/serial.hpp>

USING_NCBI_SCOPE;
USING_SCOPE(ncbi::objects);

class CDemoHook : public CWriteObjectHook
{
public:
    virtual void WriteObject(CObjectOStream& out,
                             const CConstObjectInfo& passed_info)
    {
        DefaultWrite(out, passed_info);
    }
};

int main(int argc, char** argv)
{
    auto_ptr<CObjectIStream> in(CObjectIStream::Open(eSerial_AsnText, "if"));
    auto_ptr<CObjectOStream> out(CObjectOStream::Open(eSerial_AsnText, "of"));

    CObjectTypeInfo(CType<CCit_art>()).SetLocalWriteHook(*out, new CDemoHook);

    CCit_art article;
    *in >> article;
    *out << article;

    return 0;
}
