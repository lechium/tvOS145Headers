//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UAClientController.h"

@class UAUserActivityInfo;

@interface UAReplayClientController : UAClientController
{
    UAUserActivityInfo *_item;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001b5c0
@property(retain) UAUserActivityInfo *item; // @synthesize item=_item;
- (id)statusString;	// IMP=0x000000010001b530
- (id)userActivityInfoForUUID:(id)arg1;	// IMP=0x000000010001b438
- (id)eligibleAdvertiseableItemsInOrder;	// IMP=0x000000010001b38c
- (id)items;	// IMP=0x000000010001b2e0
- (void)removeItem:(id)arg1;	// IMP=0x000000010001b1a4
- (void)addItem:(id)arg1;	// IMP=0x000000010001b150
- (void)dealloc;	// IMP=0x000000010001b0e0
- (id)initWithManager:(id)arg1;	// IMP=0x000000010001b0a4

@end
