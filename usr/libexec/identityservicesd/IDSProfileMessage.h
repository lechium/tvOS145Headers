//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface IDSProfileMessage : IDSBaseMessage <NSCopying>
{
    NSData *_pushCert;	// 232 = 0xe8
    struct __SecKey *_pushKey;	// 240 = 0xf0
    struct __SecKey *_pushPublicKey;	// 248 = 0xf8
    NSData *_pushToken;	// 256 = 0x100
    NSString *_authToken;	// 264 = 0x108
    NSString *_profileID;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000010011981c
@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) struct __SecKey *pushPublicKey; // @synthesize pushPublicKey=_pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey; // @synthesize pushPrivateKey=_pushKey;
@property(copy, nonatomic) NSData *pushCertificate; // @synthesize pushCertificate=_pushCert;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0000000100119560
- (id)additionalMessageHeaders;	// IMP=0x0000000100119294
- (id)additionalMessageHeadersForOutgoingPush;	// IMP=0x0000000100118f2c
- (_Bool)hasRequiredKeys:(id *)arg1;	// IMP=0x0000000100118da4
- (long long)responseCommand;	// IMP=0x0000000100118d8c
- (long long)command;	// IMP=0x0000000100118d74
- (_Bool)wantsBinaryPush;	// IMP=0x0000000100118d58
- (_Bool)wantsCompressedBody;	// IMP=0x0000000100118d3c
- (_Bool)wantsHTTPHeaders;	// IMP=0x0000000100118d20
- (_Bool)wantsBagKey;	// IMP=0x0000000100118d04
- (void)dealloc;	// IMP=0x0000000100118b18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100118900
- (id)init;	// IMP=0x000000010011878c

@end

