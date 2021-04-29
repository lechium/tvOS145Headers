/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTCarrierSpaceUsagePlanItemData, CTCarrierSpaceUsagePlanItemMessages, CTCarrierSpaceUsagePlanItemVoice, NSDate;

@interface CTCarrierSpaceUsagePlanMetrics : NSObject <NSSecureCoding> {

	BOOL _currentUsedPlan;
	BOOL _throttled;
	NSString* _planLabel;
	long long _planCategory;
	CTCarrierSpaceUsagePlanItemData* _dataUsage;
	CTCarrierSpaceUsagePlanItemMessages* _messages;
	CTCarrierSpaceUsagePlanItemVoice* _voice;
	NSString* _remainingBalance;
	NSDate* _lastUpdatedAt;

}

@property (nonatomic,retain) NSString * planLabel;                                        //@synthesize planLabel=_planLabel - In the implementation block
@property (assign,nonatomic) long long planCategory;                                      //@synthesize planCategory=_planCategory - In the implementation block
@property (assign,nonatomic) BOOL currentUsedPlan;                                        //@synthesize currentUsedPlan=_currentUsedPlan - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceUsagePlanItemData * dataUsage;                 //@synthesize dataUsage=_dataUsage - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceUsagePlanItemMessages * messages;              //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceUsagePlanItemVoice * voice;                    //@synthesize voice=_voice - In the implementation block
@property (nonatomic,retain) NSString * remainingBalance;                                 //@synthesize remainingBalance=_remainingBalance - In the implementation block
@property (assign,nonatomic) BOOL throttled;                                              //@synthesize throttled=_throttled - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdatedAt;                                      //@synthesize lastUpdatedAt=_lastUpdatedAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)planLabel;
-(long long)planCategory;
-(BOOL)currentUsedPlan;
-(CTCarrierSpaceUsagePlanItemData *)dataUsage;
-(CTCarrierSpaceUsagePlanItemMessages *)messages;
-(CTCarrierSpaceUsagePlanItemVoice *)voice;
-(NSString *)remainingBalance;
-(BOOL)throttled;
-(NSDate *)lastUpdatedAt;
-(void)setPlanLabel:(NSString *)arg1 ;
-(void)setPlanCategory:(long long)arg1 ;
-(void)setCurrentUsedPlan:(BOOL)arg1 ;
-(void)setDataUsage:(CTCarrierSpaceUsagePlanItemData *)arg1 ;
-(void)setMessages:(CTCarrierSpaceUsagePlanItemMessages *)arg1 ;
-(void)setVoice:(CTCarrierSpaceUsagePlanItemVoice *)arg1 ;
-(void)setRemainingBalance:(NSString *)arg1 ;
-(void)setThrottled:(BOOL)arg1 ;
-(void)setLastUpdatedAt:(NSDate *)arg1 ;
@end

