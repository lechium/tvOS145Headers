//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BTAVRCP_VFSFolder.h"

@class NSNumber;

@interface BTAVRCP_PlaylistsFolder : BTAVRCP_VFSFolder
{
    _Bool _isRecentlyAdded;	// 8 = 0x8
    NSNumber *_parentPlaylistID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000099a0
@property(readonly, nonatomic) _Bool isRecentlyAdded; // @synthesize isRecentlyAdded=_isRecentlyAdded;
@property(readonly, nonatomic) NSNumber *parentPlaylistID; // @synthesize parentPlaylistID=_parentPlaylistID;
- (unsigned char)playItemWithUid:(unsigned long long)arg1;	// IMP=0x0000000100009908
- (id)replyAttributesForUid:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x0000000100009890
- (id)replyItemAtIndex:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x00000001000096c4
- (unsigned char)createFolderWithUid:(unsigned long long)arg1 folder:(id *)arg2;	// IMP=0x0000000100009440
- (unsigned long long)childrenCount;	// IMP=0x00000001000093b8
- (id)baseQuery;	// IMP=0x00000001000092cc
- (_Bool)playlistIsFolder:(id)arg1;	// IMP=0x0000000100009270
- (_Bool)showRecentlyAddedFolder;	// IMP=0x0000000100009194
- (id)initWithName:(id)arg1 uid:(unsigned long long)arg2 parentPlaylistID:(id)arg3 isRecentlyAdded:(_Bool)arg4;	// IMP=0x00000001000090ec
- (id)initWithName:(id)arg1 uid:(unsigned long long)arg2;	// IMP=0x00000001000090d4

@end
