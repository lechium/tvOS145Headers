//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ODRApplication;

@interface ODRApplicationPurgeTask : Task
{
    ODRApplication *_application;	// 8 = 0x8
    long long _purgeReason;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100054984
- (void)_main;	// IMP=0x00000001000548bc
- (void)main;	// IMP=0x0000000100054810
- (id)initWithApplication:(id)arg1 purgeReason:(long long)arg2;	// IMP=0x0000000100054770

@end

