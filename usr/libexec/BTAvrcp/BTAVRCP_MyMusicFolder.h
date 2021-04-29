//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BTAVRCP_VFSFolder.h"

@class NSArray;

@interface BTAVRCP_MyMusicFolder : BTAVRCP_VFSFolder
{
    NSArray *_activeCategories;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100011ec0
@property(retain, nonatomic) NSArray *activeCategories; // @synthesize activeCategories=_activeCategories;
- (unsigned char)playItemWithUid:(unsigned long long)arg1;	// IMP=0x0000000100011e04
- (id)replyAttributesForUid:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x0000000100011d6c
- (id)replyItemAtIndex:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x0000000100011c0c
- (unsigned char)createFolderWithUid:(unsigned long long)arg1 folder:(id *)arg2;	// IMP=0x0000000100011904
- (unsigned long long)childrenCount;	// IMP=0x00000001000118b8
- (id)baseQuery;	// IMP=0x00000001000118a4
- (unsigned char)folderTypeForUid:(unsigned long long)arg1;	// IMP=0x0000000100011874
- (id)folderNameForUid:(unsigned long long)arg1;	// IMP=0x0000000100011744
- (void)refreshActiveCategories;	// IMP=0x000000010001151c
- (void)dealloc;	// IMP=0x00000001000114a8
- (id)initWithName:(id)arg1 uid:(unsigned long long)arg2;	// IMP=0x00000001000113c4

@end

