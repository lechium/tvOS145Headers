//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol OS_dispatch_queue;

@interface XPCNotificationDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSPointerArray *_listeners;	// 16 = 0x10
}

+ (id)dispatcher;	// IMP=0x00000001000026ac
- (void).cxx_destruct;	// IMP=0x00000001000024e0
@property(retain) NSPointerArray *listeners; // @synthesize listeners=_listeners;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeListener:(id)arg1;	// IMP=0x0000000100002408
- (void)addListener:(id)arg1;	// IMP=0x0000000100002358
- (void)notification:(const char *)arg1;	// IMP=0x000000010000227c
- (id)init;	// IMP=0x00000001000020fc

@end

