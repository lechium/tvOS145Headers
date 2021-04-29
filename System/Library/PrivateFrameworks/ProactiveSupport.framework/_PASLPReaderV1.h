/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/_PASLPReaderProtocol.h>

@class NSData;

@interface _PASLPReaderV1 : NSObject <_PASLPReaderProtocol> {

	NSData* _backingData;
	SCD_Struct_PA3* _mappedRegion;
	CFAllocatorRef _releaseReaderDeallocator;

}
-(id)init;
-(void)dealloc;
-(id)rootObjectWithErrMsg:(id*)arg1 ;
-(id)objectForKey:(id)arg1 usingDictionaryContext:(id)arg2 ;
-(id)keyAtIndex:(unsigned long long)arg1 usingDictionaryContext:(id)arg2 ;
-(id)objectAtIndex:(unsigned long long)arg1 usingDictionaryContext:(id)arg2 ;
-(id)objectAtIndex:(unsigned long long)arg1 usingArrayContext:(id)arg2 ;
-(id)initWithData:(id)arg1 sourcedFromPath:(id)arg2 error:(id*)arg3 ;
-(unsigned)_mmapByteOffsetForPtr:(const void*)arg1 ;
-(BOOL)_validateHeader:(const PASLPHeader*)arg1 filename:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateStringTableWithFilename:(id)arg1 stats:(PASLPObjectGraphStats*)arg2 error:(id*)arg3 ;
-(BOOL)_validateObjectGraphWithFilename:(id)arg1 stats:(PASLPObjectGraphStats*)arg2 error:(id*)arg3 ;
-(BOOL)_validateObjectGraphWithFilename:(id)arg1 rootValue:(SCD_Struct_PA5)arg2 recursionDepth:(unsigned long long)arg3 stats:(PASLPObjectGraphStats*)arg4 error:(id*)arg5 ;
-(BOOL)_decodeValue:(SCD_Struct_PA5)arg1 handleBoolean:(/*^block*/id)arg2 handleTaggedInt:(/*^block*/id)arg3 handleBoxedInt:(/*^block*/id)arg4 handleTaggedFloat:(/*^block*/id)arg5 handleBoxedFloat:(/*^block*/id)arg6 handleDate:(/*^block*/id)arg7 handleData:(/*^block*/id)arg8 handleString:(/*^block*/id)arg9 handleDict:(/*^block*/id)arg10 handleArray:(/*^block*/id)arg11 errMsg:(id*)arg12 ;
-(BOOL)_decodeDictionaryKeyValue:(SCD_Struct_PA5)arg1 handleString:(/*^block*/id)arg2 errMsg:(id*)arg3 ;
-(void)decodeDictionaryKeyForValue:(SCD_Struct_PA5)arg1 handleString:(/*^block*/id)arg2 ;
-(id)_objectForValue:(SCD_Struct_PA5)arg1 errMsg:(id*)arg2 ;
-(id)_objectForValue:(SCD_Struct_PA5)arg1 ;
-(id)_stringForMappedUTF8CString:(const char*)arg1 ;
@end

