//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UACornerActionManagerHandler.h"

@class NSMutableSet, NSObject, NSSet, SFPeerDevice;
@protocol OS_dispatch_queue;

@interface UASimulatorController : UACornerActionManagerHandler
{
    NSMutableSet *_simulators;	// 8 = 0x8
    unsigned int _simulatorPort;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQ;	// 24 = 0x18
    SFPeerDevice *_ourPeerDevice;	// 32 = 0x20
}

+ (void)setSimulatorForCommandPort:(unsigned int)arg1 controller:(id)arg2;	// IMP=0x0000000100043430
+ (id)simulatorControllerForCommandPort:(unsigned int)arg1;	// IMP=0x0000000100043374
- (void).cxx_destruct;	// IMP=0x0000000100043f98
@property(retain) SFPeerDevice *ourPeerDevice; // @synthesize ourPeerDevice=_ourPeerDevice;
@property unsigned int simulatorPort; // @synthesize simulatorPort=_simulatorPort;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQ; // @synthesize dispatchQ=_dispatchQ;
- (id)simulatorStatus;	// IMP=0x0000000100043c18
- (id)statusString;	// IMP=0x00000001000439e8
- (_Bool)terminate;	// IMP=0x0000000100043830
- (_Bool)active;	// IMP=0x00000001000437c8
- (void)removeSimulator:(id)arg1;	// IMP=0x000000010004372c
- (void)addSimulator:(id)arg1;	// IMP=0x0000000100043694
@property(readonly, retain) NSSet *simulators;
- (id)initWithManager:(id)arg1;	// IMP=0x0000000100043528

@end

