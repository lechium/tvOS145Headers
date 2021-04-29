//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IDSCurrentDevice : NSObject
{
    NSString *_localDeviceIdentifier;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010044cbfc
- (void).cxx_destruct;	// IMP=0x000000010044d604
- (void)regenerateDeviceIdentifier;	// IMP=0x000000010044d44c
@property(readonly, retain, nonatomic) NSString *deviceIdentifier;
- (id)_deviceIdentifierKeychainID;	// IMP=0x000000010044d16c
@property(readonly, nonatomic) _Bool hasAllEncryptionKeys;
@property(readonly, nonatomic) NSData *encryptionClassDKey;
@property(readonly, nonatomic) NSData *encryptionClassCKey;
@property(readonly, nonatomic) NSData *encryptionClassAKey;
- (id)init;	// IMP=0x000000010044cd90

@end

