/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileTimer/MobileTimer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTPBSound;

@interface MTPBAlarmProperties : PBCodable <NSCopying> {

	double _bedtimeDismissedDate;
	double _bedtimeFiredDate;
	double _bedtimeSnoozeFireDate;
	double _dismissedDate;
	double _firedDate;
	double _keepOffUntilDate;
	double _lastModifiedDate;
	double _snoozeFireDate;
	NSString* _alarmID;
	unsigned _bedtimeDismissedAction;
	unsigned _bedtimeHour;
	unsigned _bedtimeMinute;
	unsigned _bedtimeReminderMinutes;
	unsigned _daySetting;
	unsigned _dismissedAction;
	unsigned _hour;
	unsigned _minute;
	unsigned _onboardingVersion;
	unsigned _playOptions;
	unsigned _revision;
	unsigned _bedtimeDoNotDisturbOptions;
	MTPBSound* _sound;
	NSString* _title;
	BOOL _allowsSnooze;
	BOOL _isEnabled;
	BOOL _isSleepAlarm;
	BOOL _bedtimeDoNotDisturb;
	BOOL _sleepSchedule;
	BOOL _sleepTracking;
	BOOL _timeInBedTracking;
	SCD_Struct_MT4 _has;

}

@property (nonatomic,readonly) BOOL hasAlarmID; 
@property (nonatomic,retain) NSString * alarmID;                               //@synthesize alarmID=_alarmID - In the implementation block
@property (assign,nonatomic) BOOL hasHour; 
@property (assign,nonatomic) unsigned hour;                                    //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) BOOL hasMinute; 
@property (assign,nonatomic) unsigned minute;                                  //@synthesize minute=_minute - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsSnooze; 
@property (assign,nonatomic) BOOL allowsSnooze;                                //@synthesize allowsSnooze=_allowsSnooze - In the implementation block
@property (assign,nonatomic) BOOL hasDaySetting; 
@property (assign,nonatomic) unsigned daySetting;                              //@synthesize daySetting=_daySetting - In the implementation block
@property (nonatomic,readonly) BOOL hasSound; 
@property (nonatomic,retain) MTPBSound * sound;                                //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) BOOL hasIsSleepAlarm; 
@property (assign,nonatomic) BOOL isSleepAlarm;                                //@synthesize isSleepAlarm=_isSleepAlarm - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeHour; 
@property (assign,nonatomic) unsigned bedtimeHour;                             //@synthesize bedtimeHour=_bedtimeHour - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeMinute; 
@property (assign,nonatomic) unsigned bedtimeMinute;                           //@synthesize bedtimeMinute=_bedtimeMinute - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeReminderMinutes; 
@property (assign,nonatomic) unsigned bedtimeReminderMinutes;                  //@synthesize bedtimeReminderMinutes=_bedtimeReminderMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasRevision; 
@property (assign,nonatomic) unsigned revision;                                //@synthesize revision=_revision - In the implementation block
@property (assign,nonatomic) BOOL hasLastModifiedDate; 
@property (assign,nonatomic) double lastModifiedDate;                          //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (assign,nonatomic) BOOL hasSnoozeFireDate; 
@property (assign,nonatomic) double snoozeFireDate;                            //@synthesize snoozeFireDate=_snoozeFireDate - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeSnoozeFireDate; 
@property (assign,nonatomic) double bedtimeSnoozeFireDate;                     //@synthesize bedtimeSnoozeFireDate=_bedtimeSnoozeFireDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsEnabled; 
@property (assign,nonatomic) BOOL isEnabled;                                   //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasFiredDate; 
@property (assign,nonatomic) double firedDate;                                 //@synthesize firedDate=_firedDate - In the implementation block
@property (assign,nonatomic) BOOL hasDismissedDate; 
@property (assign,nonatomic) double dismissedDate;                             //@synthesize dismissedDate=_dismissedDate - In the implementation block
@property (assign,nonatomic) BOOL hasPlayOptions; 
@property (assign,nonatomic) unsigned playOptions;                             //@synthesize playOptions=_playOptions - In the implementation block
@property (assign,nonatomic) BOOL hasSleepMode; 
@property (assign,nonatomic) BOOL bedtimeDoNotDisturb;                         //@synthesize bedtimeDoNotDisturb=_bedtimeDoNotDisturb - In the implementation block
@property (assign,nonatomic) BOOL hasSleepTracking; 
@property (assign,nonatomic) BOOL sleepTracking;                               //@synthesize sleepTracking=_sleepTracking - In the implementation block
@property (assign,nonatomic) BOOL hasSleepSchedule; 
@property (assign,nonatomic) BOOL sleepSchedule;                               //@synthesize sleepSchedule=_sleepSchedule - In the implementation block
@property (assign,nonatomic) BOOL hasOnboardingVersion; 
@property (assign,nonatomic) unsigned onboardingVersion;                       //@synthesize onboardingVersion=_onboardingVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSleepModeOptions; 
@property (assign,nonatomic) unsigned bedtimeDoNotDisturbOptions;              //@synthesize bedtimeDoNotDisturbOptions=_bedtimeDoNotDisturbOptions - In the implementation block
@property (assign,nonatomic) BOOL hasTimeInBedTracking; 
@property (assign,nonatomic) BOOL timeInBedTracking;                           //@synthesize timeInBedTracking=_timeInBedTracking - In the implementation block
@property (assign,nonatomic) BOOL hasDismissedAction; 
@property (assign,nonatomic) unsigned dismissedAction;                         //@synthesize dismissedAction=_dismissedAction - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeFiredDate; 
@property (assign,nonatomic) double bedtimeFiredDate;                          //@synthesize bedtimeFiredDate=_bedtimeFiredDate - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeDismissedDate; 
@property (assign,nonatomic) double bedtimeDismissedDate;                      //@synthesize bedtimeDismissedDate=_bedtimeDismissedDate - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeDismissedAction; 
@property (assign,nonatomic) unsigned bedtimeDismissedAction;                  //@synthesize bedtimeDismissedAction=_bedtimeDismissedAction - In the implementation block
@property (assign,nonatomic) BOOL hasKeepOffUntilDate; 
@property (assign,nonatomic) double keepOffUntilDate;                          //@synthesize keepOffUntilDate=_keepOffUntilDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setHour:(unsigned)arg1 ;
-(void)setMinute:(unsigned)arg1 ;
-(unsigned)hour;
-(unsigned)minute;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)lastModifiedDate;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setHasIsEnabled:(BOOL)arg1 ;
-(BOOL)hasIsEnabled;
-(void)setRevision:(unsigned)arg1 ;
-(double)firedDate;
-(BOOL)hasTitle;
-(void)setSound:(MTPBSound *)arg1 ;
-(MTPBSound *)sound;
-(NSString *)alarmID;
-(void)setLastModifiedDate:(double)arg1 ;
-(BOOL)isSleepAlarm;
-(unsigned)revision;
-(unsigned)bedtimeHour;
-(void)setBedtimeHour:(unsigned)arg1 ;
-(unsigned)bedtimeMinute;
-(void)setBedtimeMinute:(unsigned)arg1 ;
-(double)dismissedDate;
-(void)setFiredDate:(double)arg1 ;
-(void)setDismissedDate:(double)arg1 ;
-(void)setAlarmID:(NSString *)arg1 ;
-(void)setAllowsSnooze:(BOOL)arg1 ;
-(void)setDaySetting:(unsigned)arg1 ;
-(void)setIsSleepAlarm:(BOOL)arg1 ;
-(void)setBedtimeReminderMinutes:(unsigned)arg1 ;
-(unsigned)daySetting;
-(BOOL)allowsSnooze;
-(unsigned)bedtimeReminderMinutes;
-(double)snoozeFireDate;
-(void)setSnoozeFireDate:(double)arg1 ;
-(unsigned)dismissedAction;
-(void)setDismissedAction:(unsigned)arg1 ;
-(double)bedtimeFiredDate;
-(void)setBedtimeFiredDate:(double)arg1 ;
-(double)bedtimeDismissedDate;
-(void)setBedtimeDismissedDate:(double)arg1 ;
-(unsigned)bedtimeDismissedAction;
-(void)setBedtimeDismissedAction:(unsigned)arg1 ;
-(double)bedtimeSnoozeFireDate;
-(void)setBedtimeSnoozeFireDate:(double)arg1 ;
-(double)keepOffUntilDate;
-(BOOL)sleepSchedule;
-(void)setSleepSchedule:(BOOL)arg1 ;
-(void)setPlayOptions:(unsigned)arg1 ;
-(void)setBedtimeDoNotDisturbOptions:(unsigned)arg1 ;
-(BOOL)bedtimeDoNotDisturb;
-(unsigned)bedtimeDoNotDisturbOptions;
-(BOOL)timeInBedTracking;
-(unsigned)playOptions;
-(unsigned)onboardingVersion;
-(void)setBedtimeDoNotDisturb:(BOOL)arg1 ;
-(void)setTimeInBedTracking:(BOOL)arg1 ;
-(void)setKeepOffUntilDate:(double)arg1 ;
-(void)setOnboardingVersion:(unsigned)arg1 ;
-(BOOL)hasAlarmID;
-(void)setHasHour:(BOOL)arg1 ;
-(BOOL)hasHour;
-(void)setHasMinute:(BOOL)arg1 ;
-(BOOL)hasMinute;
-(void)setHasAllowsSnooze:(BOOL)arg1 ;
-(BOOL)hasAllowsSnooze;
-(void)setHasDaySetting:(BOOL)arg1 ;
-(BOOL)hasDaySetting;
-(BOOL)hasSound;
-(void)setHasIsSleepAlarm:(BOOL)arg1 ;
-(BOOL)hasIsSleepAlarm;
-(void)setHasBedtimeHour:(BOOL)arg1 ;
-(BOOL)hasBedtimeHour;
-(void)setHasBedtimeMinute:(BOOL)arg1 ;
-(BOOL)hasBedtimeMinute;
-(void)setHasBedtimeReminderMinutes:(BOOL)arg1 ;
-(BOOL)hasBedtimeReminderMinutes;
-(void)setHasRevision:(BOOL)arg1 ;
-(BOOL)hasRevision;
-(void)setHasLastModifiedDate:(BOOL)arg1 ;
-(BOOL)hasLastModifiedDate;
-(void)setHasSnoozeFireDate:(BOOL)arg1 ;
-(BOOL)hasSnoozeFireDate;
-(void)setHasBedtimeSnoozeFireDate:(BOOL)arg1 ;
-(BOOL)hasBedtimeSnoozeFireDate;
-(void)setHasFiredDate:(BOOL)arg1 ;
-(BOOL)hasFiredDate;
-(void)setHasDismissedDate:(BOOL)arg1 ;
-(BOOL)hasDismissedDate;
-(void)setHasPlayOptions:(BOOL)arg1 ;
-(BOOL)hasPlayOptions;
-(void)setSleepMode:(BOOL)arg1 ;
-(void)setHasSleepMode:(BOOL)arg1 ;
-(BOOL)hasSleepMode;
-(void)setSleepTracking:(BOOL)arg1 ;
-(void)setHasSleepTracking:(BOOL)arg1 ;
-(BOOL)hasSleepTracking;
-(void)setHasSleepSchedule:(BOOL)arg1 ;
-(BOOL)hasSleepSchedule;
-(void)setHasOnboardingVersion:(BOOL)arg1 ;
-(BOOL)hasOnboardingVersion;
-(void)setSleepModeOptions:(unsigned)arg1 ;
-(void)setHasSleepModeOptions:(BOOL)arg1 ;
-(BOOL)hasSleepModeOptions;
-(void)setHasTimeInBedTracking:(BOOL)arg1 ;
-(BOOL)hasTimeInBedTracking;
-(void)setHasDismissedAction:(BOOL)arg1 ;
-(BOOL)hasDismissedAction;
-(void)setHasBedtimeFiredDate:(BOOL)arg1 ;
-(BOOL)hasBedtimeFiredDate;
-(void)setHasBedtimeDismissedDate:(BOOL)arg1 ;
-(BOOL)hasBedtimeDismissedDate;
-(void)setHasBedtimeDismissedAction:(BOOL)arg1 ;
-(BOOL)hasBedtimeDismissedAction;
-(void)setHasKeepOffUntilDate:(BOOL)arg1 ;
-(BOOL)hasKeepOffUntilDate;
-(BOOL)sleepTracking;
@end

