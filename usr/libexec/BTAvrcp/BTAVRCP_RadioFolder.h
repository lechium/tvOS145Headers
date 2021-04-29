//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BTAVRCP_VFSFolder.h"

@class NSArray;

@interface BTAVRCP_RadioFolder : BTAVRCP_VFSFolder
{
    NSArray *_recentStations;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000dfa0
@property(retain, nonatomic) NSArray *recentStations; // @synthesize recentStations=_recentStations;
- (unsigned char)playItemWithUid:(unsigned long long)arg1;	// IMP=0x000000010000dee8
- (id)replyAttributesForUid:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x000000010000ddf8
- (id)replyItemAtIndex:(unsigned long long)arg1 attributeIDs:(id)arg2;	// IMP=0x000000010000dbdc
- (unsigned char)createFolderWithUid:(unsigned long long)arg1 folder:(id *)arg2;	// IMP=0x000000010000db9c
- (unsigned long long)childrenCount;	// IMP=0x000000010000db50
- (id)stationWithUid:(unsigned long long)arg1;	// IMP=0x000000010000da94
- (void)fetchRecentStations:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d810
- (void)refreshRecentStations;	// IMP=0x000000010000d720
- (id)initWithName:(id)arg1 uid:(unsigned long long)arg2;	// IMP=0x000000010000d45c

@end

