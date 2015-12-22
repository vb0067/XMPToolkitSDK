#ifndef __UnicodeInlines_hpp__
#define __UnicodeInlines_hpp__

// =================================================================================================
// Copyright 2004 Adobe Systems Incorporated
// All Rights Reserved.
//
// NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance with the terms
// of the Adobe license agreement accompanying it.
// =================================================================================================

#include "UnicodeConversions.hpp"
#include "XMP_LibUtils.hpp"

// =================================================================================================
// Inner loop utilities that need to be inlined.
// =================================================================================================

static inline XMP_Uns32 GetCodePoint ( const XMP_Uns8 ** utf8Str_io );

// =================================================================================================

static inline bool IsStartChar_ASCII ( XMP_Uns32 cp );

// -------------------------------------------------------------------------------------------------

static inline bool IsStartChar_NonASCII ( XMP_Uns32 cp );

// -------------------------------------------------------------------------------------------------

static inline bool IsOtherChar_ASCII ( XMP_Uns32 cp );
// -------------------------------------------------------------------------------------------------

static inline bool IsOtherChar_NonASCII ( XMP_Uns32 cp );

// -------------------------------------------------------------------------------------------------

static inline void VerifyUTF8 ( XMP_StringPtr str );

// -------------------------------------------------------------------------------------------------

static inline void VerifySimpleXMLName ( XMP_StringPtr _nameStart, XMP_StringPtr _nameEnd );
// =================================================================================================

#endif	// __UnicodeInlines_hpp__
