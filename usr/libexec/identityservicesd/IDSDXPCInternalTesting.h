//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSXPCInternalTesting-Protocol.h"

@class IDSXPCConnection, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCInternalTesting : NSObject <IDSXPCInternalTesting>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSXPCConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010011ee54
@property(readonly, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_registeredIdentityTimestamps;	// IMP=0x000000010011ec94
- (void)assertTransportThreadRealTimeMode:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010011eba8
- (void)deviceChangedForDeviceID:(id)arg1 isNearby:(_Bool)arg2 isConnected:(_Bool)arg3 isCloudConnected:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010011e710
- (void)removeConnectionWithConnectionName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010011e4e4
- (void)fetchStoredUserDescriptions:(CDUnknownBlockType)arg1;	// IMP=0x000000010011dd00
- (void)nukeTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011db94
- (void)nukeCloudKitTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011da28
- (void)fetchCloudKitTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011d888
- (void)fetchVerifierAccountKeyPublicDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011d6e8
- (void)fetchVerifierAccountKeyTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011d548
- (void)fetchVerifierCloudKitTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011d3a8
- (void)fetchVerifierTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011d208
- (void)kickVerificationForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010011d000
- (void)performOutstandingKeyTransparencyVerificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011ce94
- (void)fetchTransparentEndpointsForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 verifyAgainstTrustCircle:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010011c95c
- (void)fetchEndpointCacheStateForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010011c048
- (id)transparentEndpointViewer;	// IMP=0x000000010011bfe0
- (void)autoBugCaptureWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011be78
- (void)popupPromptWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 defaultUrl:(id)arg4 alternateButton:(id)arg5 alternatrUrl:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010011bcc4
- (void)tapToRadarWithTitle:(id)arg1 message:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010011bb4c
- (void)checkServerStorageForService:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011ba84
- (void)setECVersion:(unsigned int)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011b9d4
- (void)currentECVersionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010011b914
- (void)setForceKeyRoll:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011b870
- (void)triggerKeyRollWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011b184
- (void)registeredIdentityTimestampsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010011b0f8
- (void)oneToOneECCQuicktestEncryptionWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011a738
- (id)initWithQueue:(id)arg1 connection:(id)arg2;	// IMP=0x000000010011a634

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

