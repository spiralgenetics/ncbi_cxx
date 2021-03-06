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

/// @file IconUrl.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'linkout.dtd'.
///
/// New methods or data members can be added to it if needed.
/// See also: IconUrl_.hpp


#ifndef linkout__OBJTOOLS_EUTILS_LINKOUT_ICONURL_HPP
#define linkout__OBJTOOLS_EUTILS_LINKOUT_ICONURL_HPP


// generated includes
#include <objtools/eutils/linkout/IconUrl_.hpp>

// generated classes

BEGIN_linkout_SCOPE // namespace linkout::

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CIconUrl : public CIconUrl_Base
{
    typedef CIconUrl_Base Tparent;
public:
    // constructor
    CIconUrl(void);
    CIconUrl(const std::string& value);
    // destructor
    ~CIconUrl(void);

    /// Conversion operator to 'std::string' type.
    operator const std::string&(void) const;

    /// Assignment operator.
    CIconUrl& operator=(const std::string& value);

private:
    // Prohibit copy constructor and assignment operator
    CIconUrl(const CIconUrl& value);
    CIconUrl& operator=(const CIconUrl& value);

};

/////////////////// CIconUrl inline methods

// constructor
inline
CIconUrl::CIconUrl(void)
{
}

inline
CIconUrl::CIconUrl(const std::string& value)
{
    SetIconUrl(value);
}

inline
CIconUrl::operator const std::string&(void) const
{
    return GetIconUrl();
}

inline
CIconUrl& CIconUrl::operator=(const std::string& value)
{
    SetIconUrl(value);
    return *this;
}


/////////////////// end of CIconUrl inline methods


END_linkout_SCOPE // namespace linkout::


#endif // linkout__OBJTOOLS_EUTILS_LINKOUT_ICONURL_HPP
/* Original file checksum: lines: 108, chars: 2862, CRC32: 4452a9ad */
