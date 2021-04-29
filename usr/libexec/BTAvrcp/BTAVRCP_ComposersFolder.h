//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BTAVRCP_VFSFolder.h"

@interface BTAVRCP_ComposersFolder : BTAVRCP_VFSFolder
{
    _Bool _isRecentlyAdded;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool isRecentlyAdded; // @synthesize isRecentlyAdded=_isRecentlyAdded;
- (unsigned char)playItemWithUid:(unsigned long long)arg1;	// IMP=0x000000010000d37c
- (id)replyAttributesForUid:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x000000010000d304
- (id)replyItemAtIndex:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x000000010000d0f4
- (unsigned char)createFolderWithUid:(unsigned long long)arg1 folder:(id *)arg2;	// IMP=0x000000010000cddc
- (unsigned long long)childrenCount;	// IMP=0x000000010000cd54
- (id)baseQuery;	// IMP=0x000000010000ccec
- (_Bool)composerHasSingleAlbum:(id)arg1;	// IMP=0x000000010000cc8c
- (_Bool)showRecentlyAddedFolder;	// IMP=0x000000010000cbf4
- (id)initWithName:(id)arg1 uid:(unsigned long long)arg2 isRecentlyAdded:(_Bool)arg3;	// IMP=0x000000010000cba4
- (id)initWithName:(id)arg1 uid:(unsigned long long)arg2;	// IMP=0x000000010000cb94

@end

