//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BLOperation.h"

@class BLMLImporterItem, NSNumber;

__attribute__((visibility("hidden")))
@interface BLAddItemToMediaLibraryOperation : BLOperation
{
    NSNumber *_insertedItemPersistentIdentifier;	// 80 = 0x50
    BLMLImporterItem *_libraryItem;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100003b0c
- (void)_setInsertedItemPersistentIdentifier:(long long)arg1;	// IMP=0x0000000100003aa0
- (id)_libraryItem;	// IMP=0x0000000100003a50
- (void)run;	// IMP=0x0000000100003788
@property(readonly) NSNumber *insertedItemPersistentIdentifier;
@property(readonly) BLMLImporterItem *IPodLibraryItem;
- (id)initWithIPodLibraryItem:(id)arg1;	// IMP=0x0000000100003658

@end

