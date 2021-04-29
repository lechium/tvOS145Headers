//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface MediaLibraryPropertyCache : NSObject
{
    NSNumber *_globalCount;	// 8 = 0x8
    NSString *_itemProperty;	// 16 = 0x10
    NSNumber *_itemCount;	// 24 = 0x18
    struct _NSRange _itemNamesRange;	// 32 = 0x20
    NSMutableArray *_itemNames;	// 48 = 0x30
    NSArray *_collections;	// 56 = 0x38
}

@property(copy, nonatomic) NSNumber *globalCount; // @synthesize globalCount=_globalCount;
@property(retain, nonatomic) NSArray *collections; // @synthesize collections=_collections;
@property(copy, nonatomic) NSNumber *itemCount; // @synthesize itemCount=_itemCount;
@property(readonly, copy, nonatomic) NSString *itemProperty; // @synthesize itemProperty=_itemProperty;
- (void)setItemNames:(id)arg1 forRange:(struct _NSRange)arg2;	// IMP=0x000000010003c874
- (id)itemNamesForRange:(struct _NSRange)arg1;	// IMP=0x000000010003c75c
- (void)removeNonGlobalCache;	// IMP=0x000000010003c6d0
- (void)dealloc;	// IMP=0x000000010003c628
- (id)initForProperty:(id)arg1;	// IMP=0x000000010003c57c
- (id)init;	// IMP=0x000000010003c544
- (id)description;	// IMP=0x000000010003c4a0

@end
