//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UAReceiver.h"

@class UAUserActivityClientProcessesController;

@interface UALocalItemReceiver : UAReceiver
{
    UAUserActivityClientProcessesController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100047240
@property(readonly, retain) UAUserActivityClientProcessesController *controller; // @synthesize controller=_controller;
- (id)statusString;	// IMP=0x000000010004713c
- (id)receivedItems;	// IMP=0x0000000100046ebc
- (_Bool)receiving;	// IMP=0x0000000100046e6c
- (id)initWithManager:(id)arg1 controller:(id)arg2;	// IMP=0x0000000100046ddc

@end
