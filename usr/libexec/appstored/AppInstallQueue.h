//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AppInstallPipeline-Protocol.h"
#import "CoordinatorPromiseDataConsumerDelegate-Protocol.h"

@class AppInstallsDatabaseStore, AssetSession, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface AppInstallQueue : NSObject <CoordinatorPromiseDataConsumerDelegate, AppInstallPipeline>
{
    AssetSession *_assetSession;	// 8 = 0x8
    AppInstallsDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    NSMutableDictionary *_requestLookup;	// 40 = 0x28
}

+ (long long)_computedPhaseForCoordinatorState:(unsigned long long)arg1 allowResume:(_Bool *)arg2;	// IMP=0x000000010027133c
+ (id)sharedInstance;	// IMP=0x0000000100271188
- (void).cxx_destruct;	// IMP=0x0000000100276e9c
- (void)_releaseTerminationAssertionUsingInstallInfo:(id)arg1;	// IMP=0x0000000100276e98
- (_Bool)_isRecoverableNetworkError:(id)arg1;	// IMP=0x0000000100276df0
- (void)_endEventServiceInstallationEventForInstallInfo:(id)arg1;	// IMP=0x0000000100276dec
- (void)_postEventServiceInstallationEventWithPhase:(long long)arg1 forInstallInfo:(id)arg2 entity:(id)arg3;	// IMP=0x0000000100276de8
- (void)_handleRecoveryResult:(_Bool)arg1 error:(id)arg2 usingInstallInfo:(id)arg3;	// IMP=0x0000000100276b5c
- (void)_handleAssetResult:(id)arg1 error:(id)arg2 usingInstallInfo:(id)arg3;	// IMP=0x0000000100275734
- (void)_finishPostambleTaskWithInstallInfo:(id)arg1;	// IMP=0x0000000100275594
- (void)_finishPreambleTaskWithResponse:(id)arg1;	// IMP=0x0000000100274b84
- (void)_finishInstallingOperationWithResponse:(id)arg1;	// IMP=0x00000001002747b4
- (void)_finishDownloadingOperationWithResponse:(id)arg1;	// IMP=0x0000000100273fac
- (void)_beginPreambleWithTask:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100273bd4
- (void)_beginPreambleUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100273acc
- (void)_beginPreambleForInstallsMatchingPredicate:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100273758
- (void)_beginPostambleUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100273424
- (void)_beginInstallingUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100273010
- (void)_beginDownloadingUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100272c30
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001002729a0
- (void)coordinatorPromiseDataConsumer:(id)arg1 willBeginUsingPromise:(id)arg2 forReference:(id)arg3;	// IMP=0x000000010027276c
- (void)stopInstallIDs:(id)arg1 withReason:(long long)arg2 transaction:(id)arg3;	// IMP=0x0000000100272554
- (void)startInstallIDs:(id)arg1 transaction:(id)arg2;	// IMP=0x00000001002722a8
- (void)finishInstallIDs:(id)arg1 transaction:(id)arg2;	// IMP=0x000000010027200c
- (void)validateActiveInstallations;	// IMP=0x000000010027137c
- (id)init;	// IMP=0x00000001002711f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

