//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CacheDeleteDaemonVolume, NSDate, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CDRecentVolumeInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_volume;	// 8 = 0x8
    CacheDeleteDaemonVolume *_cdVolume;	// 16 = 0x10
    NSDate *_timestamp;	// 24 = 0x18
    NSNumber *_freespace;	// 32 = 0x20
    NSMutableDictionary *_services;	// 40 = 0x28
    long long _volumeState;	// 48 = 0x30
    NSMutableDictionary *_diagnostics;	// 56 = 0x38
}

+ (id)CDRecentVolumeInfo:(id)arg1;	// IMP=0x000000010002e004
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002ddb0
- (void).cxx_destruct;	// IMP=0x00000001000303bc
@property(retain, nonatomic) NSMutableDictionary *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(nonatomic) long long volumeState; // @synthesize volumeState=_volumeState;
@property(retain, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(retain) NSNumber *freespace; // @synthesize freespace=_freespace;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) CacheDeleteDaemonVolume *cdVolume; // @synthesize cdVolume=_cdVolume;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=_volume;
- (void)invalidate;	// IMP=0x00000001000302dc
- (void)log;	// IMP=0x000000010003004c
- (id)description;	// IMP=0x000000010002fe08
- (_Bool)isEmpty;	// IMP=0x000000010002fcf0
- (id)copyInvalidsAtUrgency:(int)arg1;	// IMP=0x000000010002f7b4
- (_Bool)validateServiceInfo:(id)arg1 atUrgency:(int)arg2;	// IMP=0x000000010002f708
- (_Bool)prune;	// IMP=0x000000010002f6f8
- (_Bool)prunePreserving:(id)arg1;	// IMP=0x000000010002f348
- (void)removeServiceInfo:(id)arg1;	// IMP=0x000000010002f2d8
- (id)lookupAmountForService:(id)arg1 atUrgency:(int)arg2;	// IMP=0x000000010002f22c
- (id)recentInfoAtUrgency:(int)arg1;	// IMP=0x000000010002f21c
- (id)_recentInfoAtUrgency:(int)arg1 validateResults:(_Bool)arg2;	// IMP=0x000000010002eadc
- (_Bool)updateServiceInfoAmount:(id)arg1 forService:(id)arg2 atUrgency:(int)arg3 withTimestamp:(double)arg4 nonPurgeableAmount:(id)arg5;	// IMP=0x000000010002e6e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002e58c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002e20c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002e05c
- (id)initWithServices:(id)arg1 volumeName:(id)arg2;	// IMP=0x000000010002ddb8

@end

