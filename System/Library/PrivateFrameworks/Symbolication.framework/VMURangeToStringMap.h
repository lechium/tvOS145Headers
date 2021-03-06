/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {

	NSMutableArray* _strings;
	void* _stringToIndexMapVoidPtr;
	void* _rangeAndStringVectorVoidPtr;
	BOOL _sorted;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)sort;
-(id)stringForIndex:(unsigned)arg1 ;
-(unsigned)uniquedStringCount;
-(unsigned)indexForString:(id)arg1 insertIfMissing:(BOOL)arg2 ;
-(void)setString:(id)arg1 forRange:(VMURange)arg2 ;
-(id)stringForAddress:(unsigned long long)arg1 ;
-(VMURange)rangeContainingAddress:(unsigned long long)arg1 ;
-(VMURange)rangeForString:(id)arg1 startingAtAddress:(unsigned long long)arg2 ;
@end

