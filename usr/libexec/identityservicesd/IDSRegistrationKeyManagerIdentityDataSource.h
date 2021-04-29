//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper;

@interface IDSRegistrationKeyManagerIdentityDataSource : NSObject
{
    IDSKeychainWrapper *_keychainWrapper;	// 8 = 0x8
}

+ (id)containerStorageItemNameForContainerIdentityIdentfier:(long long)arg1;	// IMP=0x00000001005ced1c
+ (id)legacyStorageItemNameForContainerIdentityIdentifier:(long long)arg1;	// IMP=0x00000001005cec60
+ (id)storageItemNameForLegacyIdentityIdentifier:(long long)arg1;	// IMP=0x00000001005ceb94
- (void).cxx_destruct;	// IMP=0x00000001005d3264
@property(readonly, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
- (unsigned int)ngmVersionFromDataRepresentation:(id)arg1;	// IMP=0x00000001005d3054
- (id)dataRepresentationForNGMVersion:(unsigned int)arg1;	// IMP=0x00000001005d2e5c
- (unsigned int)ngmVersion;	// IMP=0x00000001005d2cf4
- (id)_loadContainerWithIdentifier:(id)arg1 serializationDidChage:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 needsEncryptionIdentityRoll:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x00000001005d24c4
- (id)_loadLegacyIdentityWithIdentifier:(id)arg1 serializationDidChange:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00000001005d1fd4
- (id)_retrying_loadLegacyIdentityWithIdentifier:(id)arg1 serializationDidChange:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00000001005d1b1c
- (_Bool)removeIdentityContainer:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x00000001005d13c8
- (id)loadIdentityContainerWithIdentifier:(long long)arg1 withLegacyFallback:(_Bool)arg2 serializationDidChange:(_Bool *)arg3 deserializationDidFail:(_Bool *)arg4 needsEncryptionIdentityRoll:(_Bool *)arg5 nonLegacyError:(id *)arg6 error:(id *)arg7;	// IMP=0x00000001005d08a0
- (_Bool)saveIdentityContainer:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x00000001005d0438
- (id)generateIdentityContainerWithIdentifier:(long long)arg1 existingLegacyIdentity:(id)arg2 existingNGMIdentity:(id)arg3 dataProtectionClass:(long long)arg4 nonLegacyError:(id *)arg5 error:(id *)arg6;	// IMP=0x00000001005cfcec
- (_Bool)removeLegacyIdentity:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x00000001005cf844
- (id)loadLegacyIdentityWithIdentifier:(long long)arg1 serializationDidChange:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00000001005cf6e8
- (_Bool)saveLegacyIdentity:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x00000001005cf1b4
- (id)generateLegacyIdentityWithIdentifier:(long long)arg1 dataProtectionClass:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001005ceeac
- (id)initWithKeychainWrapper:(id)arg1;	// IMP=0x00000001005cedd8

@end

