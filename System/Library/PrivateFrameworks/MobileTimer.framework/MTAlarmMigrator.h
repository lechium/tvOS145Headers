/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, MTAlarm;

@interface MTAlarmMigrator : NSObject {

	NSMutableArray* _alarms;
	MTAlarm* _sleepAlarm;

}

@property (nonatomic,retain) NSMutableArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) MTAlarm * sleepAlarm;                 //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
-(NSMutableArray *)alarms;
-(void)setAlarms:(NSMutableArray *)arg1 ;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(MTAlarm *)sleepAlarm;
-(void)migrateFromOldStorage;
-(void)removeFromOldStorage;
-(void)cleanUpOldNotifications;
@end
