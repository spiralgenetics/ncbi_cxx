#ifndef UTIL_IMAGE___IMAGE_EXCEPTION__HPP
#define UTIL_IMAGE___IMAGE_EXCEPTION__HPP

/*  $Id: image_exception.hpp 103491 2007-05-04 17:18:18Z kazimird $
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
 * Authors:  Mike DiCuccio
 *
 * File Description:
 *    CImageException -- exceptions for images, primarily for I/O
 */

#include <corelib/ncbiexpt.hpp>


BEGIN_NCBI_SCOPE


//
// class CImage defines exceptions valid for images.  These exceptions are
// largely related to image reading
//
class CImageException : EXCEPTION_VIRTUAL_BASE public CException
{
public:
    enum EErrCode {
        eInvalidDimension,
        eInvalidImage,
        eReadError,
        eUnsupported,
        eWriteError
    };

    virtual const char* GetErrCodeString(void) const
    {
        switch (GetErrCode()) {
        case eInvalidDimension: return "eInvalidDimension";
        case eInvalidImage:     return "eInvalidImage";
        case eReadError:        return "eReadError";
        case eUnsupported:      return "eUnsupported";
        case eWriteError:       return "eWriteError";
        default:                return CException::GetErrCodeString();
        }
    }
    NCBI_EXCEPTION_DEFAULT(CImageException,CException);
};

END_NCBI_SCOPE

#endif  // UTIL_IMAGE___IMAGE_EXCEPTION__HPP
