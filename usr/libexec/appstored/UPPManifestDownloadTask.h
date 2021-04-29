//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AsyncTask.h"

#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSOrderedSet, NSString, NSURL, NSURLSession, XPCRequestToken;

@interface UPPManifestDownloadTask : AsyncTask <NSURLSessionTaskDelegate>
{
    NSOrderedSet *_downloadIDs;	// 8 = 0x8
    NSURL *_manifestURL;	// 16 = 0x10
    NSString *_receivedDigest;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    _Bool _shouldHideUserPrompts;	// 40 = 0x28
    NSString *_clientID;	// 48 = 0x30
    NSString *_manifestDigest;	// 56 = 0x38
    XPCRequestToken *_requestToken;	// 64 = 0x40
}

+ (id)_newPackageForExternalAssets:(id)arg1 withVariantDescriptor:(id)arg2;	// IMP=0x00000001000a9764
+ (id)_newInstallForItem:(id)arg1 manifestURL:(id)arg2 manifestDigest:(id)arg3 clientID:(id)arg4 withError:(id *)arg5;	// IMP=0x00000001000a881c
+ (_Bool)_isSupportedPlatformIdentifier:(id)arg1;	// IMP=0x00000001000a8804
+ (id)_enterpriseInstallationURL:(id)arg1 withDigest:(id)arg2;	// IMP=0x00000001000a85f0
+ (_Bool)_enterpriseInstallationAllowedForBundleID:(id)arg1 withName:(id)arg2 isValidHRNClient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000001000a83b4
+ (id)_determineCanonicalAssetsForExternalItem:(id)arg1 matchedVariantDescriptor:(id *)arg2;	// IMP=0x00000001000a7cd0
+ (id)_createCoordinatorForInstall:(id)arg1;	// IMP=0x00000001000a77f4
- (void).cxx_destruct;	// IMP=0x00000001000abeac
@property _Bool shouldHideUserPrompts; // @synthesize shouldHideUserPrompts=_shouldHideUserPrompts;
@property(retain) XPCRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(retain) NSString *manifestDigest; // @synthesize manifestDigest=_manifestDigest;
@property(retain) NSString *clientID; // @synthesize clientID=_clientID;
- (void)_showError:(id)arg1;	// IMP=0x00000001000abd20
- (_Bool)_showConfirmationPromptForInstalls:(id)arg1 response:(id)arg2;	// IMP=0x00000001000ab84c
- (_Bool)_promptToUnlockDeviceByOpeningSpringBoard;	// IMP=0x00000001000ab644
- (void)_runWithURLRequest:(id)arg1;	// IMP=0x00000001000ab340
- (void)_requestManifestInstallationOnActivePairedWatch;	// IMP=0x00000001000ab33c
- (_Bool)_isSecureURL:(id)arg1;	// IMP=0x00000001000ab2b4
- (_Bool)_isExternalURL:(id)arg1;	// IMP=0x00000001000ab0d8
- (id)_importInstalls:(id)arg1;	// IMP=0x00000001000aa9c8
- (void)_handleResponse:(id)arg1 withData:(id)arg2;	// IMP=0x00000001000aa39c
- (id)_newInstallsForUPPManifest:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001000a9e4c
- (void)main;	// IMP=0x00000001000a741c
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000a6dc0
- (id)initWithManifestURL:(id)arg1 requestToken:(id)arg2 shouldHideUserPrompts:(_Bool)arg3;	// IMP=0x00000001000a6d30
- (id)initWithManifestURL:(id)arg1;	// IMP=0x00000001000a6c6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
