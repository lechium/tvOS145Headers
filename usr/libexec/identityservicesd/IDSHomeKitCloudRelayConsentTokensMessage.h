//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/FTIDSMessage.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IDSHomeKitCloudRelayConsentTokensMessage : FTIDSMessage <NSCopying>
{
    NSString *_serviceUserID;	// 232 = 0xe8
    NSArray *_accessoryIDs;	// 240 = 0xf0
    NSString *_adminID;	// 248 = 0xf8
    NSString *_expiry;	// 256 = 0x100
    NSArray *responseConsentTokens;	// 264 = 0x108
    NSArray *_responseConsentTokens;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000010046843c
@property(copy) NSArray *responseConsentTokens; // @synthesize responseConsentTokens=_responseConsentTokens;
@property(copy) NSString *expiry; // @synthesize expiry=_expiry;
@property(copy) NSString *adminID; // @synthesize adminID=_adminID;
@property(copy) NSArray *accessoryIDs; // @synthesize accessoryIDs=_accessoryIDs;
@property(copy) NSString *serviceUserID; // @synthesize serviceUserID=_serviceUserID;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x000000010046819c
- (id)bagKey;	// IMP=0x0000000100468180
- (id)messageBody;	// IMP=0x0000000100467fcc
- (id)additionalMessageHeaders;	// IMP=0x0000000100467de0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100467ba8

@end

