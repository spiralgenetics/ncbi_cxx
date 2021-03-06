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

/// @file Blast_get_databa_ex_reques_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'blast.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_BLAST_BLAST_GET_DATABA_EX_REQUES_BASE_HPP
#define OBJECTS_BLAST_BLAST_GET_DATABA_EX_REQUES_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CBlast4_parameters;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_BLAST_EXPORT CBlast4_get_databases_ex_request_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CBlast4_get_databases_ex_request_Base(void);
    // destructor
    virtual ~CBlast4_get_databases_ex_request_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CBlast4_parameters TParams;

    // getters
    // setters

    /// optional
    /// typedef CBlast4_parameters TParams
    ///  Check whether the Params data member has been assigned a value.
    bool IsSetParams(void) const;
    /// Check whether it is safe or not to call GetParams method.
    bool CanGetParams(void) const;
    void ResetParams(void);
    const TParams& GetParams(void) const;
    void SetParams(TParams& value);
    TParams& SetParams(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CBlast4_get_databases_ex_request_Base(const CBlast4_get_databases_ex_request_Base&);
    CBlast4_get_databases_ex_request_Base& operator=(const CBlast4_get_databases_ex_request_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TParams > m_Params;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CBlast4_get_databases_ex_request_Base::IsSetParams(void) const
{
    return m_Params.NotEmpty();
}

inline
bool CBlast4_get_databases_ex_request_Base::CanGetParams(void) const
{
    return IsSetParams();
}

inline
const CBlast4_get_databases_ex_request_Base::TParams& CBlast4_get_databases_ex_request_Base::GetParams(void) const
{
    if (!CanGetParams()) {
        ThrowUnassigned(0);
    }
    return (*m_Params);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLAST_BLAST_GET_DATABA_EX_REQUES_BASE_HPP
