//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BTAVRCP_VFSFolder.h"

@interface BTAVRCP_ArtistsFolder : BTAVRCP_VFSFolder
{
    _Bool _isRecentlyAdded;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool isRecentlyAdded; // @synthesize isRecentlyAdded=_isRecentlyAdded;
- (unsigned char)playItemWithUid:(unsigned long long)arg1;	// IMP=0x000000010000a960
- (id)replyAttributesForUid:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x000000010000a8e8
- (id)replyItemAtIndex:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x000000010000a704
- (unsigned char)createFolderWithUid:(unsigned long long)arg1 folder:(id *)arg2;	// IMP=0x000000010000a410
- (unsigned long long)childrenCount;	// IMP=0x000000010000a388
- (id)baseQuery;	// IMP=0x000000010000a318
- (id)artistName:(id)arg1;	// IMP=0x000000010000a244
- (_Bool)artistHasSingleAlbum:(id)arg1;	// IMP=0x000000010000a1e4
- (_Bool)showRecentlyAddedFolder;	// IMP=0x000000010000a14c
- (id)initWithName:(id)arg1 uid:(unsigned long long)arg2 isRecentlyAdded:(_Bool)arg3;	// IMP=0x000000010000a0fc
- (id)initWithName:(id)arg1 uid:(unsigned long long)arg2;	// IMP=0x000000010000a0ec

@end

