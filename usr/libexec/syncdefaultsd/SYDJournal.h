//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SYDJournal : NSObject
{
    NSMutableDictionary *_store;	// 8 = 0x8
    NSMutableDictionary *_journal;	// 16 = 0x10
    _Bool _readonly;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003da84
- (id)description;	// IMP=0x000000010003da44
- (_Bool)removeChangesUntilChangeCount:(long long)arg1;	// IMP=0x000000010003d82c
- (void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3;	// IMP=0x000000010003d6cc
- (long long)maximumChangeCount;	// IMP=0x000000010003d59c
- (id)changesSinceChangeCount:(long long)arg1;	// IMP=0x000000010003d390
- (int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000010003d2a4
- (id)initWithMutableStore:(id)arg1;	// IMP=0x000000010003d1e8
- (id)initWithStore:(id)arg1;	// IMP=0x000000010003d138
- (id)init;	// IMP=0x000000010003d104

@end

