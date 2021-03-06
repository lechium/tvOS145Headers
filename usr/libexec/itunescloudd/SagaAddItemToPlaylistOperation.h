//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@interface SagaAddItemToPlaylistOperation : CloudLibraryOperation
{
    unsigned long long _itemSagaID;	// 8 = 0x8
    long long _playlistPersistentID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000ea318
- (void)main;	// IMP=0x00000001000e9960
- (_Bool)isPersistent;	// IMP=0x00000001000e9958
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000e98ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e97f8
- (id)initWithConfiguration:(id)arg1 itemSagaID:(unsigned long long)arg2 playlistPersistentID:(long long)arg3;	// IMP=0x00000001000e9798
- (id)initWithItemSagaID:(unsigned long long)arg1 playlistPersistentID:(long long)arg2;	// IMP=0x00000001000e9730

@end

