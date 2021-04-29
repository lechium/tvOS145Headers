/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class UNSDefaultDataProviderFactory, UNSCriticalAlertAuthorizationAlertController, UNSNotificationAuthorizationAlertController, NSObject;

@interface UNSNotificationAuthorizationService : NSObject {

	UNSDefaultDataProviderFactory* _dataProviderFactory;
	UNSCriticalAlertAuthorizationAlertController* _criticalAlertAuthorizationAlertController;
	UNSNotificationAuthorizationAlertController* _notificationAuthorizationAlertController;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 expirationDate:(id)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 withExpirationDate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_queue_requestRemoveAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_didForegroundApplicationWithBundleIdentifier:(id)arg1 ;
-(BOOL)_queue_isCarPlayAvailableForApplication:(id)arg1 ;
-(BOOL)_queue_isSpokenAvailableForApplication:(id)arg1 ;
-(id)initWithDataProviderFactory:(id)arg1 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestRemoveAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
@end

