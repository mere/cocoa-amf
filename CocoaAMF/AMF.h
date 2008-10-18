/*
 *  AMF.h
 *  SimpleHTTPServer
 *
 *  Created by Marc Bauer on 12.10.08.
 *  Copyright 2008 nesiumdotcom. All rights reserved.
 *
 */

typedef enum _AMFVersion
{
	kAMF0Version = 0x0,
	kAMF3Version = 0x3
} AMFVersion;

typedef enum _AMF0Type
{
	kAMF0NumberType = 0x0,
	kAMF0BooleanType = 0x1,
	kAMF0StringType = 0x2,
	kAMF0ObjectType = 0x3,
	kAMF0MovieClipType = 0x4,
	kAMF0NullType = 0x5,
	kAMF0UndefinedType = 0x6,
	kAMF0ReferenceType = 0x7,
	kAMF0ECMAArrayType = 0x8,
	kAMF0ObjectEndType = 0x9,
	kAMF0StrictArrayType = 0xA,
	kAMF0DateType = 0xB,
	kAMF0LongStringType = 0xC,
	kAMF0UnsupportedType = 0xD,
	kAMF0RecordsetType = 0xE,
	kAMF0XMLObjectType = 0xF,
	kAMF0TypedObjectType = 0x10,
	kAMF0AVMPlusObjectType = 0x11
} AMF0Type;

typedef enum _AMF3Type
{
	kAMF3UndefinedType = 0x0,
	kAMF3NullType = 0x1,
	kAMF3FalseType = 0x2,
	kAMF3TrueType = 0x3,
	kAMF3IntegerType = 0x4,
	kAMF3DoubleType = 0x5,
	kAMF3StringType = 0x6,
	kAMF3XMLDocType = 0x7,
	kAMF3DateType = 0x8,
	kAMF3ArrayType = 0x9,
	kAMF3ObjectType = 0xA,
	kAMF3XMLType = 0xB,
	kAMF3ByteArrayType = 0xC
} AMF3Type;