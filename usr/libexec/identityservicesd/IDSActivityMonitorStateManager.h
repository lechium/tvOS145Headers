//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSActivityPushListenerDelegate-Protocol.h"

@class FTMessageDelivery, IDSActivityPushListener, IDSDAccountController, IDSDServiceController, IDSPeerIDManager, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSActivityStateProvider;

@interface IDSActivityMonitorStateManager : NSObject <IDSActivityPushListenerDelegate>
{
    NSMutableSet *_listeningOnActivities;	// 8 = 0x8
    NSMutableDictionary *_listenersByActivity;	// 16 = 0x10
    id <IDSActivityStateProvider> _stateProvider;	// 24 = 0x18
    IDSActivityPushListener *_pushListener;	// 32 = 0x20
    FTMessageDelivery *_messageDelivery;	// 40 = 0x28
    IDSPeerIDManager *_peerIDManager;	// 48 = 0x30
    IDSDAccountController *_accountController;	// 56 = 0x38
    IDSDServiceController *_serviceController;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000010001e040
- (void).cxx_destruct;	// IMP=0x0000000100022420
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
@property(retain, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(retain, nonatomic) IDSActivityPushListener *pushListener; // @synthesize pushListener=_pushListener;
@property(retain, nonatomic) id <IDSActivityStateProvider> stateProvider; // @synthesize stateProvider=_stateProvider;
@property(retain, nonatomic) NSMutableDictionary *listenersByActivity; // @synthesize listenersByActivity=_listenersByActivity;
@property(retain, nonatomic) NSMutableSet *listeningOnActivities; // @synthesize listeningOnActivities=_listeningOnActivities;
- (void)pushListener:(id)arg1 receivedUpdatePush:(id)arg2;	// IMP=0x000000010002138c
- (void)_updateListener;	// IMP=0x0000000100021198
- (void)_subscribeForInfo:(id)arg1 withDescription:(id)arg2 resolvedTokens:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100020794
- (void)unsubscribeForActivity:(id)arg1 subActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001ff1c
- (void)subscribeForInfo:(id)arg1 onActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001f240
- (void)ackUpdatesForActivity:(id)arg1;	// IMP=0x000000010001f1bc
- (id)currentSubscriptionsForActivity:(id)arg1;	// IMP=0x000000010001f128
- (void)removeSubscriptionForActivity:(id)arg1 subActivity:(id)arg2;	// IMP=0x000000010001f07c
- (void)storeSubscription:(id)arg1 forActivity:(id)arg2;	// IMP=0x000000010001efd0
- (id)storedUpdatesForActivity:(id)arg1;	// IMP=0x000000010001ef14
- (_Bool)isListeningOnActivity:(id)arg1;	// IMP=0x000000010001eea0
- (_Bool)stopListeningOnActivity:(id)arg1;	// IMP=0x000000010001ecd8
- (_Bool)startListeningOnActivity:(id)arg1;	// IMP=0x000000010001eb00
- (void)removeListener:(id)arg1 forActivity:(id)arg2;	// IMP=0x000000010001e8cc
- (void)addListener:(id)arg1 forActivity:(id)arg2;	// IMP=0x000000010001e754
- (void)setup;	// IMP=0x000000010001e6b4
- (id)initWithStateProvider:(id)arg1 messageDelivery:(id)arg2 peerIDManager:(id)arg3 accountController:(id)arg4 serviceController:(id)arg5 queue:(id)arg6;	// IMP=0x000000010001e4b8
- (id)initWithStateProvider:(id)arg1 messageDelivery:(id)arg2 peerIDManager:(id)arg3 accountController:(id)arg4 serviceController:(id)arg5 pushListener:(id)arg6;	// IMP=0x000000010001e2b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
