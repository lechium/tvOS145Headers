//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/FTIDSMessage.h>

#import "NSCopying-Protocol.h"

@class NSData, NSNumber, NSString;

@interface IDSHomeKitCloudRelayAdminAccessTokenMessage : FTIDSMessage <NSCopying>
{
    NSString *_serviceUserID;	// 232 = 0xe8
    NSString *_accessoryID;	// 240 = 0xf0
    NSData *_pairingToken;	// 248 = 0xf8
    NSString *_responseAccessoryID;	// 256 = 0x100
    NSData *_responseAdminAcccessToken;	// 264 = 0x108
    NSNumber *_responseExpiry;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000100406e58
@property(copy) NSNumber *responseExpiry; // @synthesize responseExpiry=_responseExpiry;
@property(copy) NSData *responseAdminAcccessToken; // @synthesize responseAdminAcccessToken=_responseAdminAcccessToken;
@property(copy) NSString *responseAccessoryID; // @synthesize responseAccessoryID=_responseAccessoryID;
@property(copy) NSData *pairingToken; // @synthesize pairingToken=_pairingToken;
@property(copy) NSString *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(copy) NSString *serviceUserID; // @synthesize serviceUserID=_serviceUserID;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0000000100406aa0
- (id)bagKey;	// IMP=0x0000000100406a84
- (id)messageBody;	// IMP=0x0000000100406920
- (id)additionalMessageHeaders;	// IMP=0x0000000100406734
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001004064b0

@end

