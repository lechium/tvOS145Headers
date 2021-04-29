//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TKProtocolSlotClientNotification-Protocol.h"

@class NSMutableArray, NSXPCConnection, TKHostTokenRegistry;

@interface TKSlotWatcher : NSObject <TKProtocolSlotClientNotification>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSMutableArray *_slots;	// 16 = 0x10
    TKHostTokenRegistry *_registry;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000b770
@property(readonly, nonatomic) TKHostTokenRegistry *registry; // @synthesize registry=_registry;
- (void)stop;	// IMP=0x000000010000b554
- (void)removeSlotWatch:(id)arg1;	// IMP=0x000000010000b408
- (void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000b258
- (void)startWithSlotServer:(id)arg1;	// IMP=0x000000010000af94
@property(readonly) _Bool hasStarted;
- (id)initWithTokenRegistry:(id)arg1;	// IMP=0x000000010000aed0

@end
