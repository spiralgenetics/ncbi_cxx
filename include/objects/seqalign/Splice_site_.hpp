/* $Id$
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 */

/// @file Splice_site_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqalign.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQALIGN_SPLICE_SITE_BASE_HPP
#define OBJECTS_SEQALIGN_SPLICE_SITE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// site involved in splice
class NCBI_SEQALIGN_EXPORT CSplice_site_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSplice_site_Base(void);
    // destructor
    virtual ~CSplice_site_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TBases;

    // getters
    // setters

    /// typically two bases in the intronic region, always
    /// in IUPAC format
    /// mandatory
    /// typedef string TBases
    ///  Check whether the Bases data member has been assigned a value.
    bool IsSetBases(void) const;
    /// Check whether it is safe or not to call GetBases method.
    bool CanGetBases(void) const;
    void ResetBases(void);
    const TBases& GetBases(void) const;
    void SetBases(const TBases& value);
    TBases& SetBases(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CSplice_site_Base(const CSplice_site_Base&);
    CSplice_site_Base& operator=(const CSplice_site_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Bases;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CSplice_site_Base::IsSetBases(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CSplice_site_Base::CanGetBases(void) const
{
    return IsSetBases();
}

inline
const CSplice_site_Base::TBases& CSplice_site_Base::GetBases(void) const
{
    if (!CanGetBases()) {
        ThrowUnassigned(0);
    }
    return m_Bases;
}

inline
void CSplice_site_Base::SetBases(const CSplice_site_Base::TBases& value)
{
    m_Bases = value;
    m_set_State[0] |= 0x3;
}

inline
CSplice_site_Base::TBases& CSplice_site_Base::SetBases(void)
{
#ifdef _DEBUG
    if (!IsSetBases()) {
        m_Bases = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Bases;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQALIGN_SPLICE_SITE_BASE_HPP
