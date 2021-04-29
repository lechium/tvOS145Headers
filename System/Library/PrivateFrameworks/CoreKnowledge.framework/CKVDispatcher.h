/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, CKVDonateServiceProvider, CKVDonateTaskProvider;
@class NSObject, NSXPCListener, CKVSettings, CKVTaskCoalescenceManager, NSString;

@interface CKVDispatcher : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _donateServiceListener;
	NSObject*<CKVDonateServiceProvider> _donateServiceProvider;
	NSObject*<CKVDonateTaskProvider> _donateTaskProvider;
	CKVSettings* _settings;
	CKVTaskCoalescenceManager* _coalescenceManager;

}

@property (nonatomic,readonly) NSXPCListener * donateServiceListener;              //@synthesize donateServiceListener=_donateServiceListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDispatcher;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithQueue:(id)arg1 donateServiceProvider:(id)arg2 donateTaskProvider:(id)arg3 settings:(id)arg4 coalescenceManager:(id)arg5 ;
-(id)_listenerWithMachServiceName:(id)arg1 delegate:(id)arg2 ;
-(BOOL)_donateServiceShouldAcceptNewConnection:(id)arg1 ;
-(void)_handleSiriSettingsChangeNotification;
-(void)_handleAddressBookChangeNotification;
-(void)_handleINVocabularyChangeNotification;
-(void)_handleLSApplicationChangeNotification;
-(void)_donateCustomVocabularyIfEnabled:(unsigned short)arg1 completion:(/*^block*/id)arg2 ;
-(void)_donateContactsIfEnabled:(unsigned short)arg1 completion:(/*^block*/id)arg2 ;
-(void)_donateAppInfoIfEnabled:(unsigned short)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerXPCActivities;
-(void)setupXPCListeners;
-(BOOL)handleDarwinNotificationEventWithName:(id)arg1 ;
-(BOOL)handleDistributedNotificationEventWithName:(id)arg1 ;
-(void)runPostOSInstallMigration:(/*^block*/id)arg1 ;
-(NSXPCListener *)donateServiceListener;
@end

