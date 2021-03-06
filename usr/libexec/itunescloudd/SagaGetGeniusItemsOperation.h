//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSArray;

@interface SagaGetGeniusItemsOperation : CloudLibraryOperation
{
    unsigned long long _seedID;	// 8 = 0x8
    unsigned int _numberOfItems;	// 16 = 0x10
    NSArray *_itemIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100061578
@property(readonly, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
- (void)main;	// IMP=0x00000001000613b0
- (id)initWithConfiguration:(id)arg1 seedID:(unsigned long long)arg2 numberOfItems:(unsigned int)arg3;	// IMP=0x0000000100061350
- (id)initWithSeedID:(unsigned long long)arg1 numberOfItems:(unsigned int)arg2;	// IMP=0x00000001000612e8

@end

