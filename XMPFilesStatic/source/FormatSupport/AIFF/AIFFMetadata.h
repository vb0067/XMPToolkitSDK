// =================================================================================================
// ADOBE SYSTEMS INCORPORATED
// Copyright 2010 Adobe Systems Incorporated
// All Rights Reserved
//
// NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms
// of the Adobe license agreement accompanying it.
// =================================================================================================

#ifndef _AIFFMetadata_h_
#define _AIFFMetadata_h_

#include "XMP_Environment.h"	// ! XMP_Environment.h must be the first included header.

#include "XMP_Const.h"
#include "XMP_IO.hpp"

#include "XMPFiles_Impl.hpp"
#include "XMPFiles_IO.hpp"

#include "XMP_LibUtils.hpp"

#include "IChunkData.h"
#include "IMetadata.h"


namespace IFF_RIFF
{

/**
 *	AIFF Metadata model.
 *	Implements the IMetadata interface
 */
class AIFFMetadata : public IMetadata
{
public:
	enum
	{
		kName,				// std::string
		kAuthor,			// std::string
		kCopyright,			// std::string
		kAnnotation			// std::string
	};

public:
	AIFFMetadata();
	~AIFFMetadata();

protected:
	/**
	 * @see IMetadata::isEmptyValue
	 */
	virtual	bool isEmptyValue( XMP_Uns32 id, ValueObject& valueObj );

private:
	// Operators hidden on purpose
	AIFFMetadata( const AIFFMetadata& ) {};
	AIFFMetadata& operator=( const AIFFMetadata& ) { return *this; };
};

} // namespace

#endif
