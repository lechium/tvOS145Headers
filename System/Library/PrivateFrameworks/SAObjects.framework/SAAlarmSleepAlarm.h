/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAlarmObject.h>

@class NSNumber;

@interface SAAlarmSleepAlarm : SAAlarmObject

@property (nonatomic,copy) NSNumber * bedtimeHour; 
@property (nonatomic,copy) NSNumber * bedtimeMinute; 
@property (nonatomic,copy) NSNumber * isFiringNext; 
@property (nonatomic,copy) NSNumber * isOverride; 
+(id)sleepAlarmWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setIsOverride:(NSNumber *)arg1 ;
-(NSNumber *)isOverride;
-(id)encodedClassName;
-(NSNumber *)bedtimeHour;
-(void)setBedtimeHour:(NSNumber *)arg1 ;
-(NSNumber *)bedtimeMinute;
-(void)setBedtimeMinute:(NSNumber *)arg1 ;
-(NSNumber *)isFiringNext;
-(void)setIsFiringNext:(NSNumber *)arg1 ;
@end
