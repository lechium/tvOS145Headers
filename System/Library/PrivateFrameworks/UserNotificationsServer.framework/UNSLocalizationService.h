/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface UNSLocalizationService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _bundleIdentifierToBundle;
	NSMutableDictionary* _bundleIdentifierToBundleURL;

}
-(id)init;
-(id)bundleWithIdentifier:(id)arg1 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(id)_queue_bundleWithIdentifier:(id)arg1 ;
-(void)_queue_notificationSourcesDidInstall:(id)arg1 ;
@end

