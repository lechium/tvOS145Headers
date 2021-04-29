/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UNSLocationMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSString, UNSNotificationRepository, UNSNotificationScheduleRepository, UNSPendingNotificationRepository, NSMutableArray, UNSLocationMonitor, PCPersistentTimer, NSObject;

@interface UNSLocalNotificationClient : NSObject <UNSLocationMonitorObserver> {

	NSString* _bundleIdentifier;
	UNSNotificationRepository* _notificationRepository;
	UNSNotificationScheduleRepository* _notificationScheduleRepository;
	UNSPendingNotificationRepository* _pendingNotificationRepository;
	NSMutableArray* _lazy_pendingNotificationsAwaitingDelivery;
	UNSLocationMonitor* _locationMonitor;
	PCPersistentTimer* _localNotificationTimer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _monitoringLocaleAndTimeChanges;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)_dateFormatter;
-(void)handleSignificantTimeChange;
-(void)addPendingNotificationRecords:(id)arg1 ;
-(void)setPendingNotificationRecords:(id)arg1 ;
-(void)removePendingNotificationRecordsWithIdentifiers:(id)arg1 ;
-(void)removePendingNotificationRecords:(id)arg1 ;
-(void)removeAllPendingNotificationRecords;
-(id)pendingNotificationRecords;
-(id)undeliveredNotificationRecords;
-(void)handleApplicationStateRestore;
-(void)handleLocaleChange;
-(id)initWithNotificationRepository:(id)arg1 pendingNotificationRepository:(id)arg2 notificationScheduleRepository:(id)arg3 locationMonitor:(id)arg4 bundleIdentifier:(id)arg5 queue:(id)arg6 ;
-(id)_pendingNotificationRecords;
-(id)_sanitizeNotificationRecords:(id)arg1 ;
-(void)_updateTimersAndRegionMonitorsForPendingNotificationRecords:(id)arg1 ;
-(void)_invalidateNotificationRecordTimersAndRegionMonitors;
-(void)_setLastLocalNotificationFireDate:(id)arg1 ;
-(void)_setRequestDateForPendingNotificationRecords:(id)arg1 ;
-(void)_setPendingNotificationRecords:(id)arg1 ;
-(void)_updateTimersForPendingNotificationRecords:(id)arg1 ;
-(id)_lastLocalNotificationFireDate;
-(void)_updateRegionMonitorsForPendingNotificationRecords:(id)arg1 ;
-(void)_invalidatePendingNotificationRecordTimers;
-(void)_invalidatePendingNotificationRecordRegionMonitors;
-(void)_queue_triggerDidFireForDate:(id)arg1 ;
-(void)_fireNotification:(id)arg1 ;
-(void)_queue_triggerDidFireForTimer:(id)arg1 ;
-(void)_queue_triggerDidFireForRegion:(id)arg1 ;
-(void)_setMonitoredRegions:(id)arg1 ;
-(void)locationMonitor:(id)arg1 triggerDidFireForRegion:(id)arg2 forBundleIdentifier:(id)arg3 ;
@end

