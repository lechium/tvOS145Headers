//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventProcessor-Protocol.h"
#import "BKIOHIDServiceDisappearanceObserver-Protocol.h"
#import "BKIOHIDServiceMatchObserver-Protocol.h"

@class BKIOHIDServiceMatcher, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BKHumanPresenceHIDEventProcessor : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServiceDisappearanceObserver, BKHIDEventProcessor>
{
    NSMutableDictionary *_queue_displayUUIDToSensorRecords;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BKIOHIDServiceMatcher *_presenceServiceMatcher;	// 24 = 0x18
    BKIOHIDServiceMatcher *_proximityServiceMatcher;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002f014
@property(retain, nonatomic) BKIOHIDServiceMatcher *proximityServiceMatcher; // @synthesize proximityServiceMatcher=_proximityServiceMatcher;
@property(retain, nonatomic) BKIOHIDServiceMatcher *presenceServiceMatcher; // @synthesize presenceServiceMatcher=_presenceServiceMatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *displayUUIDToSensorRecords; // @synthesize displayUUIDToSensorRecords=_queue_displayUUIDToSensorRecords;
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x000000010002ed64
- (void)getStatus:(unsigned long long *)arg1 presence:(_Bool *)arg2 proximityInCentimeters:(double *)arg3 forDisplayUUID:(id)arg4;	// IMP=0x000000010002ecc0
- (void)_setPresence:(_Bool)arg1 forDisplayUUID:(id)arg2;	// IMP=0x000000010002ec2c
- (void)_setProximityInCentimeters:(double)arg1 forDisplayUUID:(id)arg2;	// IMP=0x000000010002eb98
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x000000010002e9e0
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x000000010002e780
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000010002e698
- (id)init;	// IMP=0x000000010002e548

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

