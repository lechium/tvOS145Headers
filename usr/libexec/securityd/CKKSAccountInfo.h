//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString, _SFECKeyPair;

__attribute__((visibility("hidden")))
@interface CKKSAccountInfo : NSObject
{
    _SFECKeyPair *_signingKey;	// 8 = 0x8
    NSDictionary *_peerVerifyingKeys;	// 16 = 0x10
    NSString *_egoPeerID;	// 24 = 0x18
    NSError *_setupError;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010010c2bc
@property(retain) NSError *setupError; // @synthesize setupError=_setupError;
@property(retain) NSString *egoPeerID; // @synthesize egoPeerID=_egoPeerID;
@property(retain) NSDictionary *peerVerifyingKeys; // @synthesize peerVerifyingKeys=_peerVerifyingKeys;
@property(retain) _SFECKeyPair *signingKey; // @synthesize signingKey=_signingKey;

@end

