//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockLocalDeviceController : NSObject
{
    _Bool _lastUnlockUsedMask;	// 8 = 0x8
    CDUnknownBlockType _deviceEnteredBioLockoutHandler;	// 16 = 0x10
    NSArray *_wakeGestureDates;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010003c4d4
@property(nonatomic) _Bool lastUnlockUsedMask; // @synthesize lastUnlockUsedMask=_lastUnlockUsedMask;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSArray *wakeGestureDates; // @synthesize wakeGestureDates=_wakeGestureDates;
@property(copy, nonatomic) CDUnknownBlockType deviceEnteredBioLockoutHandler; // @synthesize deviceEnteredBioLockoutHandler=_deviceEnteredBioLockoutHandler;
- (void)handleBioLockoutStateChanged:(unsigned long long)arg1;	// IMP=0x000000010003c490
- (_Bool)shouldPrewarmAttempt;	// IMP=0x000000010003c484
- (void)deviceUnlockedWithMask:(_Bool)arg1;	// IMP=0x000000010003c3c0
- (void)lockDevice;	// IMP=0x000000010003c314
- (void)lockWithBioLockOut;	// IMP=0x000000010003c308
- (_Bool)faceIDEnabled;	// IMP=0x000000010003c300
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010003c2a0
- (id)init;	// IMP=0x000000010003c28c

@end
