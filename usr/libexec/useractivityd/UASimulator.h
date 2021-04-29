//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UACornerActionManagerHandler.h"

#import "UAActivityNotifierProtocol-Protocol.h"

@class NSMutableSet, NSObject, NSSet, NSString, SFPeerDevice, UASimulatorAdvertisementCreator, UASimulatorAdvertiser, UASimulatorController, UASimulatorReceiver;
@protocol OS_dispatch_queue;

@interface UASimulator : UACornerActionManagerHandler <UAActivityNotifierProtocol>
{
    unsigned int _pairedClientPort;	// 8 = 0x8
    int _notifyToken;	// 12 = 0xc
    NSMutableSet *_notifiedItems;	// 16 = 0x10
    _Bool _activitiesShouldCrossover;	// 24 = 0x18
    unsigned int _commandPort;	// 28 = 0x1c
    UASimulatorController *_controller;	// 32 = 0x20
    SFPeerDevice *_ourDevice;	// 40 = 0x28
    SFPeerDevice *_peeredDevice;	// 48 = 0x30
    UASimulatorAdvertiser *_advertiser;	// 56 = 0x38
    UASimulatorReceiver *_receiver;	// 64 = 0x40
    UASimulatorAdvertisementCreator *_creator;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_dispatchQ;	// 80 = 0x50
    NSString *_bootstrapName;	// 88 = 0x58
}

+ (id)simulatorWithController:(id)arg1 parentSimulatorPortName:(id)arg2;	// IMP=0x0000000100086eb0
+ (id)simulatorWithController:(id)arg1 pairedPort:(unsigned int)arg2 childSimPid:(int)arg3 childVersion:(unsigned long long)arg4;	// IMP=0x0000000100086ea8
- (void).cxx_destruct;	// IMP=0x000000010008868c
@property(readonly, copy) NSString *bootstrapName; // @synthesize bootstrapName=_bootstrapName;
@property(readonly, retain) NSObject<OS_dispatch_queue> *dispatchQ; // @synthesize dispatchQ=_dispatchQ;
@property(readonly) unsigned int commandPort; // @synthesize commandPort=_commandPort;
@property(readonly) _Bool activitiesShouldCrossover; // @synthesize activitiesShouldCrossover=_activitiesShouldCrossover;
@property(readonly, retain) UASimulatorAdvertisementCreator *creator; // @synthesize creator=_creator;
@property(readonly, retain) UASimulatorReceiver *receiver; // @synthesize receiver=_receiver;
@property(readonly, retain) UASimulatorAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(retain) SFPeerDevice *peeredDevice; // @synthesize peeredDevice=_peeredDevice;
@property(retain) SFPeerDevice *ourDevice; // @synthesize ourDevice=_ourDevice;
@property(readonly, retain) UASimulatorController *controller; // @synthesize controller=_controller;
- (id)statusString;	// IMP=0x000000010008850c
- (_Bool)terminate;	// IMP=0x00000001000881cc
- (_Bool)suspend;	// IMP=0x00000001000880d0
- (_Bool)resume;	// IMP=0x0000000100087fd4
- (void)setSimulatorInFront:(_Bool)arg1;	// IMP=0x0000000100087e18
- (_Bool)active;	// IMP=0x0000000100087dd8
@property(copy) NSSet *notifiedItems;
@property(readonly) unsigned int pairedClientPort; // @dynamic pairedClientPort;
- (_Bool)reconnectToParentSimulator;	// IMP=0x0000000100087238
- (void)dealloc;	// IMP=0x0000000100087178
- (id)initWithController:(id)arg1;	// IMP=0x0000000100086754

@end

