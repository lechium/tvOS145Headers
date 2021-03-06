//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BatteryDataCollectionManager : NSObject
{
    NSMutableArray *_agents;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_pruningTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managerQueue;	// 24 = 0x18
    int _bdcEnable;	// 32 = 0x20
}

- (void)systemTimeChanged;	// IMP=0x000000010000b090
- (void)stop;	// IMP=0x000000010000aed4
- (void)start;	// IMP=0x000000010000ad20
- (void)dealloc;	// IMP=0x000000010000ac6c
- (id)init;	// IMP=0x0000000100008060

@end

