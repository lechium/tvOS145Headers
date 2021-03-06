/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNChangeNotificationReceiver.h>

@protocol CNSchedulerProvider, CNContactsLoggerProvider, OS_dispatch_queue;
@class NSMapTable, NSMutableDictionary, NSCountedSet, NSObject, CNCoalescingTimer, NSString;

@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver> {

	BOOL forwardsSelfGeneratedDistributedSaveNotifications;
	double _externalNotificationCoalescingDelay;
	NSMapTable* _removalBlocks;
	NSMapTable* _notifyingBlocks;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNContactsLoggerProvider> _loggerProvider;
	NSMutableDictionary* _notificationForwardingMapping;
	NSCountedSet* _supressedNotificationNames;
	NSMutableDictionary* _notificationsToBeSentOnceAllowed;
	NSObject*<OS_dispatch_queue> _notifierQueue;
	CNCoalescingTimer* _coalescingTimer;
	NSString* _coalescingNotificationName;

}

@property (assign,nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications; 
@property (assign,nonatomic) double externalNotificationCoalescingDelay;                          //@synthesize externalNotificationCoalescingDelay=_externalNotificationCoalescingDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)externalNotificationCoalescingDelay;
-(void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(BOOL)arg5 ;
-(void)receiveExternalNotificationName:(id)arg1 ;
-(BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1 ;
-(void)setExternalNotificationCoalescingDelay:(double)arg1 ;
-(void)waitForCurrentTasksToFinish;
@end

