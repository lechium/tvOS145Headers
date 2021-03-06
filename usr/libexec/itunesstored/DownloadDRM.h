//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SinfsArray;

@interface DownloadDRM : NSObject
{
    NSArray *_sinfs;	// 8 = 0x8
}

- (id)_sinfsArrayWithDataKey:(id)arg1;	// IMP=0x000000010008926c
@property(readonly) SinfsArray *sinfsArray;
@property(readonly) NSArray *sinfs; // @synthesize sinfs=_sinfs;
- (id)sinfForIdentifier:(long long)arg1;	// IMP=0x0000000100089114
@property(readonly) SinfsArray *pinfsArray;
@property(readonly, getter=isDRMFree) _Bool DRMFree;
- (id)firstDataForSinfDataKey:(id)arg1;	// IMP=0x0000000100088fbc
- (void)dealloc;	// IMP=0x0000000100088f74
- (id)initWithSinfArray:(id)arg1;	// IMP=0x0000000100088df4
- (id)init;	// IMP=0x0000000100088de4

@end

