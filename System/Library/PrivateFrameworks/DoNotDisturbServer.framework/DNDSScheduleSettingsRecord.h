/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/DNDSBackingStoreRecord.h>

@class NSNumber, NSString;

@interface DNDSScheduleSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord> {

	NSNumber* _lastUpdatedTimestamp;
	NSNumber* _scheduleEnabledSetting;
	NSNumber* _timePeriodStartTimeHour;
	NSNumber* _timePeriodStartTimeMinute;
	NSNumber* _timePeriodEndTimeHour;
	NSNumber* _timePeriodEndTimeMinute;
	NSNumber* _bedtimeBehaviorEnabledSetting;

}

@property (nonatomic,copy,readonly) NSNumber * lastUpdatedTimestamp;                       //@synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * scheduleEnabledSetting;                     //@synthesize scheduleEnabledSetting=_scheduleEnabledSetting - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timePeriodStartTimeHour;                    //@synthesize timePeriodStartTimeHour=_timePeriodStartTimeHour - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timePeriodStartTimeMinute;                  //@synthesize timePeriodStartTimeMinute=_timePeriodStartTimeMinute - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timePeriodEndTimeHour;                      //@synthesize timePeriodEndTimeHour=_timePeriodEndTimeHour - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timePeriodEndTimeMinute;                    //@synthesize timePeriodEndTimeMinute=_timePeriodEndTimeMinute - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bedtimeBehaviorEnabledSetting;              //@synthesize bedtimeBehaviorEnabledSetting=_bedtimeBehaviorEnabledSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)newWithDictionaryRepresentation:(id)arg1 ;
+(id)_recordWithEncodedInfo:(id)arg1 error:(id*)arg2 ;
+(id)recordForLegacyBehaviorOverride:(id)arg1 lastUpdated:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)dictionaryRepresentation;
-(NSNumber *)lastUpdatedTimestamp;
-(NSNumber *)scheduleEnabledSetting;
-(NSNumber *)bedtimeBehaviorEnabledSetting;
-(id)_initWithRecord:(id)arg1 ;
-(NSNumber *)timePeriodStartTimeHour;
-(NSNumber *)timePeriodStartTimeMinute;
-(NSNumber *)timePeriodEndTimeHour;
-(NSNumber *)timePeriodEndTimeMinute;
-(id)_initWithLastUpdatedTimestamp:(id)arg1 scheduleEnabledSetting:(id)arg2 timePeriodStartTimeHour:(id)arg3 timePeriodStartTimeMinute:(id)arg4 timePeriodEndTimeHour:(id)arg5 timePeriodEndTimeMinute:(id)arg6 bedtimeBehaviorEnabledSetting:(id)arg7 ;
-(id)legacyBehaviorOverride;
@end

