//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface LRUStringCache : NSObject
{
    unsigned long long _size;	// 8 = 0x8
    NSMutableArray *_strings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004754c
@property(retain) NSMutableArray *strings; // @synthesize strings=_strings;
@property unsigned long long size; // @synthesize size=_size;
- (void)removeAllObjects;	// IMP=0x0000000100047494
- (id)values;	// IMP=0x00000001000473dc
- (void)addObject:(id)arg1;	// IMP=0x0000000100047238
- (unsigned long long)count;	// IMP=0x0000000100047198
- (id)initWithSize:(unsigned long long)arg1;	// IMP=0x00000001000470f8

@end

