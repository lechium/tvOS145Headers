//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MSDKeychainManager : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100005784
- (void).cxx_destruct;	// IMP=0x0000000100006750
@property(retain) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (id)createSearchDictionaryForKey:(id)arg1;	// IMP=0x00000001000064d8
- (int)updateItemForAttributes:(id)arg1 withData:(id)arg2;	// IMP=0x0000000100006440
- (id)getAllItemsForKey:(id)arg1 withAttributes:(_Bool)arg2;	// IMP=0x0000000100006230
- (_Bool)saveItem:(id)arg1 forKey:(id)arg2 withAttributes:(id)arg3;	// IMP=0x0000000100005ee0
- (_Bool)deleteItemForKey:(id)arg1;	// IMP=0x0000000100005d64
- (id)getItemForKey:(id)arg1;	// IMP=0x0000000100005ad4
- (_Bool)saveItem:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100005880
- (id)init;	// IMP=0x00000001000057f0

@end

