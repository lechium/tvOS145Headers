//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FAHeartbeatActivity;

@interface FAActivityManager : NSObject
{
    FAHeartbeatActivity *_heartbeatActivity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100005e00
- (void)handleAccountDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005d54
- (void)handleAccountAddition:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005c34
- (void)checkinXPCActivities;	// IMP=0x0000000100005bb4
- (id)initWithQueueProvider:(id)arg1;	// IMP=0x0000000100005b28

@end
