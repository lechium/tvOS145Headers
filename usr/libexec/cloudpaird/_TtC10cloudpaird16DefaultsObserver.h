//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10cloudpaird16DefaultsObserver : NSObject
{
    MISSING_TYPE *defaults;	// 8 = 0x8
    MISSING_TYPE *monitoredKeys;	// 16 = 0x10
    MISSING_TYPE *notify;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010009abb8
- (id)init;	// IMP=0x000000010009b018
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010009ae74
- (void)stop;	// IMP=0x000000010009ade4
- (void)start;	// IMP=0x000000010009ace0
- (void)dealloc;	// IMP=0x000000010009ab70
- (id)initWithKeys:(id)arg1 defaults:(id)arg2 notificationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010009a974

@end

