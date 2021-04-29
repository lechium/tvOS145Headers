//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TaskScheduler-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface DispatchQueue : NSObject <TaskScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)defaultQueue;	// IMP=0x000000010016d8dc
- (void).cxx_destruct;	// IMP=0x000000010016d968
- (void)syncUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010016d95c
- (void)asyncUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010016d950
- (void)assertQueue;	// IMP=0x000000010016d948
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010016d864
- (id)initWithName:(id)arg1;	// IMP=0x000000010016d77c
- (id)init;	// IMP=0x000000010016d6dc
- (void)scheduleBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010009b624

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
