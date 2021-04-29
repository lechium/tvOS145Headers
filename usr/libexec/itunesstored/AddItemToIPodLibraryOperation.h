//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class IPodLibraryItem, NSNumber;

@interface AddItemToIPodLibraryOperation : ISOperation
{
    NSNumber *_insertedItemPersistentIdentifier;	// 96 = 0x60
    IPodLibraryItem *_libraryItem;	// 104 = 0x68
}

- (void)_setInsertedItemPersistentIdentifier:(long long)arg1;	// IMP=0x00000001000a76e0
- (id)_libraryItem;	// IMP=0x00000001000a768c
- (void)run;	// IMP=0x00000001000a7488
@property(readonly) NSNumber *insertedItemPersistentIdentifier;
@property(readonly) IPodLibraryItem *IPodLibraryItem;
- (void)dealloc;	// IMP=0x00000001000a7378
- (id)initWithIPodLibraryItem:(id)arg1;	// IMP=0x00000001000a7310

@end

