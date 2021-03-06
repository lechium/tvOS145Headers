//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CDResult.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CDPurgeOperationResult : CDResult
{
    _Bool _fsPurgeSuccess;	// 8 = 0x8
    _Bool _lowDisk;	// 9 = 0x9
    _Bool _veryLowDisk;	// 10 = 0xa
    _Bool _nearLowDisk;	// 11 = 0xb
    int _level;	// 12 = 0xc
    NSArray *_volumeNames;	// 16 = 0x10
    unsigned long long _requestedBytes;	// 24 = 0x18
    unsigned long long _beginFreeSpace;	// 32 = 0x20
    unsigned long long _endFreeSpace;	// 40 = 0x28
    NSMutableArray *_mutableResults;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100026f00
@property(retain, nonatomic) NSMutableArray *mutableResults; // @synthesize mutableResults=_mutableResults;
@property(nonatomic, getter=isNearLowDisk) _Bool nearLowDisk; // @synthesize nearLowDisk=_nearLowDisk;
@property(nonatomic, getter=isVeryLowDisk) _Bool veryLowDisk; // @synthesize veryLowDisk=_veryLowDisk;
@property(nonatomic, getter=isLowDisk) _Bool lowDisk; // @synthesize lowDisk=_lowDisk;
@property(nonatomic) _Bool fsPurgeSuccess; // @synthesize fsPurgeSuccess=_fsPurgeSuccess;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) unsigned long long endFreeSpace; // @synthesize endFreeSpace=_endFreeSpace;
@property(readonly, nonatomic) unsigned long long beginFreeSpace; // @synthesize beginFreeSpace=_beginFreeSpace;
@property(readonly, nonatomic) unsigned long long requestedBytes; // @synthesize requestedBytes=_requestedBytes;
@property(readonly, nonatomic) NSArray *volumeNames; // @synthesize volumeNames=_volumeNames;
- (void)addResult:(id)arg1;	// IMP=0x0000000100026d74
@property(readonly, nonatomic) NSArray *results;
@property(readonly, nonatomic) unsigned long long totalMeasuredBytes; // @dynamic totalMeasuredBytes;
@property(readonly, nonatomic) unsigned long long totalReportedBytes; // @dynamic totalReportedBytes;
- (id)initWithVolumes:(id)arg1 requestedBytes:(unsigned long long)arg2 beginFreeSpace:(unsigned long long)arg3;	// IMP=0x0000000100026b14

@end

