//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BTAVRCP_VFSFolder.h"

@interface BTAVRCP_ItemsFolder : BTAVRCP_VFSFolder
{
}

- (unsigned char)playItemWithUid:(unsigned long long)arg1;	// IMP=0x0000000100009c0c
- (id)replyAttributesForUid:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x0000000100009b60
- (id)replyItemAtIndex:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x0000000100009ab4
- (unsigned char)createFolderWithUid:(unsigned long long)arg1 folder:(id *)arg2;	// IMP=0x0000000100009a4c
- (unsigned long long)childrenCount;	// IMP=0x00000001000099d8
- (id)targetApp;	// IMP=0x00000001000099b4

@end

