//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TrustedPeersHelperProtocol-Protocol.h"

@protocol NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface CuttlefishXPCWrapper : NSObject <TrustedPeersHelperProtocol>
{
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 8 = 0x8
}

+ (_Bool)retryable:(id)arg1;	// IMP=0x0000000100029444
- (void).cxx_destruct;	// IMP=0x00000001000251c0
@property(readonly) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)resetAccountCDPContentsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024fdc
- (void)removeEscrowCacheWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024e04
- (void)fetchViableEscrowRecordsWithContainer:(id)arg1 context:(id)arg2 forceFetch:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100024c24
- (void)getSupportAppInfoWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024a4c
- (void)requestHealthCheckWithContainer:(id)arg1 context:(id)arg2 requiresEscrowCheck:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010002486c
- (void)pushHealthInquiryWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024694
- (void)reportHealthWithContainer:(id)arg1 context:(id)arg2 stateMachineState:(id)arg3 trustState:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100024488
- (void)setRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 ckksKeys:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100024260
- (void)fetchTrustStateWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024088
- (void)validatePeersWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100023eb0
- (void)fetchCurrentPolicyWithContainer:(id)arg1 context:(id)arg2 modelIDOverride:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100023cbc
- (void)fetchPolicyDocumentsWithContainer:(id)arg1 context:(id)arg2 versions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100023ac8
- (void)fetchEscrowContentsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000238f0
- (void)fetchViableBottlesWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100023718
- (void)updateTLKsWithContainer:(id)arg1 context:(id)arg2 ckksKeys:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010002350c
- (void)setPreapprovedKeysWithContainer:(id)arg1 context:(id)arg2 preapprovedKeys:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100023318
- (void)updateWithContainer:(id)arg1 context:(id)arg2 deviceName:(id)arg3 serialNumber:(id)arg4 osVersion:(id)arg5 policyVersion:(id)arg6 policySecrets:(id)arg7 syncUserControllableViews:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x00000001000230a8
- (void)attemptPreapprovedJoinWithContainer:(id)arg1 context:(id)arg2 ckksKeys:(id)arg3 tlkShares:(id)arg4 preapprovedKeys:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100022e80
- (void)preflightPreapprovedJoinWithContainer:(id)arg1 context:(id)arg2 preapprovedKeys:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100022c8c
- (void)joinWithContainer:(id)arg1 context:(id)arg2 voucherData:(id)arg3 voucherSig:(id)arg4 ckksKeys:(id)arg5 tlkShares:(id)arg6 preapprovedKeys:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x0000000100022a38
- (void)vouchWithRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 tlkShares:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100022810
- (void)preflightVouchWithRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100022604
- (void)vouchWithBottleWithContainer:(id)arg1 context:(id)arg2 bottleID:(id)arg3 entropy:(id)arg4 bottleSalt:(id)arg5 tlkShares:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x00000001000223c4
- (void)preflightVouchWithBottleWithContainer:(id)arg1 context:(id)arg2 bottleID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000221d0
- (void)vouchWithContainer:(id)arg1 context:(id)arg2 peerID:(id)arg3 permanentInfo:(id)arg4 permanentInfoSig:(id)arg5 stableInfo:(id)arg6 stableInfoSig:(id)arg7 ckksKeys:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x0000000100021f60
- (void)establishWithContainer:(id)arg1 context:(id)arg2 ckksKeys:(id)arg3 tlkShares:(id)arg4 preapprovedKeys:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100021d38
- (void)prepareWithContainer:(id)arg1 context:(id)arg2 epoch:(unsigned long long)arg3 machineID:(id)arg4 bottleSalt:(id)arg5 bottleID:(id)arg6 modelID:(id)arg7 deviceName:(id)arg8 serialNumber:(id)arg9 osVersion:(id)arg10 policyVersion:(id)arg11 policySecrets:(id)arg12 syncUserControllableViews:(int)arg13 signingPrivKeyPersistentRef:(id)arg14 encPrivKeyPersistentRef:(id)arg15 reply:(CDUnknownBlockType)arg16;	// IMP=0x0000000100021a0c
- (void)fetchEgoEpochWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021834
- (void)fetchAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010002165c
- (void)removeAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 machineIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100021468
- (void)addAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 machineIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100021274
- (void)setAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 allowedMachineIDs:(id)arg3 honorIDMSListChanges:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100021078
- (void)localResetWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020ea0
- (void)resetWithContainer:(id)arg1 context:(id)arg2 resetReason:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100020cc0
- (void)trustStatusWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020ae8
- (void)distrustPeerIDsWithContainer:(id)arg1 context:(id)arg2 peerIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000208f4
- (void)departByDistrustingSelfWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010002071c
- (void)dumpWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020544
- (void)pingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000203c4
- (id)initWithCuttlefishXPCConnection:(id)arg1;	// IMP=0x000000010002034c

@end

