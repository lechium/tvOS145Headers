//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _SFECKeyPair;

__attribute__((visibility("hidden")))
@interface CKKSManifestInjectionPointHelper : NSObject
{
    NSString *_peerID;	// 8 = 0x8
    _SFECKeyPair *_keyPair;	// 16 = 0x10
}

+ (void)setIgnoreChanges:(_Bool)arg1;	// IMP=0x0000000100107824
+ (_Bool)ignoreChanges;	// IMP=0x0000000100107818
+ (void)registerEgoPeerID:(id)arg1 keyPair:(id)arg2;	// IMP=0x0000000100107798
+ (void)registerHelper:(id)arg1 forPeer:(id)arg2;	// IMP=0x0000000100107710
- (void).cxx_destruct;	// IMP=0x00000001001074f0
- (id)peerID;	// IMP=0x00000001001074e8
- (id)keyPair;	// IMP=0x00000001001074e0
- (void)performWithPeerVerifyingKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000001001071d8
- (void)performWithEgoPeerID:(CDUnknownBlockType)arg1;	// IMP=0x00000001001070b4
- (void)performWithSigningKey:(CDUnknownBlockType)arg1;	// IMP=0x0000000100106f20
- (id)description;	// IMP=0x0000000100106e8c
- (id)initWithPeerID:(id)arg1 keyPair:(id)arg2 isEgoPeer:(_Bool)arg3;	// IMP=0x0000000100106db0

@end
