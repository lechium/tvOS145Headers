//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, SecDbKeychainMetadata, SecDbKeychainSecretData;

__attribute__((visibility("hidden")))
@interface SecDbKeychainItemV7 : NSObject
{
    SecDbKeychainSecretData *_encryptedSecretData;	// 8 = 0x8
    SecDbKeychainMetadata *_encryptedMetadata;	// 16 = 0x10
    NSDictionary *_secretAttributes;	// 24 = 0x18
    NSDictionary *_metadataAttributes;	// 32 = 0x20
    NSString *_tamperCheck;	// 40 = 0x28
    int _keyclass;	// 48 = 0x30
    int _keybag;	// 52 = 0x34
    NSData *_backupUUID;	// 56 = 0x38
}

+ (id)decryptionOperation;	// IMP=0x00000001000ec3f8
+ (id)encryptionOperation;	// IMP=0x00000001000ec384
+ (id)keySpecifier;	// IMP=0x00000001000ec344
- (void).cxx_destruct;	// IMP=0x00000001000ec28c
@property(retain, nonatomic) NSData *backupUUID; // @synthesize backupUUID=_backupUUID;
@property(readonly, nonatomic) int keyclass; // @synthesize keyclass=_keyclass;
- (id)unwrapFromAKS:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 acmContext:(id)arg3 callerAccessGroups:(id)arg4 delete:(_Bool)arg5 error:(id *)arg6;	// IMP=0x00000001000ebb10
- (id)wrapToAKS:(id)arg1 withKeybag:(int)arg2 accessControl:(struct __SecAccessControl *)arg3 acmContext:(id)arg4 error:(id *)arg5;	// IMP=0x00000001000eb5e4
- (id)metadataClassKeyWithKeybag:(int)arg1 allowWrites:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001000eb524
- (_Bool)encryptSecretDataWithKeybag:(int)arg1 accessControl:(struct __SecAccessControl *)arg2 acmContext:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000eb08c
- (_Bool)encryptMetadataWithKeybag:(int)arg1 error:(id *)arg2;	// IMP=0x00000001000ead78
- (id)encryptedSecretDataBlob;	// IMP=0x00000001000ead68
- (id)encryptedMetadataBlob;	// IMP=0x00000001000ead58
- (id)encryptedBlobWithKeybag:(int)arg1 accessControl:(struct __SecAccessControl *)arg2 acmContext:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000eab6c
- (_Bool)deleteWithAcmContext:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 callerAccessGroups:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000eaa08
- (id)secretAttributesWithAcmContext:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 callerAccessGroups:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000ea5d4
- (id)metadataAttributesWithError:(id *)arg1;	// IMP=0x00000001000ea064
- (id)initWithSecretAttributes:(id)arg1 metadataAttributes:(id)arg2 tamperCheck:(id)arg3 keyclass:(int)arg4;	// IMP=0x00000001000e9e44
- (id)initWithData:(id)arg1 decryptionKeybag:(int)arg2 error:(id *)arg3;	// IMP=0x00000001000e9b18

@end

