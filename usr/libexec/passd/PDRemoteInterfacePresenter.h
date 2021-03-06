//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAssertionObserver-Protocol.h"
#import "PDNotificationStreamConsumer-Protocol.h"
#import "PKFieldDetectorObserver-Protocol.h"

@class NSHashTable, NSMutableOrderedSet, NSOrderedSet, NSString, PDAssertionManager, PDDatabaseManager, PDExpressPassManager, PDNotificationStreamManager, PKFieldDetector;
@protocol OS_dispatch_queue;

@interface PDRemoteInterfacePresenter : NSObject <PDAssertionObserver, PKFieldDetectorObserver, PDNotificationStreamConsumer>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDExpressPassManager *_expressPassManager;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    struct os_unfair_lock_s _observersLock;	// 40 = 0x28
    NSHashTable *_bannerObservers;	// 48 = 0x30
    NSMutableOrderedSet *_bannerModels;	// 56 = 0x38
    _Atomic _Bool _protectedDataAvailable;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_presenterSerialQueue;	// 72 = 0x48
    struct os_unfair_lock_s _activeInterfacesLock;	// 80 = 0x50
    _Atomic _Bool _setupAlertIsActive;	// 84 = 0x54
    _Bool _lostModeActive;	// 85 = 0x55
    unsigned int _powerAssertionIdentifier;	// 88 = 0x58
    PKFieldDetector *_fieldDetector;	// 96 = 0x60
    PDNotificationStreamManager *_notificationStreamManager;	// 104 = 0x68
    PDAssertionManager *_assertionManager;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100125c08
@property(readonly, nonatomic) PDAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property(readonly, nonatomic) PDNotificationStreamManager *notificationStreamManager; // @synthesize notificationStreamManager=_notificationStreamManager;
@property(readonly, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(readonly, nonatomic) NSOrderedSet *bannersToPresent;
@property(retain, nonatomic) PDExpressPassManager *expressPassManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager;
- (void)_releasePowerAssertion;	// IMP=0x0000000100125978
- (void)_createPowerAssertion;	// IMP=0x00000001001257c4
- (_Bool)canPresentRemoteInterfaceOfType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000001001257bc
- (void)passbookBannerDidFinishDisplaying:(id)arg1;	// IMP=0x00000001001257b8
- (void)passbookBannerDidLaunch;	// IMP=0x00000001001257b4
- (void)passbookUIServiceDidLaunch;	// IMP=0x00000001001257b0
- (void)protectedDataAvailable;	// IMP=0x00000001001257a0
- (void)unregisterBannerObserver:(id)arg1;	// IMP=0x000000010012573c
- (void)registerBannerObserver:(id)arg1;	// IMP=0x00000001001256d8
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000100125674
- (void)registerObserver:(id)arg1;	// IMP=0x0000000100125610
- (_Bool)remoteInterfaceOfTypeIsActive:(unsigned long long)arg1;	// IMP=0x0000000100125608
- (_Bool)isAnyRemoteInterfaceActive;	// IMP=0x0000000100125600
- (void)presentPaymentSetupRequest:(id)arg1 connection:(id)arg2 orientation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001255e8
- (void)_presentSetupAlertWithParameters:(id)arg1 defaultResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100125424
- (void)presentSetupApplePayAlert:(id)arg1;	// IMP=0x0000000100125228
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 passUniqueID:(id)arg3 orientation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100125210
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001001251f8
- (void)presentIdentityVerificationFlowWithResponseData:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001251e0
- (void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001251c8
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forNSXPCConnection:(id)arg2 hostApplicationName:(id)arg3 hostApplicationIdentifier:(id)arg4 hostBundleIdentifier:(id)arg5 hostIdentifier:(id)arg6 hostTeamID:(id)arg7 orientation:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000001001251ac
- (void)presentBannerForPassWithUniqueIdentifier:(id)arg1 withTransactionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001251a8
- (void)presentContactlessInterfaceForStandaloneTransactionwithPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 standaloneTransactionType:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001251a4
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010012518c
- (void)contactlessPassesAvailableDidChange;	// IMP=0x0000000100125188
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x0000000100125180
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x0000000100125168
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;	// IMP=0x0000000100125164
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x0000000100125160
- (id)createCurrentNotificationRegistrationState;	// IMP=0x00000001001250dc
- (void)dealloc;	// IMP=0x000000010012503c
- (id)initWithFieldDetector:(id)arg1 notificationStreamManager:(id)arg2 assertionManager:(id)arg3;	// IMP=0x0000000100124e98
- (id)init;	// IMP=0x0000000100124e80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

