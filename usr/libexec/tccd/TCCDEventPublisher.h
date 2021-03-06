//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_os_log, OS_xpc_event_publisher;

@interface TCCDEventPublisher : NSObject
{
    _Bool _receivedInitialBarrier;	// 8 = 0x8
    NSObject<OS_os_log> *_logger;	// 16 = 0x10
    NSString *_streamName;	// 24 = 0x18
    NSString *_subscriberEntitlement;	// 32 = 0x20
    NSMutableSet *_subscribers;	// 40 = 0x28
    NSMutableSet *_pendingSubscribers;	// 48 = 0x30
    NSMutableArray *_pendingEvents;	// 56 = 0x38
    unsigned long long _pendingEventsLimit;	// 64 = 0x40
    NSObject<OS_xpc_event_publisher> *_publisher;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
}

+ (id)publisher;	// IMP=0x0000000100030900
- (void).cxx_destruct;	// IMP=0x0000000100031be0
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSObject<OS_xpc_event_publisher> *publisher; // @synthesize publisher=_publisher;
@property unsigned long long pendingEventsLimit; // @synthesize pendingEventsLimit=_pendingEventsLimit;
@property(retain) NSMutableArray *pendingEvents; // @synthesize pendingEvents=_pendingEvents;
@property _Bool receivedInitialBarrier; // @synthesize receivedInitialBarrier=_receivedInitialBarrier;
@property(retain) NSMutableSet *pendingSubscribers; // @synthesize pendingSubscribers=_pendingSubscribers;
@property(retain) NSMutableSet *subscribers; // @synthesize subscribers=_subscribers;
@property(retain) NSString *subscriberEntitlement; // @synthesize subscriberEntitlement=_subscriberEntitlement;
@property(retain) NSString *streamName; // @synthesize streamName=_streamName;
@property(retain) NSObject<OS_os_log> *logger; // @synthesize logger=_logger;
- (void)publish:(id)arg1;	// IMP=0x0000000100031b10
- (void)sendEvent:(id)arg1;	// IMP=0x000000010003175c
- (void)addPendingEvent:(id)arg1;	// IMP=0x000000010003162c
- (void)removeSubscriber:(unsigned long long)arg1;	// IMP=0x00000001000314b8
- (void)addSubscriber:(unsigned long long)arg1;	// IMP=0x0000000100030fac
- (void)handleEventWithAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;	// IMP=0x0000000100030d48
- (void)handleError:(int)arg1;	// IMP=0x0000000100030ce0
- (id)init;	// IMP=0x000000010003096c

@end

