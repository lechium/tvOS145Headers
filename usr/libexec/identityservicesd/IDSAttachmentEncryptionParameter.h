//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSEncryptionParameter-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@interface IDSAttachmentEncryptionParameter : NSObject <IDSEncryptionParameter>
{
    unsigned long long _encryptionType;	// 8 = 0x8
    NSString *_guid;	// 16 = 0x10
    NSData *_dataToEncrypt;	// 24 = 0x18
    NSArray *_endpoints;	// 32 = 0x20
    NSDictionary *_endpointsToEncryptedData;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100513814
@property(retain, nonatomic) NSDictionary *endpointsToEncryptedData; // @synthesize endpointsToEncryptedData=_endpointsToEncryptedData;
@property(retain, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(retain, nonatomic) NSData *dataToEncrypt; // @synthesize dataToEncrypt=_dataToEncrypt;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) unsigned long long encryptionType; // @synthesize encryptionType=_encryptionType;

@end

