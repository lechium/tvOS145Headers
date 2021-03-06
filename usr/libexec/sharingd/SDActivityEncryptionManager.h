//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, SDActivityEncryptionKey;

__attribute__((visibility("hidden")))
@interface SDActivityEncryptionManager : NSObject
{
    NSMutableDictionary *_deviceIdentifierToDecryptionKey;	// 8 = 0x8
    SDActivityEncryptionKey *_encryptionKey;	// 16 = 0x10
    NSData *_wrappingKey;	// 24 = 0x18
    _Bool _shouldRefreshWrappingKey;	// 32 = 0x20
}

+ (id)sharedEncryptionManager;	// IMP=0x000000010012a0ec
- (void).cxx_destruct;	// IMP=0x000000010012c940
- (id)baseDictDecryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x000000010012c7d0
- (id)baseDictEncryptionKey;	// IMP=0x000000010012c6c8
- (id)baseDictWrappingKey;	// IMP=0x000000010012c5c0
- (id)baseDict;	// IMP=0x000000010012c54c
- (_Bool)saveDecryptionKeyDataRepresentation:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x000000010012c4c4
- (id)loadDecryptionKeyDataRepresentationForDeviceIdentifier:(id)arg1;	// IMP=0x000000010012c464
- (_Bool)saveEncryptionKeyDataRepresentation:(id)arg1;	// IMP=0x000000010012c3e4
- (id)loadEncryptionKeyDataRepresentation;	// IMP=0x000000010012c384
- (_Bool)saveKeyDataRepresentation:(id)arg1 withBaseDict:(id)arg2;	// IMP=0x000000010012c100
- (id)loadKeyDataRepresentationWithBaseDict:(id)arg1;	// IMP=0x000000010012c044
- (void)testWrappingKeychainItem;	// IMP=0x000000010012c040
- (id)loadWrappingKeyData;	// IMP=0x000000010012bedc
- (id)allKeys;	// IMP=0x000000010012ba80
- (_Bool)deleteAllEncryptionAndDecryptionKeys;	// IMP=0x000000010012b91c
- (id)newDecryptionKeyFromDataRepresentation:(id)arg1;	// IMP=0x000000010012b500
- (id)unwrappedDataRepresentationForKey:(id)arg1;	// IMP=0x000000010012b3f4
@property(readonly, nonatomic) NSData *dataRepresentationForCurrentEncryptionKey;
- (id)cachedDecryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x000000010012b000
- (id)decryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x000000010012af0c
- (void)setDecryptionKey:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x000000010012ad10
- (void)getTagAndCounterWhileEncryptingBytesInPlace:(unsigned char [10])arg1 forAdvertisementWithVersion:(unsigned char)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010012aa9c
- (void)bumpEncryptionKeyCounterValue;	// IMP=0x000000010012a8c4
@property(readonly, nonatomic) SDActivityEncryptionKey *encryptionKey;
- (void)generateNewEncryptionKey;	// IMP=0x000000010012a580
- (void)resetStateRequested:(id)arg1;	// IMP=0x000000010012a574
- (void)removeObservers;	// IMP=0x000000010012a524
- (void)addObservers;	// IMP=0x000000010012a4bc
@property(readonly) NSString *state;
- (void)dealloc;	// IMP=0x000000010012a224
- (id)init;	// IMP=0x000000010012a1a8

@end

