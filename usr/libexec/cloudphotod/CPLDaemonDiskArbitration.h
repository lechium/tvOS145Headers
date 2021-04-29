//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSURL;

@interface CPLDaemonDiskArbitration : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSURL *_volumeURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100017678
- (void)removeVolumeUnmountObserver:(id)arg1;	// IMP=0x000000010001761c
- (void)addVolumeUnmountObserver:(id)arg1;	// IMP=0x00000001000175c0
- (id)initWithVolumeURL:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100017444

@end
