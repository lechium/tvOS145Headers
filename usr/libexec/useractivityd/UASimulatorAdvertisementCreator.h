//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UAClientController.h"

@class UASimulator;

@interface UASimulatorAdvertisementCreator : UAClientController
{
    UASimulator *_simulator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003cc4c
@property(readonly, retain) UASimulator *simulator; // @synthesize simulator=_simulator;
- (id)statusString;	// IMP=0x000000010003c9ec
- (_Bool)active;	// IMP=0x000000010003c9a0
- (long long)priority;	// IMP=0x000000010003c918
- (id)eligibleAdvertiseableItemsInOrder;	// IMP=0x000000010003c5b4
- (id)items;	// IMP=0x000000010003c438
- (id)initWithManager:(id)arg1 simulator:(id)arg2;	// IMP=0x000000010003c3a8

@end

