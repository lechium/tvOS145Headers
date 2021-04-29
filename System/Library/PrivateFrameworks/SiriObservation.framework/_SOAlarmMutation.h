/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/SOAlarmMutating.h>

@class SOAlarm, NSUUID, NSURL, NSString;

@interface _SOAlarmMutation : NSObject <SOAlarmMutating> {

	SOAlarm* _baseModel;
	NSUUID* _alarmID;
	NSURL* _alarmURL;
	NSString* _title;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _repeatSchedule;
	BOOL _isEnabled;
	BOOL _isFiring;
	struct {
		unsigned isDirty : 1;
		unsigned hasAlarmID : 1;
		unsigned hasAlarmURL : 1;
		unsigned hasTitle : 1;
		unsigned hasHour : 1;
		unsigned hasMinute : 1;
		unsigned hasRepeatSchedule : 1;
		unsigned hasIsEnabled : 1;
		unsigned hasIsFiring : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setHour:(unsigned long long)arg1 ;
-(void)setMinute:(unsigned long long)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)generate;
-(void)setIsFiring:(BOOL)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setAlarmID:(id)arg1 ;
-(void)setAlarmURL:(id)arg1 ;
-(void)setRepeatSchedule:(unsigned long long)arg1 ;
@end

