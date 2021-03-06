//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "INDaemon.h"

#import "FAFamilyNotificationDelegate-Protocol.h"

@class INAccountEventPushHandler, NSDictionary, NSString;

@interface INDaemon_iOS : INDaemon <FAFamilyNotificationDelegate>
{
    NSDictionary *_familyPushNotificationHandlersByEventType;	// 8 = 0x8
    NSDictionary *_accountPushNotificationHandlersByEventType;	// 16 = 0x10
    INAccountEventPushHandler *_accountDefaultEventPushNotificationHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000de5c
- (void)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ddec
- (void)commonHeadersForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000dd80
- (void)remoteFreshmintFlowCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000010000dd7c
- (void)presentHiddenFreshmintWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000dc44
- (void)notifyDeviceStorageLevel:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000dbe0
- (void)iCloudServerOfferForAccountWithID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000dad8
- (void)updateOfferForAccountWithID:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010000da4c
- (void)didDismissFamilyNotification:(id)arg1;	// IMP=0x000000010000d9ec
- (void)didClearFamilyNotification:(id)arg1;	// IMP=0x000000010000d98c
- (void)didActivateFamilyNotification:(id)arg1;	// IMP=0x000000010000d6ac
- (void)handleICloudQuotaPush:(id)arg1;	// IMP=0x000000010000d664
- (id)pushTopics;	// IMP=0x000000010000d5b8
- (id)familyPushNotificationHandlerForEventType:(id)arg1;	// IMP=0x000000010000d5a0
- (id)accountPushNotificationHandlerForEventType:(id)arg1;	// IMP=0x000000010000d504
- (void)_loadPushNotificationHandlers;	// IMP=0x000000010000d108
- (void)handlePushUnregistrationWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d068
- (void)handlePushRegistrationWithAccount:(id)arg1;	// IMP=0x000000010000d064
- (void)_handleDeviceDidPairEvent;	// IMP=0x000000010000ccd0
- (void)_handleDeviceNameChangeEvent;	// IMP=0x000000010000c93c
- (void)_configureXPCEventStreamHandler;	// IMP=0x000000010000c6d0
- (void)dealloc;	// IMP=0x000000010000c69c
- (void)start;	// IMP=0x000000010000c60c
- (id)init;	// IMP=0x000000010000c580

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

