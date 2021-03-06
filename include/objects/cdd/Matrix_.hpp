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

/// @file Matrix_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'cdd.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_CDD_MATRIX_BASE_HPP
#define OBJECTS_CDD_MATRIX_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Matrix definitions, these are supposed to store PSSMs and corresponding 
/// matrices of relative residue frequencies.
/// the number of columns and rows is listed explicitly, values in columns
/// are stored column by column, i.e. in groups of nrows values for each column
class NCBI_CDD_EXPORT CMatrix_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CMatrix_Base(void);
    // destructor
    virtual ~CMatrix_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TNcolumns;
    typedef int TNrows;
    typedef list< string > TRow_labels;
    typedef int TScale_factor;
    typedef list< int > TColumns;

    // getters
    // setters

    /// mandatory
    /// typedef int TNcolumns
    ///  Check whether the Ncolumns data member has been assigned a value.
    bool IsSetNcolumns(void) const;
    /// Check whether it is safe or not to call GetNcolumns method.
    bool CanGetNcolumns(void) const;
    void ResetNcolumns(void);
    TNcolumns GetNcolumns(void) const;
    void SetNcolumns(TNcolumns value);
    TNcolumns& SetNcolumns(void);

    /// mandatory
    /// typedef int TNrows
    ///  Check whether the Nrows data member has been assigned a value.
    bool IsSetNrows(void) const;
    /// Check whether it is safe or not to call GetNrows method.
    bool CanGetNrows(void) const;
    void ResetNrows(void);
    TNrows GetNrows(void) const;
    void SetNrows(TNrows value);
    TNrows& SetNrows(void);

    /// optional
    /// typedef list< string > TRow_labels
    ///  Check whether the Row_labels data member has been assigned a value.
    bool IsSetRow_labels(void) const;
    /// Check whether it is safe or not to call GetRow_labels method.
    bool CanGetRow_labels(void) const;
    void ResetRow_labels(void);
    const TRow_labels& GetRow_labels(void) const;
    TRow_labels& SetRow_labels(void);

    /// mandatory
    /// typedef int TScale_factor
    ///  Check whether the Scale_factor data member has been assigned a value.
    bool IsSetScale_factor(void) const;
    /// Check whether it is safe or not to call GetScale_factor method.
    bool CanGetScale_factor(void) const;
    void ResetScale_factor(void);
    TScale_factor GetScale_factor(void) const;
    void SetScale_factor(TScale_factor value);
    TScale_factor& SetScale_factor(void);

    /// mandatory
    /// typedef list< int > TColumns
    ///  Check whether the Columns data member has been assigned a value.
    bool IsSetColumns(void) const;
    /// Check whether it is safe or not to call GetColumns method.
    bool CanGetColumns(void) const;
    void ResetColumns(void);
    const TColumns& GetColumns(void) const;
    TColumns& SetColumns(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CMatrix_Base(const CMatrix_Base&);
    CMatrix_Base& operator=(const CMatrix_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Ncolumns;
    int m_Nrows;
    list< string > m_Row_labels;
    int m_Scale_factor;
    list< int > m_Columns;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CMatrix_Base::IsSetNcolumns(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CMatrix_Base::CanGetNcolumns(void) const
{
    return IsSetNcolumns();
}

inline
void CMatrix_Base::ResetNcolumns(void)
{
    m_Ncolumns = 0;
    m_set_State[0] &= ~0x3;
}

inline
CMatrix_Base::TNcolumns CMatrix_Base::GetNcolumns(void) const
{
    if (!CanGetNcolumns()) {
        ThrowUnassigned(0);
    }
    return m_Ncolumns;
}

inline
void CMatrix_Base::SetNcolumns(CMatrix_Base::TNcolumns value)
{
    m_Ncolumns = value;
    m_set_State[0] |= 0x3;
}

inline
CMatrix_Base::TNcolumns& CMatrix_Base::SetNcolumns(void)
{
#ifdef _DEBUG
    if (!IsSetNcolumns()) {
        memset(&m_Ncolumns,UnassignedByte(),sizeof(m_Ncolumns));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Ncolumns;
}

inline
bool CMatrix_Base::IsSetNrows(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMatrix_Base::CanGetNrows(void) const
{
    return IsSetNrows();
}

inline
void CMatrix_Base::ResetNrows(void)
{
    m_Nrows = 0;
    m_set_State[0] &= ~0xc;
}

inline
CMatrix_Base::TNrows CMatrix_Base::GetNrows(void) const
{
    if (!CanGetNrows()) {
        ThrowUnassigned(1);
    }
    return m_Nrows;
}

inline
void CMatrix_Base::SetNrows(CMatrix_Base::TNrows value)
{
    m_Nrows = value;
    m_set_State[0] |= 0xc;
}

inline
CMatrix_Base::TNrows& CMatrix_Base::SetNrows(void)
{
#ifdef _DEBUG
    if (!IsSetNrows()) {
        memset(&m_Nrows,UnassignedByte(),sizeof(m_Nrows));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Nrows;
}

inline
bool CMatrix_Base::IsSetRow_labels(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CMatrix_Base::CanGetRow_labels(void) const
{
    return true;
}

inline
const CMatrix_Base::TRow_labels& CMatrix_Base::GetRow_labels(void) const
{
    return m_Row_labels;
}

inline
CMatrix_Base::TRow_labels& CMatrix_Base::SetRow_labels(void)
{
    m_set_State[0] |= 0x10;
    return m_Row_labels;
}

inline
bool CMatrix_Base::IsSetScale_factor(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CMatrix_Base::CanGetScale_factor(void) const
{
    return IsSetScale_factor();
}

inline
void CMatrix_Base::ResetScale_factor(void)
{
    m_Scale_factor = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CMatrix_Base::TScale_factor CMatrix_Base::GetScale_factor(void) const
{
    if (!CanGetScale_factor()) {
        ThrowUnassigned(3);
    }
    return m_Scale_factor;
}

inline
void CMatrix_Base::SetScale_factor(CMatrix_Base::TScale_factor value)
{
    m_Scale_factor = value;
    m_set_State[0] |= 0xc0;
}

inline
CMatrix_Base::TScale_factor& CMatrix_Base::SetScale_factor(void)
{
#ifdef _DEBUG
    if (!IsSetScale_factor()) {
        memset(&m_Scale_factor,UnassignedByte(),sizeof(m_Scale_factor));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Scale_factor;
}

inline
bool CMatrix_Base::IsSetColumns(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CMatrix_Base::CanGetColumns(void) const
{
    return true;
}

inline
const CMatrix_Base::TColumns& CMatrix_Base::GetColumns(void) const
{
    return m_Columns;
}

inline
CMatrix_Base::TColumns& CMatrix_Base::SetColumns(void)
{
    m_set_State[0] |= 0x100;
    return m_Columns;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_CDD_MATRIX_BASE_HPP
