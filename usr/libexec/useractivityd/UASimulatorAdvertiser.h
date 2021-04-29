//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UAAdvertiser.h"

@class NSMutableArray, UASimulator;

@interface UASimulatorAdvertiser : UAAdvertiser
{
    NSMutableArray *_advertisableItems;	// 8 = 0x8
    UASimulator *_simulator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001b064
@property(readonly, retain) UASimulator *simulator; // @synthesize simulator=_simulator;
- (id)statusString;	// IMP=0x000000010001aed4
- (id)pairedDevices;	// IMP=0x000000010001ad98
- (_Bool)updateItem:(id)arg1;	// IMP=0x000000010001ac00
- (id)advertisingItems;	// IMP=0x000000010001abf4
- (_Bool)advertising;	// IMP=0x000000010001ab80
- (_Bool)active;	// IMP=0x000000010001ab4c
- (void)setAdvertisableItems:(id)arg1;	// IMP=0x000000010001a73c
- (id)advertisableItems;	// IMP=0x000000010001a6c8
- (id)initWithSimulator:(id)arg1;	// IMP=0x000000010001a57c

@end
