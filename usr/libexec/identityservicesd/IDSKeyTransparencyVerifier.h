//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCloudKitKeyTransparencyStore, IDSKeyTransparencyPolicy, IDSRegistrationKeyManager, KTVerifier;
@protocol CUTMetricLogger, IDSKeyTransparencyRegistrationDataSource;

@interface IDSKeyTransparencyVerifier : NSObject
{
    IDSCloudKitKeyTransparencyStore *_keyTransparencyStore;	// 8 = 0x8
    IDSKeyTransparencyPolicy *_policy;	// 16 = 0x10
    KTVerifier *_KTVerifier;	// 24 = 0x18
    IDSRegistrationKeyManager *_keyManager;	// 32 = 0x20
    id <IDSKeyTransparencyRegistrationDataSource> _registrationDataSource;	// 40 = 0x28
    id <CUTMetricLogger> _internalMetricLogger;	// 48 = 0x30
    id <CUTMetricLogger> _productionMetricLogger;	// 56 = 0x38
}

+ (id)_keyTransparencyURIPrefixForServiceIdentifier:(id)arg1;	// IMP=0x0000000100600b10
+ (id)keyTransparencyVersionNumberForServiceType:(id)arg1;	// IMP=0x00000001005efa40
+ (_Bool)isKeyTransparencyEnabled;	// IMP=0x00000001005ef9cc
+ (id)sharedInstance;	// IMP=0x00000001005ef23c
- (void).cxx_destruct;	// IMP=0x0000000100601118
@property(readonly, nonatomic) id <CUTMetricLogger> productionMetricLogger; // @synthesize productionMetricLogger=_productionMetricLogger;
@property(readonly, nonatomic) id <CUTMetricLogger> internalMetricLogger; // @synthesize internalMetricLogger=_internalMetricLogger;
@property(readonly, nonatomic) id <IDSKeyTransparencyRegistrationDataSource> registrationDataSource; // @synthesize registrationDataSource=_registrationDataSource;
@property(readonly, nonatomic) IDSRegistrationKeyManager *keyManager; // @synthesize keyManager=_keyManager;
@property(readonly, nonatomic) KTVerifier *KTVerifier; // @synthesize KTVerifier=_KTVerifier;
@property(readonly, nonatomic) IDSKeyTransparencyPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) IDSCloudKitKeyTransparencyStore *keyTransparencyStore; // @synthesize keyTransparencyStore=_keyTransparencyStore;
- (id)_clientErrorWithCode:(long long)arg1 debugDescription:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0000000100600f1c
- (void)_presentInternalVerificationAlertWithText:(id)arg1;	// IMP=0x0000000100600db4
- (id)_IDSEndpointTransparencyStatesForKTTransparentData:(id)arg1 index:(id)arg2;	// IMP=0x00000001006006bc
- (id)_KTDatasForIDSProtoKeyTransparencyTrustedDevices:(id)arg1 serviceIdentifier:(id)arg2;	// IMP=0x0000000100600248
- (id)_IDSProtoKeyTransparencyTrustedDeviceForKeyTransparencyIndex:(id)arg1 entry:(id)arg2;	// IMP=0x00000001005ffef0
- (id)_KTDatasForIDSKeyTransparencyEntries:(id)arg1;	// IMP=0x00000001005ffcd8
- (id)_KTDataForIDSKeyTransparencyEntry:(id)arg1;	// IMP=0x00000001005ffbc8
- (id)_mergeCloudKitTrustedDevices:(id)arg1 accountKeyTrustedDevices:(id)arg2;	// IMP=0x00000001005ffad8
- (_Bool)_isTrustedCandidate:(id)arg1 index:(id)arg2 givenTrustedDevices:(id)arg3;	// IMP=0x00000001005ff228
- (unsigned long long)_numberOfMatchesForCandidates:(id)arg1 index:(id)arg2 trustedDevices:(id)arg3;	// IMP=0x00000001005ff000
- (void)_submitMetricsForTrustedDeviceVerificationWithCloudKitResult:(id)arg1 cloudKitOperationTimeInterval:(double)arg2 accountKeyResult:(id)arg3 accountKeyOperationTimeInterval:(double)arg4 index:(id)arg5 entries:(id)arg6;	// IMP=0x00000001005fe324
- (void)_submitMetricsForTrustedDeviceEnrollmentWithCloudKitResult:(id)arg1 cloudKitOperationTimeInterval:(double)arg2 accountKeyResult:(id)arg3 accountKeyOperationTimeInterval:(double)arg4;	// IMP=0x00000001005fdac0
- (id)fetchCloudKitTrustedDevices;	// IMP=0x00000001005fd384
- (id)_enrollTrustedDeviceToCloudKit:(id)arg1;	// IMP=0x00000001005fccc0
- (id)fetchAccountKeyTrustedDevices;	// IMP=0x00000001005fb648
- (id)_fetchAccountKeyTrustedDevicesGivenIndex:(id)arg1 entries:(id)arg2;	// IMP=0x00000001005fabe0
- (id)_enrollTrustedDeviceViaAccountKeySignature:(id)arg1;	// IMP=0x00000001005fa3a4
- (id)_fetchTrustedDevicesFromTrustCircleGivenIndex:(id)arg1 entries:(id)arg2;	// IMP=0x00000001005f94a8
- (id)_fetchTrustedDevicesFromTrustCircle;	// IMP=0x00000001005f946c
- (id)_enrollTrustedDevice:(id)arg1;	// IMP=0x00000001005f8574
- (id)_clientErrorForKTResult:(unsigned long long)arg1 underlyingError:(id)arg2;	// IMP=0x00000001005f83e4
- (void)_mutateSuccessfulSyncIndicatorOnKTLoggableDatas:(id)arg1 forIndex:(id)arg2;	// IMP=0x00000001005f7e8c
- (void)_fulfullOrFailPromiseSeal:(id)arg1 basedOnIndex:(id)arg2 KTResult:(unsigned long long)arg3 transparentData:(id)arg4 error:(id)arg5;	// IMP=0x00000001005f7d20
- (id)_currentVerificationResultsForRegisteredIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x00000001005f75c4
- (id)_verifyKeyTransparencyOfRegisteredIndex:(id)arg1 verificationState:(id)arg2 entry:(id)arg3;	// IMP=0x00000001005f6e24
- (void)_forceVerificationWithIndex:(id)arg1 ticket:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001005f66c0
- (id)_currentSelfVerificationResultsAgainstTrustCircleForSelfQueriedIndex:(id)arg1 entries:(id)arg2 ticket:(id)arg3;	// IMP=0x00000001005f5918
- (void)_performTrustCircleVerificationForSelfQueryResultsWithIndex:(id)arg1 entries:(id)arg2 localURI:(id)arg3 ticket:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001005f49f4
- (id)_currentPeerVerificationResultsForQueriedIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x00000001005f41fc
- (id)_transparencyTicketForQueryResultsWithIndex:(id)arg1 verificationState:(id)arg2 entries:(id)arg3;	// IMP=0x00000001005f39a8
- (void)nukeKeyTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001005f364c
- (void)forceVerificationWithIndex:(id)arg1 ticket:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001005f33c8
- (id)currentVerificationResultsForRegisteredIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x00000001005f3004
- (id)currentTrustCircleVerificationResultsForSelfQueriedIndex:(id)arg1 entries:(id)arg2 ticket:(id)arg3;	// IMP=0x00000001005f28d4
- (id)currentPeerVerificationResultsForQueriedIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x00000001005f2510
- (void)performTrustCircleVerificationForSelfQueryResultsWithIndex:(id)arg1 entries:(id)arg2 localURI:(id)arg3 ticket:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001005f1d44
- (id)fetchTrustedDevicesFromTrustCircle;	// IMP=0x00000001005f17b0
- (id)_pruneTrustedDevice:(id)arg1 givenEligibleServiceIdentifiers:(id)arg2;	// IMP=0x00000001005f1518
- (id)enrollTrustedDevice:(id)arg1;	// IMP=0x00000001005f0b64
- (id)transparencyTicketForRegistrationWithIndex:(id)arg1 verificationState:(id)arg2 entry:(id)arg3;	// IMP=0x00000001005f0710
- (id)transparencyTicketForQueryResultsWithIndex:(id)arg1 verificationState:(id)arg2 entries:(id)arg3 localURI:(id)arg4;	// IMP=0x00000001005f0070
- (void)fetchLocalDeviceTrustCircleEligibleServiceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001005efdb0
- (void)fetchLocalDeviceTrustCircleEligibilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001005efb84
- (_Bool)isDeviceAccountStateKeyTransparencyEligible;	// IMP=0x00000001005efb24
- (id)initWithPolicy:(id)arg1 verifier:(id)arg2 keyManager:(id)arg3 store:(id)arg4 registrationDataSource:(id)arg5 internalMetricLogger:(id)arg6 productionMetricLogger:(id)arg7;	// IMP=0x00000001005ef6b0
- (id)init;	// IMP=0x00000001005ef3d0

@end

