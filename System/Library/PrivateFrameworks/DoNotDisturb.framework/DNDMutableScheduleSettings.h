/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDScheduleSettings.h>

@class DNDScheduleTimePeriod;

@interface DNDMutableScheduleSettings : DNDScheduleSettings

@property (assign,nonatomic) unsigned long long scheduleEnabledSetting; 
@property (nonatomic,copy) DNDScheduleTimePeriod * timePeriod; 
@property (assign,nonatomic) unsigned long long bedtimeBehaviorEnabledSetting; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScheduleEnabledSetting:(unsigned long long)arg1 ;
-(void)setTimePeriod:(DNDScheduleTimePeriod *)arg1 ;
-(void)setBedtimeBehaviorEnabledSetting:(unsigned long long)arg1 ;
@end
