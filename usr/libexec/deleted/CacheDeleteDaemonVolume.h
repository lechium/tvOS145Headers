//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CacheDelete/CacheDeleteVolume.h>

@class NSArray, NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface CacheDeleteDaemonVolume : CacheDeleteVolume
{
    _Bool _primary;	// 8 = 0x8
    _Bool _isAPFSVolume;	// 9 = 0x9
    unsigned short _role;	// 10 = 0xa
    NSUUID *_uuid;	// 16 = 0x10
    unsigned long long _reserve;	// 24 = 0x18
    unsigned long long _quota;	// 32 = 0x20
    NSDictionary *__thresholds;	// 40 = 0x28
}

+ (id)volumeWithMountpoint:(id)arg1;	// IMP=0x0000000100046110
+ (void)invalidateVolumesCache;	// IMP=0x0000000100046074
+ (id)volumeWithPath:(id)arg1;	// IMP=0x0000000100045ba8
- (void).cxx_destruct;	// IMP=0x00000001000463d8
@property(readonly, nonatomic) NSDictionary *_thresholds; // @synthesize _thresholds=__thresholds;
@property(readonly) _Bool isAPFSVolume; // @synthesize isAPFSVolume=_isAPFSVolume;
@property(readonly) unsigned short role; // @synthesize role=_role;
@property unsigned long long quota; // @synthesize quota=_quota;
@property unsigned long long reserve; // @synthesize reserve=_reserve;
@property(readonly) _Bool primary; // @synthesize primary=_primary;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)description;	// IMP=0x0000000100046300
@property(readonly, nonatomic) _Bool isSpecialVolume;
- (id)thresholds;	// IMP=0x0000000100046218
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100045b74
- (id)initWithVolume:(id)arg1;	// IMP=0x0000000100045a18
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100045a08
- (id)initWithPath:(id)arg1 isPrimary:(_Bool)arg2;	// IMP=0x000000010004584c
@property(readonly, nonatomic) NSArray *siblings; // @dynamic siblings;
- (_Bool)isFixedSizeVolume;	// IMP=0x00000001000457d8
- (_Bool)validate;	// IMP=0x0000000100045780
- (id)bsdDisk;	// IMP=0x0000000100045778
- (id)snapshotsExcludingTimeMachine;	// IMP=0x0000000100033dd8
- (_Bool)hasSnapshotsExcludingTimeMachine;	// IMP=0x0000000100033d80
- (id)timeMachineSnapshotRegex;	// IMP=0x0000000100033d5c
- (id)snapshotsExcludingRegularExpression:(id)arg1;	// IMP=0x0000000100033aac
- (_Bool)hasSnapshotsExcludingRegularExpression:(id)arg1;	// IMP=0x0000000100033818
- (id)snapshotsMatchingRegularExpression:(id)arg1;	// IMP=0x0000000100033568
- (_Bool)hasSnapshotsMatchingRegularExpression:(id)arg1;	// IMP=0x00000001000332d4
- (id)snapshots;	// IMP=0x0000000100032e28

@end

