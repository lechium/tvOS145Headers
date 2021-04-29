//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSMutableDictionary, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SBDPushNotificationController : NSObject <APSConnectionDelegate>
{
    NSString *_environment;	// 8 = 0x8
    NSMutableDictionary *_temporaryConnectionsByEnvironment;	// 16 = 0x10
    NSURL *_typeRegistrationURL;	// 24 = 0x18
    NSSet *_enabledDomains;	// 32 = 0x20
    _Bool _pushEnabled;	// 40 = 0x28
    _Bool _bagLoaded;	// 41 = 0x29
    _Bool _registrationUpdateScheduled;	// 42 = 0x2a
    id _fakeNotificationObserver;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    APSConnection *_connection;	// 64 = 0x40
    NSMutableDictionary *_weakDomainDelegates;	// 72 = 0x48
    NSMutableDictionary *_pendingAccountRequests;	// 80 = 0x50
    NSMutableDictionary *_registeredAccountsForDomains;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100011124
@property(readonly) NSMutableDictionary *registeredAccountsForDomains; // @synthesize registeredAccountsForDomains=_registeredAccountsForDomains;
@property(readonly) NSMutableDictionary *pendingAccountRequests; // @synthesize pendingAccountRequests=_pendingAccountRequests;
@property(readonly) NSMutableDictionary *weakDomainDelegates; // @synthesize weakDomainDelegates=_weakDomainDelegates;
@property(readonly) APSConnection *connection; // @synthesize connection=_connection;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_onQueue_updateStoreBookkeeperNotificationRegistration:(CDUnknownBlockType)arg1;	// IMP=0x00000001000106f8
- (void)updateStoreBookkeeperNotificationRegistration:(CDUnknownBlockType)arg1;	// IMP=0x000000010001051c
- (void)_onQueue_updateStoreBookkeeperNotificationRegistrationForDomain:(id)arg1 optIn:(_Bool)arg2 accountID:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000f498
- (id)_registeredAccountIDs;	// IMP=0x000000010000f328
- (id)_portNameForEnvironmentName:(id)arg1;	// IMP=0x000000010000f27c
- (void)_loadURLBagWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000eb1c
- (void)_startServiceConnectionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e218
- (void)updateNotificationRegistrationsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e20c
@property(retain) NSSet *enabledDomains;
- (_Bool)isEnabledForDomain:(id)arg1;	// IMP=0x000000010000dee8
- (void)setDelegate:(id)arg1 forBookkeeperDomain:(id)arg2;	// IMP=0x000000010000dda0
- (void)_onQueue_updateConnectionTopicsAndStoreRegistrations;	// IMP=0x000000010000dbdc
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x000000010000db18
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x000000010000da48
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;	// IMP=0x000000010000d948
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;	// IMP=0x000000010000d864
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x000000010000d780
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000010000d088
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000010000cfa4
- (void)dealloc;	// IMP=0x000000010000cc80
- (id)init;	// IMP=0x000000010000c958

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

