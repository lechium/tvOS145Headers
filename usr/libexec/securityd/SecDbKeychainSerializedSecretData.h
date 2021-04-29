//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SecDbKeychainSerializedSecretData : PBCodable <NSCopying>
{
    NSData *_ciphertext;	// 8 = 0x8
    NSData *_secDbBackupWrappedItemKey;	// 16 = 0x10
    NSString *_tamperCheck;	// 24 = 0x18
    NSData *_wrappedKey;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100148dec
@property(retain, nonatomic) NSData *secDbBackupWrappedItemKey; // @synthesize secDbBackupWrappedItemKey=_secDbBackupWrappedItemKey;
@property(retain, nonatomic) NSString *tamperCheck; // @synthesize tamperCheck=_tamperCheck;
@property(retain, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
@property(retain, nonatomic) NSData *ciphertext; // @synthesize ciphertext=_ciphertext;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100148cb0
- (unsigned long long)hash;	// IMP=0x0000000100148c24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100148af8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001489f8
- (void)copyTo:(id)arg1;	// IMP=0x000000010014895c
- (void)writeTo:(id)arg1;	// IMP=0x00000001001488d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001486ac
- (id)dictionaryRepresentation;	// IMP=0x00000001001485d0
- (id)description;	// IMP=0x000000010014851c
@property(readonly, nonatomic) _Bool hasSecDbBackupWrappedItemKey;

@end

