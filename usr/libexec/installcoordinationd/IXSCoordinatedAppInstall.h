//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXSCoordinatorProgressDelegate-Protocol.h"
#import "IXSDataPromiseDelegate-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class BKSTerminationAssertion, IXAppInstallCoordinatorSeed, IXSCoordinatorProgress, IXSOwnedDataPromise, IXSPlaceholder, IXSPlaceholderFailureInfo, IXSPromisedOutOfBandTransfer, NSArray, NSDate, NSError, NSMutableArray, NSProgress, NSSet, NSString, NSUUID;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface IXSCoordinatedAppInstall : NSObject <IXSDataPromiseDelegate, IXSCoordinatorProgressDelegate, NSSecureCoding>
{
    _Bool _isPaused;	// 8 = 0x8
    _Bool _complete;	// 9 = 0x9
    _Bool _loadingPhaseIsComplete;	// 10 = 0xa
    _Bool _isTracked;	// 11 = 0xb
    _Bool _sentBeginRestoringUserData;	// 12 = 0xc
    _Bool _appAssetPromiseSetterCanInstallLocalProvisionedContent;	// 13 = 0xd
    IXSPlaceholder *_placeholderPromise;	// 16 = 0x10
    IXSOwnedDataPromise *_appAssetPromise;	// 24 = 0x18
    unsigned long long _appAssetPromiseDRI;	// 32 = 0x20
    NSArray *_initialODRAssetPromises;	// 40 = 0x28
    IXSPromisedOutOfBandTransfer *_userDataPromise;	// 48 = 0x30
    IXSPromisedOutOfBandTransfer *_deviceSecurityPromise;	// 56 = 0x38
    IXSPromisedOutOfBandTransfer *_preparationPromise;	// 64 = 0x40
    IXSOwnedDataPromise *_installOptionsPromise;	// 72 = 0x48
    unsigned long long _importance;	// 80 = 0x50
    unsigned long long _effectiveIntent;	// 88 = 0x58
    IXAppInstallCoordinatorSeed *_seed;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_internalQueue;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_delegateCallQueue;	// 112 = 0x70
    NSObject<OS_dispatch_group> *_outstandingInstallOperationsGroup;	// 120 = 0x78
    NSError *_error;	// 128 = 0x80
    unsigned long long _errorSourceIdentifier;	// 136 = 0x88
    NSUUID *_installOptionsPromiseUUID;	// 144 = 0x90
    NSUUID *_placeholderPromiseUUID;	// 152 = 0x98
    NSUUID *_appAssetPromiseUUID;	// 160 = 0xa0
    NSArray *_initialODRAssetPromiseUUIDs;	// 168 = 0xa8
    NSUUID *_userDataPromiseUUID;	// 176 = 0xb0
    NSUUID *_deviceSecurityPromiseUUID;	// 184 = 0xb8
    NSUUID *_preparationPromiseUUID;	// 192 = 0xc0
    NSProgress *_cachedCurrentProgress;	// 200 = 0xc8
    NSMutableArray *_pendingProgressRequests;	// 208 = 0xd0
    unsigned long long _placeholderInstallState;	// 216 = 0xd8
    unsigned long long _appInstallState;	// 224 = 0xe0
    IXSPlaceholderFailureInfo *_placeholderFailureInfo;	// 232 = 0xe8
    unsigned long long _originalInstallType;	// 240 = 0xf0
    BKSTerminationAssertion *_termAssertion;	// 248 = 0xf8
    NSObject<OS_dispatch_source> *_assertionRetryTimer;	// 256 = 0x100
    unsigned long long _assertionRetryCount;	// 264 = 0x108
    NSDate *_firstPlugInBusyTime;	// 272 = 0x110
    IXSCoordinatorProgress *_coordinatorProgress;	// 280 = 0x118
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002fb80
- (void).cxx_destruct;	// IMP=0x00000001000417c8
@property(nonatomic) _Bool appAssetPromiseSetterCanInstallLocalProvisionedContent; // @synthesize appAssetPromiseSetterCanInstallLocalProvisionedContent=_appAssetPromiseSetterCanInstallLocalProvisionedContent;
@property(retain, nonatomic) IXSCoordinatorProgress *coordinatorProgress; // @synthesize coordinatorProgress=_coordinatorProgress;
@property(retain, nonatomic) NSDate *firstPlugInBusyTime; // @synthesize firstPlugInBusyTime=_firstPlugInBusyTime;
@property(nonatomic) unsigned long long assertionRetryCount; // @synthesize assertionRetryCount=_assertionRetryCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assertionRetryTimer; // @synthesize assertionRetryTimer=_assertionRetryTimer;
@property(retain, nonatomic) BKSTerminationAssertion *termAssertion; // @synthesize termAssertion=_termAssertion;
@property(nonatomic) _Bool sentBeginRestoringUserData; // @synthesize sentBeginRestoringUserData=_sentBeginRestoringUserData;
@property(nonatomic) _Bool isTracked; // @synthesize isTracked=_isTracked;
@property(nonatomic) unsigned long long originalInstallType; // @synthesize originalInstallType=_originalInstallType;
@property(retain, nonatomic) IXSPlaceholderFailureInfo *placeholderFailureInfo; // @synthesize placeholderFailureInfo=_placeholderFailureInfo;
@property(nonatomic) unsigned long long appInstallState; // @synthesize appInstallState=_appInstallState;
@property(nonatomic) unsigned long long placeholderInstallState; // @synthesize placeholderInstallState=_placeholderInstallState;
@property(retain, nonatomic) NSMutableArray *pendingProgressRequests; // @synthesize pendingProgressRequests=_pendingProgressRequests;
@property(readonly, nonatomic) NSProgress *cachedCurrentProgress; // @synthesize cachedCurrentProgress=_cachedCurrentProgress;
@property(retain, nonatomic) NSUUID *preparationPromiseUUID; // @synthesize preparationPromiseUUID=_preparationPromiseUUID;
@property(retain, nonatomic) NSUUID *deviceSecurityPromiseUUID; // @synthesize deviceSecurityPromiseUUID=_deviceSecurityPromiseUUID;
@property(retain, nonatomic) NSUUID *userDataPromiseUUID; // @synthesize userDataPromiseUUID=_userDataPromiseUUID;
@property(copy, nonatomic) NSArray *initialODRAssetPromiseUUIDs; // @synthesize initialODRAssetPromiseUUIDs=_initialODRAssetPromiseUUIDs;
@property(retain, nonatomic) NSUUID *appAssetPromiseUUID; // @synthesize appAssetPromiseUUID=_appAssetPromiseUUID;
@property(retain, nonatomic) NSUUID *placeholderPromiseUUID; // @synthesize placeholderPromiseUUID=_placeholderPromiseUUID;
@property(retain, nonatomic) NSUUID *installOptionsPromiseUUID; // @synthesize installOptionsPromiseUUID=_installOptionsPromiseUUID;
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *outstandingInstallOperationsGroup; // @synthesize outstandingInstallOperationsGroup=_outstandingInstallOperationsGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallQueue; // @synthesize delegateCallQueue=_delegateCallQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) IXAppInstallCoordinatorSeed *seed; // @synthesize seed=_seed;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0000000100041164
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x00000001000410d8
- (void)promiseDidReset:(id)arg1;	// IMP=0x00000001000410d4
- (void)promiseDidComplete:(id)arg1;	// IMP=0x0000000100040c58
- (void)promiseDidBegin:(id)arg1;	// IMP=0x00000001000404c8
- (unsigned long long)transactionStepForPromise:(id)arg1;	// IMP=0x000000010004030c
- (void)didUpdateProgress:(double)arg1 forPhase:(unsigned long long)arg2 overallProgress:(double)arg3;	// IMP=0x000000010004020c
- (void)_onQueue_updateLoadingProgress;	// IMP=0x000000010003f5f8
- (void)_onQueue_finishLoadingProgress;	// IMP=0x000000010003f4a4
- (void)_onQueue_cancelLoadingProgress;	// IMP=0x000000010003f36c
- (void)_onQueue_resumeProgress;	// IMP=0x000000010003f2c4
- (void)_onQueue_pauseProgress;	// IMP=0x000000010003f224
- (void)_pauseProgressObject:(id)arg1;	// IMP=0x000000010003f150
- (void)_onQueue_fetchProgressAndRun:(CDUnknownBlockType)arg1;	// IMP=0x000000010003ede8
- (void)_limitedConcurrency_fetchProgressForPlaceholderInstallType:(unsigned long long)arg1 andRun:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e9dc
- (void)_runWithProgress:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e6d8
@property(nonatomic) _Bool loadingPhaseIsComplete; // @synthesize loadingPhaseIsComplete=_loadingPhaseIsComplete;
@property(readonly, copy, nonatomic) NSSet *promiseUUIDs;
@property(nonatomic) unsigned long long effectiveIntent; // @synthesize effectiveIntent=_effectiveIntent;
@property(readonly, nonatomic) unsigned long long originalIntent; // @dynamic originalIntent;
@property(readonly, nonatomic) unsigned long long creator; // @dynamic creator;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, copy) NSString *description;
- (void)_updatePendingOperationsForChangeFromPreviousState:(unsigned long long)arg1 toNewState:(unsigned long long)arg2;	// IMP=0x000000010003cbd4
- (void)_onQueue_removeSavedState;	// IMP=0x000000010003ca28
- (void)_onQueue_saveState;	// IMP=0x000000010003c6e0
- (void)_onQueue_internal_cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x000000010003ba4c
- (id)_onQueue_localizedAppName;	// IMP=0x000000010003b8b8
- (void)_onQueue_cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x000000010003b750
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x000000010003b650
- (void)_onQueue_cancelPlaceholderIfNeededForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x000000010003af74
- (void)_onQueue_removeParallelPlaceholder;	// IMP=0x000000010003ac10
- (void)_onQueue_handleAppAssetPromiseCancellationWhenRestoringWithReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x000000010003a958
- (_Bool)_shouldRemovePlaceholderForReason:(id)arg1;	// IMP=0x000000010003a760
- (void)_onQueue_updatePlaceholderForFailureReason:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3;	// IMP=0x000000010003a4d8
- (void)_asyncUpdatePlaceholderMetadataWithInstallType:(unsigned long long)arg1 reason:(long long)arg2 underlyingError:(id)arg3 client:(unsigned long long)arg4;	// IMP=0x000000010003a298
- (_Bool)_placeholderOrParallelPlaceholderIsInstalledWithRecord:(id *)arg1;	// IMP=0x000000010003a180
@property(readonly, nonatomic, getter=placeholderIsInstalled) _Bool placeholderInstalled;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (void)_onQueue_unregister;	// IMP=0x0000000100039bc4
- (void)_onQueue_prioritizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100039924
- (void)prioritizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100039860
@property(nonatomic) _Bool shouldBeginRestoringUserData; // @dynamic shouldBeginRestoringUserData;
@property(nonatomic) unsigned long long importance; // @synthesize importance=_importance;
- (_Bool)externalGetIsPaused;	// IMP=0x0000000100039438
- (void)externalSetIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039368
- (void)setIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000390d4
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) IXSOwnedDataPromise *installOptionsPromise; // @synthesize installOptionsPromise=_installOptionsPromise;
- (void)_internal_setInstallOptionsPromise:(id)arg1;	// IMP=0x0000000100038ce0
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *preparationPromise; // @synthesize preparationPromise=_preparationPromise;
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *deviceSecurityPromise; // @synthesize deviceSecurityPromise=_deviceSecurityPromise;
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *userDataPromise; // @synthesize userDataPromise=_userDataPromise;
@property(copy, nonatomic) NSArray *initialODRAssetPromises; // @synthesize initialODRAssetPromises=_initialODRAssetPromises;
@property(nonatomic) unsigned long long appAssetPromiseDRI; // @synthesize appAssetPromiseDRI=_appAssetPromiseDRI;
@property(retain, nonatomic) IXSOwnedDataPromise *appAssetPromise; // @synthesize appAssetPromise=_appAssetPromise;
- (void)_internal_setAppAssetPromise:(id)arg1;	// IMP=0x0000000100037918
@property(retain, nonatomic) IXSPlaceholder *placeholderPromise; // @synthesize placeholderPromise=_placeholderPromise;
- (void)_onQueue_fireObserversForClient:(id)arg1;	// IMP=0x0000000100036ab8
- (void)_onQueue_acquireAssertionAndDoInstall;	// IMP=0x0000000100035f90
- (void)_finishAppInstallAtURL:(id)arg1 result:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100035a50
- (void)_onQueue_handleCancelForInstallFailure:(id)arg1;	// IMP=0x0000000100035760
- (id)_onQueue_fetchInstallOptionsWithError:(id *)arg1;	// IMP=0x0000000100035174
- (void)_onQueue_acquireAssertionAndInstallPlaceholder;	// IMP=0x000000010003410c
- (void)_finishPlaceholderInstallAtURL:(id)arg1 result:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100033ab4
- (_Bool)_installApplication:(id)arg1 isPlaceholder:(_Bool)arg2 options:(id)arg3 retries:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000100033888
- (_Bool)_doRetryingInstallOperationForPlaceholder:(_Bool)arg1 retries:(unsigned long long)arg2 error:(id *)arg3 installAttemptBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000331a0
- (void)_onQueue_acquireAssertionIfNeededForPlaceholder:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032b4c
- (void)_onQueue_handleAssertionAcquisitionFailureForPlaceholder:(_Bool)arg1 withError:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000323d8
- (void)_onQueue_runAssertionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100032334
- (long long)_onQueue_assertionRetrySeconds;	// IMP=0x00000001000322a8
- (void)_runAsyncBlockWithDescription:(id)arg1 onLaunchServicesQueue:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032120
- (void)_onQueue_checkState;	// IMP=0x0000000100031ca0
@property(readonly, nonatomic) unsigned long long state;
- (void)handleFirstUnlockNotification;	// IMP=0x0000000100031250
- (void)_releasePowerAssertion:(unsigned int)arg1;	// IMP=0x0000000100031178
- (unsigned int)_createPowerAssertion;	// IMP=0x0000000100030ea4
- (_Bool)awakeFromSerializationWithError:(id *)arg1;	// IMP=0x000000010002fb88
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002f5a4
- (void)dealloc;	// IMP=0x000000010002f520
- (id)initWithSeed:(id)arg1;	// IMP=0x000000010002f4ac
- (void)_internalInitWithSeed:(id)arg1;	// IMP=0x000000010002f378
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002ecb0
- (void)_initInternalState;	// IMP=0x000000010002eb00
- (oneway void)_remote_getCoordinationState:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044b0c
- (oneway void)_remote_prioritizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044a44
- (oneway void)_remote_getIsPausedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044958
- (oneway void)_remote_setIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100044884
- (oneway void)_remote_fireObserversForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100044764
- (oneway void)_remote_getErrorInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044644
- (oneway void)_remote_getIsComplete:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044558
- (oneway void)_remote_getDeviceSecurityPromise:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044364
- (oneway void)_remote_setDeviceSecurityPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100044144
- (oneway void)_remote_getPreparationPromise:(CDUnknownBlockType)arg1;	// IMP=0x0000000100043f4c
- (oneway void)_remote_setPreparationPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100043d2c
- (oneway void)_remote_getUserDataRestoreShouldBegin:(CDUnknownBlockType)arg1;	// IMP=0x0000000100043c40
- (oneway void)_remote_hasUserDataPromise:(CDUnknownBlockType)arg1;	// IMP=0x0000000100043b3c
- (oneway void)_remote_getUserDataPromise:(CDUnknownBlockType)arg1;	// IMP=0x0000000100043944
- (oneway void)_remote_setUserDataPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100043724
- (oneway void)_remote_hasInitialODRAssetPromises:(CDUnknownBlockType)arg1;	// IMP=0x0000000100043620
- (oneway void)_remote_getInitialODRAssetPromises:(CDUnknownBlockType)arg1;	// IMP=0x0000000100043324
- (oneway void)_remote_setInitialODRAssetPromiseUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042fa4
- (oneway void)_remote_importanceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042eb8
- (oneway void)_remote_setImportance:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042dc0
- (oneway void)_remote_hasInstallOptions:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042cbc
- (oneway void)_remote_setInstallOptionsPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042938
- (oneway void)_remote_setAppAssetPromiseDRI:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042840
- (oneway void)_remote_getAppAssetPromiseDRI:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042754
- (oneway void)_remote_appAssetPromiseHasBegunFulfillment:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042538
- (oneway void)_remote_hasAppAssetPromise:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042434
- (oneway void)_remote_getAppAssetPromise:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042240
- (oneway void)_remote_setAppAssetPromiseUUID:(id)arg1 fromConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041ff0
- (oneway void)_remote_hasPlaceholderPromise:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041eec
- (oneway void)_remote_getPlaceholderPromise:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041cf8
- (oneway void)_remote_setPlaceholderPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041988
- (oneway void)_remote_cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041918

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

