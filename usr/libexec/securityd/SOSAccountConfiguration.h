//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SOSAccountConfiguration : PBCodable <NSCopying>
{
    NSMutableArray *_pendingBackupPeers;	// 8 = 0x8
    _Bool _ringUpdateFlag;	// 16 = 0x10
    struct {
        unsigned int ringUpdateFlag:1;
    } _has;	// 20 = 0x14
}

+ (Class)pendingBackupPeersType;	// IMP=0x00000001001a46c0
- (void).cxx_destruct;	// IMP=0x00000001001a46ac
@property(nonatomic) _Bool ringUpdateFlag; // @synthesize ringUpdateFlag=_ringUpdateFlag;
@property(retain, nonatomic) NSMutableArray *pendingBackupPeers; // @synthesize pendingBackupPeers=_pendingBackupPeers;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001a4510
- (unsigned long long)hash;	// IMP=0x00000001001a44a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001a43c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001a4218
- (void)copyTo:(id)arg1;	// IMP=0x00000001001a4118
- (void)writeTo:(id)arg1;	// IMP=0x00000001001a3fc4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001a3d54
- (id)dictionaryRepresentation;	// IMP=0x00000001001a3c88
- (id)description;	// IMP=0x00000001001a3bd4
@property(nonatomic) _Bool hasRingUpdateFlag;
- (id)pendingBackupPeersAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001a3b68
- (unsigned long long)pendingBackupPeersCount;	// IMP=0x00000001001a3b50
- (void)addPendingBackupPeers:(id)arg1;	// IMP=0x00000001001a3adc
- (void)clearPendingBackupPeers;	// IMP=0x00000001001a3ac4

@end

