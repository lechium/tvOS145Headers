/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionStringAppendTarget.h>
#import <libobjc.A.dylib/BSDescriptionFormatting.h>

@class NSMutableString, NSString;

@interface BSDescriptionStream : NSObject <BSDescriptionStringAppendTarget, BSDescriptionFormatting> {

	unsigned char _appendBuffer[1024];
	long long _appendBufferCount;
	BOOL _sortKeys;
	BOOL _verboseSingleItemCollections;
	NSMutableString* _string;
	long long _indentLevel;
	NSString* _pendingFieldTerminator;
	long long _emitPhase;
	long long _groupItemCount;
	long long _groupVerbosityOptions;

}

@property (assign,nonatomic) BOOL sortKeys;                                  //@synthesize sortKeys=_sortKeys - In the implementation block
@property (assign,nonatomic) BOOL verboseSingleItemCollections;              //@synthesize verboseSingleItemCollections=_verboseSingleItemCollections - In the implementation block
+(id)descriptionForRootObject:(id)arg1 ;
-(id)description;
-(id)init;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)appendObject:(id)arg1 withName:(id)arg2 ;
-(id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(BOOL)arg3 ;
-(void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(id)appendBool:(BOOL)arg1 withName:(id)arg2 ;
-(id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(BOOL)arg3 ;
-(id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3 ;
-(id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3 ;
-(id)appendCString:(const char*)arg1 withName:(id)arg2 ;
-(void)appendProem:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)appendString:(id)arg1 withName:(id)arg2 ;
-(id)appendBool:(BOOL)arg1 withName:(id)arg2 ifEqualTo:(BOOL)arg3 ;
-(id)appendFlag:(long long)arg1 withName:(id)arg2 ;
-(id)appendInteger:(long long)arg1 withName:(id)arg2 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3 ;
-(id)appendInt:(int)arg1 withName:(id)arg2 ;
-(id)appendUnsignedInt:(unsigned)arg1 withName:(id)arg2 ;
-(id)appendInt64:(long long)arg1 withName:(id)arg2 ;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 ;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3 ;
-(id)appendFloat:(double)arg1 withName:(id)arg2 ;
-(id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(BOOL)arg3 ;
-(id)appendPointer:(void*)arg1 withName:(id)arg2 ;
-(id)appendPoint:(CGPoint)arg1 withName:(id)arg2 ;
-(id)appendSize:(CGSize)arg1 withName:(id)arg2 ;
-(id)appendRect:(CGRect)arg1 withName:(id)arg2 ;
-(id)appendSelector:(SEL)arg1 withName:(id)arg2 ;
-(id)appendQueue:(id)arg1 withName:(id)arg2 ;
-(id)appendClass:(Class)arg1 withName:(id)arg2 ;
-(id)appendVersionedPID:(long long)arg1 withName:(id)arg2 ;
-(void)appendCustomFormatWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)sameLine:(/*^block*/id)arg1 ;
-(void)appendBodySectionWithOpenDelimiter:(id)arg1 closeDelimiter:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)appendCollection:(id)arg1 withName:(id)arg2 itemBlock:(/*^block*/id)arg3 ;
-(void)appendDictionary:(id)arg1 withName:(id)arg2 itemBlock:(/*^block*/id)arg3 ;
-(void)appendRightArrow;
-(BOOL)sortKeys;
-(void)setSortKeys:(BOOL)arg1 ;
-(BOOL)verboseSingleItemCollections;
-(void)setVerboseSingleItemCollections:(BOOL)arg1 ;
@end

