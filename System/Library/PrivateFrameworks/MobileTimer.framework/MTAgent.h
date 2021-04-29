/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>
#import <libobjc.A.dylib/MTSystemStateDelegate.h>

@protocol NAScheduler, MTNotificationCenter;
@class NSDate, MTAgentNotificationManager, MTSystemStateListener, MTLanguageChangeListener, MTAgentDiagnosticListener, MTTimeListener, MTAlarmServer, MTAlarmScheduler, MTAlarmSnapshot, MTAlarmStorage, MTTimerServer, MTTimerScheduler, MTTimerSnapshot, MTTimerStorage, MTTimerIntentDonor, MTCoreDuetMonitor, NSString;

@interface MTAgent : NSObject <MTAgentDiagnosticDelegate, MTSystemStateDelegate> {

	BOOL _systemReady;
	NSDate* _launchDate;
	id<NAScheduler> _serializer;
	MTAgentNotificationManager* _notificationManager;
	MTSystemStateListener* _systemStateListener;
	MTLanguageChangeListener* _languageChangeListener;
	MTAgentDiagnosticListener* _diagnostics;
	MTTimeListener* _timeListener;
	MTAlarmServer* _alarmServer;
	MTAlarmScheduler* _alarmScheduler;
	MTAlarmSnapshot* _alarmSnapshot;
	MTAlarmStorage* _alarmStorage;
	MTTimerServer* _timerServer;
	MTTimerScheduler* _timerScheduler;
	MTTimerSnapshot* _timerSnapshot;
	MTTimerStorage* _timerStorage;
	id<MTNotificationCenter> _notificationCenter;
	MTTimerIntentDonor* _timerIntentDonor;
	MTCoreDuetMonitor* _coreDuetMonitor;

}

@property (nonatomic,retain) NSDate * launchDate;                                            //@synthesize launchDate=_launchDate - In the implementation block
@property (assign,nonatomic) BOOL systemReady;                                               //@synthesize systemReady=_systemReady - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                     //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTAgentNotificationManager * notificationManager;               //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,retain) MTSystemStateListener * systemStateListener;                    //@synthesize systemStateListener=_systemStateListener - In the implementation block
@property (nonatomic,retain) MTLanguageChangeListener * languageChangeListener;              //@synthesize languageChangeListener=_languageChangeListener - In the implementation block
@property (nonatomic,retain) MTAgentDiagnosticListener * diagnostics;                        //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) MTTimeListener * timeListener;                                  //@synthesize timeListener=_timeListener - In the implementation block
@property (nonatomic,retain) MTAlarmServer * alarmServer;                                    //@synthesize alarmServer=_alarmServer - In the implementation block
@property (nonatomic,retain) MTAlarmScheduler * alarmScheduler;                              //@synthesize alarmScheduler=_alarmScheduler - In the implementation block
@property (nonatomic,retain) MTAlarmSnapshot * alarmSnapshot;                                //@synthesize alarmSnapshot=_alarmSnapshot - In the implementation block
@property (nonatomic,retain) MTAlarmStorage * alarmStorage;                                  //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) MTTimerServer * timerServer;                                    //@synthesize timerServer=_timerServer - In the implementation block
@property (nonatomic,retain) MTTimerScheduler * timerScheduler;                              //@synthesize timerScheduler=_timerScheduler - In the implementation block
@property (nonatomic,retain) MTTimerSnapshot * timerSnapshot;                                //@synthesize timerSnapshot=_timerSnapshot - In the implementation block
@property (nonatomic,retain) MTTimerStorage * timerStorage;                                  //@synthesize timerStorage=_timerStorage - In the implementation block
@property (nonatomic,retain) id<MTNotificationCenter> notificationCenter;                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) MTTimerIntentDonor * timerIntentDonor;                          //@synthesize timerIntentDonor=_timerIntentDonor - In the implementation block
@property (nonatomic,retain) MTCoreDuetMonitor * coreDuetMonitor;                            //@synthesize coreDuetMonitor=_coreDuetMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)agent;
-(id)init;
-(MTAgentNotificationManager *)notificationManager;
-(void)setNotificationManager:(MTAgentNotificationManager *)arg1 ;
-(id<MTNotificationCenter>)notificationCenter;
-(MTAlarmSnapshot *)alarmSnapshot;
-(MTTimerSnapshot *)timerSnapshot;
-(MTAgentDiagnosticListener *)diagnostics;
-(void)setDiagnostics:(MTAgentDiagnosticListener *)arg1 ;
-(void)_setupNotificationCenter;
-(void)setNotificationCenter:(id<MTNotificationCenter>)arg1 ;
-(id<NAScheduler>)serializer;
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(void)handleF5Reset;
-(void)handleMigrationFinish;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(MTAlarmStorage *)alarmStorage;
-(MTTimerStorage *)timerStorage;
-(void)setAlarmStorage:(MTAlarmStorage *)arg1 ;
-(void)setTimerStorage:(MTTimerStorage *)arg1 ;
-(void)restoreDidFinish;
-(void)_setupAlarms;
-(void)_setupTimers;
-(void)_setupInitialListeners;
-(void)_setupSecondaryListeners;
-(MTSystemStateListener *)systemStateListener;
-(MTAlarmServer *)alarmServer;
-(MTAlarmScheduler *)alarmScheduler;
-(MTTimerServer *)timerServer;
-(MTTimerScheduler *)timerScheduler;
-(NSDate *)launchDate;
-(id)_diagnosticProviders;
-(void)setLaunchDate:(NSDate *)arg1 ;
-(BOOL)systemReady;
-(void)setSystemReady:(BOOL)arg1 ;
-(void)setSystemStateListener:(MTSystemStateListener *)arg1 ;
-(MTLanguageChangeListener *)languageChangeListener;
-(void)setLanguageChangeListener:(MTLanguageChangeListener *)arg1 ;
-(MTTimeListener *)timeListener;
-(void)setTimeListener:(MTTimeListener *)arg1 ;
-(void)setAlarmServer:(MTAlarmServer *)arg1 ;
-(void)setAlarmScheduler:(MTAlarmScheduler *)arg1 ;
-(void)setAlarmSnapshot:(MTAlarmSnapshot *)arg1 ;
-(void)setTimerServer:(MTTimerServer *)arg1 ;
-(void)setTimerScheduler:(MTTimerScheduler *)arg1 ;
-(void)setTimerSnapshot:(MTTimerSnapshot *)arg1 ;
-(MTTimerIntentDonor *)timerIntentDonor;
-(void)setTimerIntentDonor:(MTTimerIntentDonor *)arg1 ;
-(MTCoreDuetMonitor *)coreDuetMonitor;
-(void)setCoreDuetMonitor:(MTCoreDuetMonitor *)arg1 ;
@end
