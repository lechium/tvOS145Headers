/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoordinationCore/CoordinationCore-Structs.h>
#import <CoordinationCore/COMeshAddOn.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/COAlarmManagerServiceInterface.h>

@protocol COAlarmAddOnListenerProvider;
@class COClientObserverSet, NSArray, MTAlarmManager, NSXPCListener, COHomeKitAdapter, COHomeHubAdapter, NSString;

@interface COMeshAlarmAddOn : COMeshAddOn <NSXPCListenerDelegate, COAlarmManagerServiceInterface> {

	os_unfair_lock_s _lock;
	COClientObserverSet* _observers;
	NSArray* _clients;
	MTAlarmManager* _alarmManager;
	id<COAlarmAddOnListenerProvider> _provider;
	NSXPCListener* _listener;
	COHomeKitAdapter* _homekit;
	COHomeHubAdapter* _homehub;
	MTAlarmManager* _observedAlarmManager;

}

@property (nonatomic,readonly) id<COAlarmAddOnListenerProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSArray * clients;                                          //@synthesize clients=_clients - In the implementation block
@property (nonatomic,readonly) BOOL performsLocalActions; 
@property (nonatomic,readonly) NSXPCListener * listener;                               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy,readonly) COClientObserverSet * observers;                   //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) COHomeKitAdapter * homekit;                             //@synthesize homekit=_homekit - In the implementation block
@property (nonatomic,readonly) COHomeHubAdapter * homehub;                             //@synthesize homehub=_homehub - In the implementation block
@property (nonatomic,readonly) MTAlarmManager * observedAlarmManager;                  //@synthesize observedAlarmManager=_observedAlarmManager - In the implementation block
@property (nonatomic,readonly) MTAlarmManager * alarmManager;                          //@synthesize alarmManager=_alarmManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSArray *)clients;
-(NSXPCListener *)listener;
-(void)setClients:(NSArray *)arg1 ;
-(id<COAlarmAddOnListenerProvider>)provider;
-(id)_sendRequest:(id)arg1 ;
-(COClientObserverSet *)observers;
-(id)alarms;
-(id)removeAlarm:(id)arg1 ;
-(id)addAlarm:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(MTAlarmManager *)alarmManager;
-(id)initWithAlarmManager:(id)arg1 ;
-(id)updateAlarm:(id)arg1 ;
-(id)dismissAlarmWithIdentifier:(id)arg1 ;
-(void)alarmsforAccessoryUniqueIdentifier:(id)arg1 asInstance:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)addAlarm:(id)arg1 asInstance:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)updateAlarm:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)removeAlarm:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)snoozeAlarmWithIdentifier:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)dismissAlarmWithIdentifier:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)addObserverForNotificationName:(id)arg1 constraints:(id)arg2 asInstance:(id)arg3 withCallback:(/*^block*/id)arg4 ;
-(void)removeObserverForNotificationName:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)canDispatchForAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)alarmsForAccessory:(id)arg1 ;
-(void)didAddToMeshController:(id)arg1 ;
-(void)willRemoveFromMeshController:(id)arg1 ;
-(void)willStartMeshController:(id)arg1 ;
-(void)didStopMeshController:(id)arg1 ;
-(void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2 ;
-(void)didChangeNodesForMeshController:(id)arg1 ;
-(COHomeKitAdapter *)homekit;
-(COHomeHubAdapter *)homehub;
-(BOOL)performsLocalActions;
-(void)_addCompletionsToFuture:(id)arg1 withXPCCallback:(/*^block*/id)arg2 transactionDescription:(const char*)arg3 ;
-(void)_replicateToMobileTimerFromHomeKit;
-(void)_significantHomeChange:(id)arg1 ;
-(void)_accessorySettingValueUpdated:(id)arg1 ;
-(void)_alarmManagerAlarmsAdded:(id)arg1 ;
-(void)_alarmManagerAlarmsRemoved:(id)arg1 ;
-(void)_alarmManagerAlarmsUpdated:(id)arg1 ;
-(id)initWithAlarmManager:(id)arg1 homekitAdapter:(id)arg2 hubAdapter:(id)arg3 listenerProvider:(id)arg4 ;
-(id)initWithAlarmManager:(id)arg1 listenerProvider:(id)arg2 ;
-(void)handleAlarmCreateRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)handleAlarmReadRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)handleAlarmUpdateRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)handleAlarmDeleteRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)handleAlarmDismissRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)handleAlarmsAddedNotification:(id)arg1 ;
-(void)handleAlarmsRemovedNotification:(id)arg1 ;
-(void)handleAlarmFiringAlarmDismissedNotification:(id)arg1 ;
-(void)handleAlarmFiredNotification:(id)arg1 ;
-(void)handleAlarmsChangedNotification:(id)arg1 ;
-(void)handleAlarmsUpdatedNotification:(id)arg1 ;
-(void)handleAlarmManagerStateResetNotification:(id)arg1 ;
-(MTAlarmManager *)observedAlarmManager;
-(void)_alarmManagerAlarmFired:(id)arg1 ;
-(void)_alarmManagerStateReset:(id)arg1 ;
-(void)_alarmManagerAlarmsChanged:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 forAlarms:(id)arg2 requiresUserInfo:(BOOL)arg3 ;
-(id)_settingForCurrentAccessory;
-(void)_replicateToMobileTimerFromHomeKitSettings:(id)arg1 ;
-(BOOL)_isAlarm:(id)arg1 targetingAccessory:(id)arg2 ;
-(id)_alarmsForAccessoryIdentifier:(id)arg1 ;
-(BOOL)_isAlarm:(id)arg1 targetingAccessoryIdentifiers:(id)arg2 ;
-(id)_currentAccessoryForConnection:(id)arg1 ;
@end

