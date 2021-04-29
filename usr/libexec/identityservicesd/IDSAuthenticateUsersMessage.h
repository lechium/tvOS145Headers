//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString;

@interface IDSAuthenticateUsersMessage : IDSBaseMessage <NSCopying>
{
    NSData *_pushToken;	// 232 = 0xe8
    NSString *_realm;	// 240 = 0xf0
    NSMutableArray *_requests;	// 248 = 0xf8
    NSArray *_authenticationResponses;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00000001002e29b8
@property(retain, nonatomic) NSArray *authenticationResponses; // @synthesize authenticationResponses=_authenticationResponses;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(copy) NSString *realm; // @synthesize realm=_realm;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00000001002e2534
- (void)_addRequestWithID:(id)arg1 cert:(id)arg2 sig:(id)arg3 csr:(id)arg4 tag:(id)arg5;	// IMP=0x00000001002e224c
- (void)addRequestWithID:(id)arg1 sig:(id)arg2 csr:(id)arg3 tag:(id)arg4;	// IMP=0x00000001002e2164
- (void)addRequestWithID:(id)arg1 cert:(id)arg2;	// IMP=0x00000001002e20cc
- (_Bool)allowsServerProvidedLenientAnisetteTimeout;	// IMP=0x00000001002e20b0
- (double)anisetteHeadersTimeout;	// IMP=0x00000001002e2098
- (id)additionalMessageHeaders;	// IMP=0x00000001002e1f14
- (id)messageBody;	// IMP=0x00000001002e1d28
- (id)requiredKeys;	// IMP=0x00000001002e1c8c
- (id)bagKey;	// IMP=0x00000001002e1c70
- (_Bool)requiresPushTokenKeys;	// IMP=0x00000001002e1c54
- (long long)responseCommand;	// IMP=0x00000001002e1c3c
- (long long)command;	// IMP=0x00000001002e1c24
- (_Bool)wantsBinaryPush;	// IMP=0x00000001002e1c08
- (_Bool)wantsCompressedBody;	// IMP=0x00000001002e1bec
- (_Bool)wantsHTTPHeaders;	// IMP=0x00000001002e1bd0
- (_Bool)wantsBagKey;	// IMP=0x00000001002e1bb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002e1a20
- (id)init;	// IMP=0x00000001002e18c4

@end

