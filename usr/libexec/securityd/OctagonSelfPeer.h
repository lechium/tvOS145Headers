//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKKSSelfPeer-Protocol.h"

@class NSString, _SFECKeyPair, _SFECPublicKey, _SFIdentity;

__attribute__((visibility("hidden")))
@interface OctagonSelfPeer : NSObject <CKKSSelfPeer>
{
    NSString *_peerID;	// 8 = 0x8
    _SFIdentity *_encryptionIdentity;	// 16 = 0x10
    _SFIdentity *_signingIdentity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100044cb0
@property(retain) _SFIdentity *signingIdentity; // @synthesize signingIdentity=_signingIdentity;
@property(retain) _SFIdentity *encryptionIdentity; // @synthesize encryptionIdentity=_encryptionIdentity;
@property(readonly) NSString *peerID; // @synthesize peerID=_peerID;
- (_Bool)matchesPeer:(id)arg1;	// IMP=0x0000000100044bd0
@property(readonly) _SFECKeyPair *signingKey;
@property(readonly) _SFECKeyPair *encryptionKey;
@property(readonly) _SFECPublicKey *publicSigningKey;
@property(readonly) _SFECPublicKey *publicEncryptionKey;
@property(readonly, copy) NSString *description;
- (id)initWithPeerID:(id)arg1 signingIdentity:(id)arg2 encryptionIdentity:(id)arg3;	// IMP=0x000000010004493c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

