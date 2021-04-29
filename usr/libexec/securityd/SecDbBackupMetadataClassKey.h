//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbBackupMetadataClassKey : PBCodable <NSCopying>
{
    NSData *_backupWrappedMetadataKey;	// 8 = 0x8
    int _keyClass;	// 16 = 0x10
    CDStruct_9ea6736c _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000100064b9c
@property(retain, nonatomic) NSData *backupWrappedMetadataKey; // @synthesize backupWrappedMetadataKey=_backupWrappedMetadataKey;
@property(nonatomic) int keyClass; // @synthesize keyClass=_keyClass;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100064af0
- (unsigned long long)hash;	// IMP=0x0000000100064a8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000649b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006490c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100064894
- (void)writeTo:(id)arg1;	// IMP=0x0000000100064824
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000645cc
- (id)dictionaryRepresentation;	// IMP=0x0000000100064500
- (id)description;	// IMP=0x000000010006444c
@property(readonly, nonatomic) _Bool hasBackupWrappedMetadataKey;
@property(nonatomic) _Bool hasKeyClass;

@end

