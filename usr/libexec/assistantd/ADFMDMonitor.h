//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADFMDMonitor : NSObject
{
    _Bool _isLostModeActive;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00000001002b49d0
- (void).cxx_destruct;	// IMP=0x00000001002b4e70
- (_Bool)isLostModeActive;	// IMP=0x00000001002b4e68
- (_Bool)_fetchLostModeState;	// IMP=0x00000001002b4e10
- (void)_updateLostModeState;	// IMP=0x00000001002b4c78
- (void)dealloc;	// IMP=0x00000001002b4bf4
- (id)init;	// IMP=0x00000001002b4a6c

@end

