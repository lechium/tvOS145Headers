/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMTimeZoneSpec : FATObject {

	NSString* _id;
	NSNumber* _rawUTCOffsetMillis;
	NSNumber* _dstSavingsAdjustmentMillis;
	NSNumber* _nextEnterDaylightSavings;
	NSNumber* _nextLeaveDaylightSavings;

}

@property (nonatomic,retain) NSString * id;                                      //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSNumber * rawUTCOffsetMillis;                      //@synthesize rawUTCOffsetMillis=_rawUTCOffsetMillis - In the implementation block
@property (nonatomic,retain) NSNumber * dstSavingsAdjustmentMillis;              //@synthesize dstSavingsAdjustmentMillis=_dstSavingsAdjustmentMillis - In the implementation block
@property (nonatomic,retain) NSNumber * nextEnterDaylightSavings;                //@synthesize nextEnterDaylightSavings=_nextEnterDaylightSavings - In the implementation block
@property (nonatomic,retain) NSNumber * nextLeaveDaylightSavings;                //@synthesize nextLeaveDaylightSavings=_nextLeaveDaylightSavings - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
-(NSNumber *)rawUTCOffsetMillis;
-(void)setRawUTCOffsetMillis:(NSNumber *)arg1 ;
-(NSNumber *)dstSavingsAdjustmentMillis;
-(void)setDstSavingsAdjustmentMillis:(NSNumber *)arg1 ;
-(NSNumber *)nextEnterDaylightSavings;
-(void)setNextEnterDaylightSavings:(NSNumber *)arg1 ;
-(NSNumber *)nextLeaveDaylightSavings;
-(void)setNextLeaveDaylightSavings:(NSNumber *)arg1 ;
@end

