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

/// @file Trans_matrix_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb3.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB3_TRANS_MATRIX_BASE_HPP
#define OBJECTS_MMDB3_TRANS_MATRIX_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_MMDB3_EXPORT CTrans_matrix_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTrans_matrix_Base(void);
    // destructor
    virtual ~CTrans_matrix_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TScale_factor;
    typedef int TTran_1;
    typedef int TTran_2;
    typedef int TTran_3;

    // getters
    // setters

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
    /// typedef int TTran_1
    ///  Check whether the Tran_1 data member has been assigned a value.
    bool IsSetTran_1(void) const;
    /// Check whether it is safe or not to call GetTran_1 method.
    bool CanGetTran_1(void) const;
    void ResetTran_1(void);
    TTran_1 GetTran_1(void) const;
    void SetTran_1(TTran_1 value);
    TTran_1& SetTran_1(void);

    /// mandatory
    /// typedef int TTran_2
    ///  Check whether the Tran_2 data member has been assigned a value.
    bool IsSetTran_2(void) const;
    /// Check whether it is safe or not to call GetTran_2 method.
    bool CanGetTran_2(void) const;
    void ResetTran_2(void);
    TTran_2 GetTran_2(void) const;
    void SetTran_2(TTran_2 value);
    TTran_2& SetTran_2(void);

    /// mandatory
    /// typedef int TTran_3
    ///  Check whether the Tran_3 data member has been assigned a value.
    bool IsSetTran_3(void) const;
    /// Check whether it is safe or not to call GetTran_3 method.
    bool CanGetTran_3(void) const;
    void ResetTran_3(void);
    TTran_3 GetTran_3(void) const;
    void SetTran_3(TTran_3 value);
    TTran_3& SetTran_3(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTrans_matrix_Base(const CTrans_matrix_Base&);
    CTrans_matrix_Base& operator=(const CTrans_matrix_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Scale_factor;
    int m_Tran_1;
    int m_Tran_2;
    int m_Tran_3;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTrans_matrix_Base::IsSetScale_factor(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTrans_matrix_Base::CanGetScale_factor(void) const
{
    return IsSetScale_factor();
}

inline
void CTrans_matrix_Base::ResetScale_factor(void)
{
    m_Scale_factor = 0;
    m_set_State[0] &= ~0x3;
}

inline
CTrans_matrix_Base::TScale_factor CTrans_matrix_Base::GetScale_factor(void) const
{
    if (!CanGetScale_factor()) {
        ThrowUnassigned(0);
    }
    return m_Scale_factor;
}

inline
void CTrans_matrix_Base::SetScale_factor(CTrans_matrix_Base::TScale_factor value)
{
    m_Scale_factor = value;
    m_set_State[0] |= 0x3;
}

inline
CTrans_matrix_Base::TScale_factor& CTrans_matrix_Base::SetScale_factor(void)
{
#ifdef _DEBUG
    if (!IsSetScale_factor()) {
        memset(&m_Scale_factor,UnassignedByte(),sizeof(m_Scale_factor));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Scale_factor;
}

inline
bool CTrans_matrix_Base::IsSetTran_1(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CTrans_matrix_Base::CanGetTran_1(void) const
{
    return IsSetTran_1();
}

inline
void CTrans_matrix_Base::ResetTran_1(void)
{
    m_Tran_1 = 0;
    m_set_State[0] &= ~0xc;
}

inline
CTrans_matrix_Base::TTran_1 CTrans_matrix_Base::GetTran_1(void) const
{
    if (!CanGetTran_1()) {
        ThrowUnassigned(1);
    }
    return m_Tran_1;
}

inline
void CTrans_matrix_Base::SetTran_1(CTrans_matrix_Base::TTran_1 value)
{
    m_Tran_1 = value;
    m_set_State[0] |= 0xc;
}

inline
CTrans_matrix_Base::TTran_1& CTrans_matrix_Base::SetTran_1(void)
{
#ifdef _DEBUG
    if (!IsSetTran_1()) {
        memset(&m_Tran_1,UnassignedByte(),sizeof(m_Tran_1));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Tran_1;
}

inline
bool CTrans_matrix_Base::IsSetTran_2(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CTrans_matrix_Base::CanGetTran_2(void) const
{
    return IsSetTran_2();
}

inline
void CTrans_matrix_Base::ResetTran_2(void)
{
    m_Tran_2 = 0;
    m_set_State[0] &= ~0x30;
}

inline
CTrans_matrix_Base::TTran_2 CTrans_matrix_Base::GetTran_2(void) const
{
    if (!CanGetTran_2()) {
        ThrowUnassigned(2);
    }
    return m_Tran_2;
}

inline
void CTrans_matrix_Base::SetTran_2(CTrans_matrix_Base::TTran_2 value)
{
    m_Tran_2 = value;
    m_set_State[0] |= 0x30;
}

inline
CTrans_matrix_Base::TTran_2& CTrans_matrix_Base::SetTran_2(void)
{
#ifdef _DEBUG
    if (!IsSetTran_2()) {
        memset(&m_Tran_2,UnassignedByte(),sizeof(m_Tran_2));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Tran_2;
}

inline
bool CTrans_matrix_Base::IsSetTran_3(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CTrans_matrix_Base::CanGetTran_3(void) const
{
    return IsSetTran_3();
}

inline
void CTrans_matrix_Base::ResetTran_3(void)
{
    m_Tran_3 = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CTrans_matrix_Base::TTran_3 CTrans_matrix_Base::GetTran_3(void) const
{
    if (!CanGetTran_3()) {
        ThrowUnassigned(3);
    }
    return m_Tran_3;
}

inline
void CTrans_matrix_Base::SetTran_3(CTrans_matrix_Base::TTran_3 value)
{
    m_Tran_3 = value;
    m_set_State[0] |= 0xc0;
}

inline
CTrans_matrix_Base::TTran_3& CTrans_matrix_Base::SetTran_3(void)
{
#ifdef _DEBUG
    if (!IsSetTran_3()) {
        memset(&m_Tran_3,UnassignedByte(),sizeof(m_Tran_3));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Tran_3;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB3_TRANS_MATRIX_BASE_HPP
