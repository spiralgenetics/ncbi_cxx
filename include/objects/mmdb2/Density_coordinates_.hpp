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

/// @file Density_coordinates_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB2_DENSITY_COORDINATES_BASE_HPP
#define OBJECTS_MMDB2_DENSITY_COORDINATES_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CBrick;
class CChem_graph_pntrs;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Literal density coordinates define the chemical components whose structure
/// is described by a density grid, parameters of this grid, and density values.
class NCBI_MMDB2_EXPORT CDensity_coordinates_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CDensity_coordinates_Base(void);
    // destructor
    virtual ~CDensity_coordinates_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EFastest_varying {
        eFastest_varying_x = 1,
        eFastest_varying_y = 2,
        eFastest_varying_z = 3
    };
    
    /// Access to EFastest_varying's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EFastest_varying)(void);
    
    enum ESlowest_varying {
        eSlowest_varying_x = 1,
        eSlowest_varying_y = 2,
        eSlowest_varying_z = 3
    };
    
    /// Access to ESlowest_varying's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ESlowest_varying)(void);
    
    // types
    typedef CChem_graph_pntrs TContents;
    typedef CBrick TGrid_corners;
    typedef int TGrid_steps_x;
    typedef int TGrid_steps_y;
    typedef int TGrid_steps_z;
    typedef EFastest_varying TFastest_varying;
    typedef ESlowest_varying TSlowest_varying;
    typedef int TScale_factor;
    typedef list< int > TDensity;

    // getters
    // setters

    /// mandatory
    /// typedef CChem_graph_pntrs TContents
    ///  Check whether the Contents data member has been assigned a value.
    bool IsSetContents(void) const;
    /// Check whether it is safe or not to call GetContents method.
    bool CanGetContents(void) const;
    void ResetContents(void);
    const TContents& GetContents(void) const;
    void SetContents(TContents& value);
    TContents& SetContents(void);

    /// mandatory
    /// typedef CBrick TGrid_corners
    ///  Check whether the Grid_corners data member has been assigned a value.
    bool IsSetGrid_corners(void) const;
    /// Check whether it is safe or not to call GetGrid_corners method.
    bool CanGetGrid_corners(void) const;
    void ResetGrid_corners(void);
    const TGrid_corners& GetGrid_corners(void) const;
    void SetGrid_corners(TGrid_corners& value);
    TGrid_corners& SetGrid_corners(void);

    /// mandatory
    /// typedef int TGrid_steps_x
    ///  Check whether the Grid_steps_x data member has been assigned a value.
    bool IsSetGrid_steps_x(void) const;
    /// Check whether it is safe or not to call GetGrid_steps_x method.
    bool CanGetGrid_steps_x(void) const;
    void ResetGrid_steps_x(void);
    TGrid_steps_x GetGrid_steps_x(void) const;
    void SetGrid_steps_x(TGrid_steps_x value);
    TGrid_steps_x& SetGrid_steps_x(void);

    /// mandatory
    /// typedef int TGrid_steps_y
    ///  Check whether the Grid_steps_y data member has been assigned a value.
    bool IsSetGrid_steps_y(void) const;
    /// Check whether it is safe or not to call GetGrid_steps_y method.
    bool CanGetGrid_steps_y(void) const;
    void ResetGrid_steps_y(void);
    TGrid_steps_y GetGrid_steps_y(void) const;
    void SetGrid_steps_y(TGrid_steps_y value);
    TGrid_steps_y& SetGrid_steps_y(void);

    /// mandatory
    /// typedef int TGrid_steps_z
    ///  Check whether the Grid_steps_z data member has been assigned a value.
    bool IsSetGrid_steps_z(void) const;
    /// Check whether it is safe or not to call GetGrid_steps_z method.
    bool CanGetGrid_steps_z(void) const;
    void ResetGrid_steps_z(void);
    TGrid_steps_z GetGrid_steps_z(void) const;
    void SetGrid_steps_z(TGrid_steps_z value);
    TGrid_steps_z& SetGrid_steps_z(void);

    /// mandatory
    /// typedef EFastest_varying TFastest_varying
    ///  Check whether the Fastest_varying data member has been assigned a value.
    bool IsSetFastest_varying(void) const;
    /// Check whether it is safe or not to call GetFastest_varying method.
    bool CanGetFastest_varying(void) const;
    void ResetFastest_varying(void);
    TFastest_varying GetFastest_varying(void) const;
    void SetFastest_varying(TFastest_varying value);
    TFastest_varying& SetFastest_varying(void);

    /// mandatory
    /// typedef ESlowest_varying TSlowest_varying
    ///  Check whether the Slowest_varying data member has been assigned a value.
    bool IsSetSlowest_varying(void) const;
    /// Check whether it is safe or not to call GetSlowest_varying method.
    bool CanGetSlowest_varying(void) const;
    void ResetSlowest_varying(void);
    TSlowest_varying GetSlowest_varying(void) const;
    void SetSlowest_varying(TSlowest_varying value);
    TSlowest_varying& SetSlowest_varying(void);

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
    /// typedef list< int > TDensity
    ///  Check whether the Density data member has been assigned a value.
    bool IsSetDensity(void) const;
    /// Check whether it is safe or not to call GetDensity method.
    bool CanGetDensity(void) const;
    void ResetDensity(void);
    const TDensity& GetDensity(void) const;
    TDensity& SetDensity(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CDensity_coordinates_Base(const CDensity_coordinates_Base&);
    CDensity_coordinates_Base& operator=(const CDensity_coordinates_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TContents > m_Contents;
    CRef< TGrid_corners > m_Grid_corners;
    int m_Grid_steps_x;
    int m_Grid_steps_y;
    int m_Grid_steps_z;
    EFastest_varying m_Fastest_varying;
    ESlowest_varying m_Slowest_varying;
    int m_Scale_factor;
    list< int > m_Density;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CDensity_coordinates_Base::IsSetContents(void) const
{
    return m_Contents.NotEmpty();
}

inline
bool CDensity_coordinates_Base::CanGetContents(void) const
{
    return true;
}

inline
const CDensity_coordinates_Base::TContents& CDensity_coordinates_Base::GetContents(void) const
{
    if ( !m_Contents ) {
        const_cast<CDensity_coordinates_Base*>(this)->ResetContents();
    }
    return (*m_Contents);
}

inline
CDensity_coordinates_Base::TContents& CDensity_coordinates_Base::SetContents(void)
{
    if ( !m_Contents ) {
        ResetContents();
    }
    return (*m_Contents);
}

inline
bool CDensity_coordinates_Base::IsSetGrid_corners(void) const
{
    return m_Grid_corners.NotEmpty();
}

inline
bool CDensity_coordinates_Base::CanGetGrid_corners(void) const
{
    return true;
}

inline
const CDensity_coordinates_Base::TGrid_corners& CDensity_coordinates_Base::GetGrid_corners(void) const
{
    if ( !m_Grid_corners ) {
        const_cast<CDensity_coordinates_Base*>(this)->ResetGrid_corners();
    }
    return (*m_Grid_corners);
}

inline
CDensity_coordinates_Base::TGrid_corners& CDensity_coordinates_Base::SetGrid_corners(void)
{
    if ( !m_Grid_corners ) {
        ResetGrid_corners();
    }
    return (*m_Grid_corners);
}

inline
bool CDensity_coordinates_Base::IsSetGrid_steps_x(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CDensity_coordinates_Base::CanGetGrid_steps_x(void) const
{
    return IsSetGrid_steps_x();
}

inline
void CDensity_coordinates_Base::ResetGrid_steps_x(void)
{
    m_Grid_steps_x = 0;
    m_set_State[0] &= ~0x30;
}

inline
CDensity_coordinates_Base::TGrid_steps_x CDensity_coordinates_Base::GetGrid_steps_x(void) const
{
    if (!CanGetGrid_steps_x()) {
        ThrowUnassigned(2);
    }
    return m_Grid_steps_x;
}

inline
void CDensity_coordinates_Base::SetGrid_steps_x(CDensity_coordinates_Base::TGrid_steps_x value)
{
    m_Grid_steps_x = value;
    m_set_State[0] |= 0x30;
}

inline
CDensity_coordinates_Base::TGrid_steps_x& CDensity_coordinates_Base::SetGrid_steps_x(void)
{
#ifdef _DEBUG
    if (!IsSetGrid_steps_x()) {
        memset(&m_Grid_steps_x,UnassignedByte(),sizeof(m_Grid_steps_x));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Grid_steps_x;
}

inline
bool CDensity_coordinates_Base::IsSetGrid_steps_y(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CDensity_coordinates_Base::CanGetGrid_steps_y(void) const
{
    return IsSetGrid_steps_y();
}

inline
void CDensity_coordinates_Base::ResetGrid_steps_y(void)
{
    m_Grid_steps_y = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CDensity_coordinates_Base::TGrid_steps_y CDensity_coordinates_Base::GetGrid_steps_y(void) const
{
    if (!CanGetGrid_steps_y()) {
        ThrowUnassigned(3);
    }
    return m_Grid_steps_y;
}

inline
void CDensity_coordinates_Base::SetGrid_steps_y(CDensity_coordinates_Base::TGrid_steps_y value)
{
    m_Grid_steps_y = value;
    m_set_State[0] |= 0xc0;
}

inline
CDensity_coordinates_Base::TGrid_steps_y& CDensity_coordinates_Base::SetGrid_steps_y(void)
{
#ifdef _DEBUG
    if (!IsSetGrid_steps_y()) {
        memset(&m_Grid_steps_y,UnassignedByte(),sizeof(m_Grid_steps_y));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Grid_steps_y;
}

inline
bool CDensity_coordinates_Base::IsSetGrid_steps_z(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CDensity_coordinates_Base::CanGetGrid_steps_z(void) const
{
    return IsSetGrid_steps_z();
}

inline
void CDensity_coordinates_Base::ResetGrid_steps_z(void)
{
    m_Grid_steps_z = 0;
    m_set_State[0] &= ~0x300;
}

inline
CDensity_coordinates_Base::TGrid_steps_z CDensity_coordinates_Base::GetGrid_steps_z(void) const
{
    if (!CanGetGrid_steps_z()) {
        ThrowUnassigned(4);
    }
    return m_Grid_steps_z;
}

inline
void CDensity_coordinates_Base::SetGrid_steps_z(CDensity_coordinates_Base::TGrid_steps_z value)
{
    m_Grid_steps_z = value;
    m_set_State[0] |= 0x300;
}

inline
CDensity_coordinates_Base::TGrid_steps_z& CDensity_coordinates_Base::SetGrid_steps_z(void)
{
#ifdef _DEBUG
    if (!IsSetGrid_steps_z()) {
        memset(&m_Grid_steps_z,UnassignedByte(),sizeof(m_Grid_steps_z));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Grid_steps_z;
}

inline
bool CDensity_coordinates_Base::IsSetFastest_varying(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CDensity_coordinates_Base::CanGetFastest_varying(void) const
{
    return IsSetFastest_varying();
}

inline
void CDensity_coordinates_Base::ResetFastest_varying(void)
{
    m_Fastest_varying = (EFastest_varying)(0);
    m_set_State[0] &= ~0xc00;
}

inline
CDensity_coordinates_Base::TFastest_varying CDensity_coordinates_Base::GetFastest_varying(void) const
{
    if (!CanGetFastest_varying()) {
        ThrowUnassigned(5);
    }
    return m_Fastest_varying;
}

inline
void CDensity_coordinates_Base::SetFastest_varying(CDensity_coordinates_Base::TFastest_varying value)
{
    m_Fastest_varying = value;
    m_set_State[0] |= 0xc00;
}

inline
CDensity_coordinates_Base::TFastest_varying& CDensity_coordinates_Base::SetFastest_varying(void)
{
#ifdef _DEBUG
    if (!IsSetFastest_varying()) {
        memset(&m_Fastest_varying,UnassignedByte(),sizeof(m_Fastest_varying));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Fastest_varying;
}

inline
bool CDensity_coordinates_Base::IsSetSlowest_varying(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CDensity_coordinates_Base::CanGetSlowest_varying(void) const
{
    return IsSetSlowest_varying();
}

inline
void CDensity_coordinates_Base::ResetSlowest_varying(void)
{
    m_Slowest_varying = (ESlowest_varying)(0);
    m_set_State[0] &= ~0x3000;
}

inline
CDensity_coordinates_Base::TSlowest_varying CDensity_coordinates_Base::GetSlowest_varying(void) const
{
    if (!CanGetSlowest_varying()) {
        ThrowUnassigned(6);
    }
    return m_Slowest_varying;
}

inline
void CDensity_coordinates_Base::SetSlowest_varying(CDensity_coordinates_Base::TSlowest_varying value)
{
    m_Slowest_varying = value;
    m_set_State[0] |= 0x3000;
}

inline
CDensity_coordinates_Base::TSlowest_varying& CDensity_coordinates_Base::SetSlowest_varying(void)
{
#ifdef _DEBUG
    if (!IsSetSlowest_varying()) {
        memset(&m_Slowest_varying,UnassignedByte(),sizeof(m_Slowest_varying));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Slowest_varying;
}

inline
bool CDensity_coordinates_Base::IsSetScale_factor(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CDensity_coordinates_Base::CanGetScale_factor(void) const
{
    return IsSetScale_factor();
}

inline
void CDensity_coordinates_Base::ResetScale_factor(void)
{
    m_Scale_factor = 0;
    m_set_State[0] &= ~0xc000;
}

inline
CDensity_coordinates_Base::TScale_factor CDensity_coordinates_Base::GetScale_factor(void) const
{
    if (!CanGetScale_factor()) {
        ThrowUnassigned(7);
    }
    return m_Scale_factor;
}

inline
void CDensity_coordinates_Base::SetScale_factor(CDensity_coordinates_Base::TScale_factor value)
{
    m_Scale_factor = value;
    m_set_State[0] |= 0xc000;
}

inline
CDensity_coordinates_Base::TScale_factor& CDensity_coordinates_Base::SetScale_factor(void)
{
#ifdef _DEBUG
    if (!IsSetScale_factor()) {
        memset(&m_Scale_factor,UnassignedByte(),sizeof(m_Scale_factor));
    }
#endif
    m_set_State[0] |= 0x4000;
    return m_Scale_factor;
}

inline
bool CDensity_coordinates_Base::IsSetDensity(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CDensity_coordinates_Base::CanGetDensity(void) const
{
    return true;
}

inline
const CDensity_coordinates_Base::TDensity& CDensity_coordinates_Base::GetDensity(void) const
{
    return m_Density;
}

inline
CDensity_coordinates_Base::TDensity& CDensity_coordinates_Base::SetDensity(void)
{
    m_set_State[0] |= 0x10000;
    return m_Density;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB2_DENSITY_COORDINATES_BASE_HPP
