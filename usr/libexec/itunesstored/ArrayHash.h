//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface ArrayHash : NSObject <NSCopying>
{
    NSArray *_array;	// 8 = 0x8
}

@property(readonly) NSArray *array; // @synthesize array=_array;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003fd98
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003fd10
- (unsigned long long)hash;	// IMP=0x000000010003fbf0
- (void)dealloc;	// IMP=0x000000010003fba8
- (id)initWithArray:(id)arg1;	// IMP=0x000000010003fb50

@end

