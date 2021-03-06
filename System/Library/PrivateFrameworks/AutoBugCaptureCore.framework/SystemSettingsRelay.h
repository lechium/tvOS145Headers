/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyShimDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSString;

@interface SystemSettingsRelay : NSObject <CoreTelephonyShimDelegate> {

	CTServerConnectionRef _serverConnection;
	BOOL _wifiEnabled;
	BOOL _airplaneModeSwitchEnabled;
	BOOL _cellDataSwitchEnabled;
	BOOL _rnfEnabled;
	BOOL _noBackhaulEnabled;
	BOOL _smartDataModeEnabled;
	BOOL _autoBugCaptureEnabled;
	BOOL _autoFeedbackAssistantEnable;
	BOOL _autoBugCaptureAvailable;
	BOOL _registeredForAutoBugCaptureChangeNotifications;
	BOOL _autoFeedbackAssistantInitialized;
	NSDictionary* _autoBugCaptureConfiguration;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSDictionary * autoBugCaptureConfiguration;                       //@synthesize autoBugCaptureConfiguration=_autoBugCaptureConfiguration - In the implementation block
@property (assign,nonatomic) BOOL registeredForAutoBugCaptureChangeNotifications;              //@synthesize registeredForAutoBugCaptureChangeNotifications=_registeredForAutoBugCaptureChangeNotifications - In the implementation block
@property (assign,nonatomic) BOOL autoFeedbackAssistantInitialized;                            //@synthesize autoFeedbackAssistantInitialized=_autoFeedbackAssistantInitialized - In the implementation block
@property (assign,nonatomic) BOOL smartDataModeEnabled;                                        //@synthesize smartDataModeEnabled=_smartDataModeEnabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (readonly) BOOL wifiEnabled;                                                         //@synthesize wifiEnabled=_wifiEnabled - In the implementation block
@property (readonly) BOOL airplaneModeSwitchEnabled;                                           //@synthesize airplaneModeSwitchEnabled=_airplaneModeSwitchEnabled - In the implementation block
@property (readonly) BOOL cellDataSwitchEnabled;                                               //@synthesize cellDataSwitchEnabled=_cellDataSwitchEnabled - In the implementation block
@property (readonly) BOOL rnfEnabled;                                                          //@synthesize rnfEnabled=_rnfEnabled - In the implementation block
@property (readonly) BOOL noBackhaulEnabled;                                                   //@synthesize noBackhaulEnabled=_noBackhaulEnabled - In the implementation block
@property (readonly) BOOL autoBugCaptureEnabled;                                               //@synthesize autoBugCaptureEnabled=_autoBugCaptureEnabled - In the implementation block
@property (readonly) BOOL autoFeedbackAssistantEnable;                                         //@synthesize autoFeedbackAssistantEnable=_autoFeedbackAssistantEnable - In the implementation block
@property (readonly) BOOL autoBugCaptureAvailable;                                             //@synthesize autoBugCaptureAvailable=_autoBugCaptureAvailable - In the implementation block
@property (readonly) int autoBugCaptureEnhancedBetaFeedbackState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)defaultRelay;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)wifiEnabled;
-(BOOL)smartDataModeEnabled;
-(void)registerForAutoBugCaptureChangeNotifications;
-(BOOL)autoFeedbackAssistantEnable;
-(BOOL)autoBugCaptureEnabled;
-(void)smartDataModeChangedToUserEnabled:(BOOL)arg1 ;
-(void)ctServerConnectionNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2 ;
-(void)rnfSettingChangedToFeatureEnabled:(BOOL)arg1 userEnabled:(BOOL)arg2 ;
-(int)autoBugCaptureEnhancedBetaFeedbackState;
-(NSDictionary *)autoBugCaptureConfiguration;
-(BOOL)autoBugCaptureAvailable;
-(BOOL)airplaneModeSwitchEnabled;
-(BOOL)cellDataSwitchEnabled;
-(void)_setAirplaneModeSwitchEnabled:(BOOL)arg1 ;
-(void)_setWifiEnabled:(BOOL)arg1 ;
-(void)_setCellDataSwitchEnabled:(BOOL)arg1 ;
-(void)_setRnfEnabled:(BOOL)arg1 ;
-(void)_setNoBackhaulEnabled:(BOOL)arg1 ;
-(BOOL)noBackhaulEnabled;
-(void)_setSmartDataModeEnabled:(BOOL)arg1 ;
-(void)getAutoBugCaptureConfiguration;
-(void)setAutoBugCaptureConfiguration:(NSDictionary *)arg1 ;
-(void)setAutoFeedbackAssistantInitialized:(BOOL)arg1 ;
-(BOOL)autoFeedbackAssistantInitialized;
-(void)_setAutoBugCaptureEnabled:(BOOL)arg1 ;
-(void)_setAutoBugCaptureAvailable:(BOOL)arg1 ;
-(void)_setAutoFeedbackAssistantEnable:(BOOL)arg1 ;
-(BOOL)rnfEnabled;
-(void)setSmartDataModeEnabled:(BOOL)arg1 ;
-(BOOL)registeredForAutoBugCaptureChangeNotifications;
-(void)setRegisteredForAutoBugCaptureChangeNotifications:(BOOL)arg1 ;
@end

