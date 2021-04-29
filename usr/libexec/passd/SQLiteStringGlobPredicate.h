//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePredicate.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SQLiteStringGlobPredicate : SQLitePredicate <NSCopying>
{
    NSString *_property;	// 8 = 0x8
    NSString *_pattern;	// 16 = 0x10
}

+ (id)predicateWithProperty:(id)arg1 matchingPattern:(id)arg2;	// IMP=0x0000000100056df0
+ (id)predicateWithProperty:(id)arg1 havingSuffix:(id)arg2;	// IMP=0x0000000100056d5c
+ (id)predicateWithProperty:(id)arg1 havingPrefix:(id)arg2;	// IMP=0x0000000100056cc8
- (void).cxx_destruct;	// IMP=0x00000001000572c8
@property(readonly) NSString *pattern; // @synthesize pattern=_pattern;
@property(readonly) NSString *property; // @synthesize property=_property;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100057094
- (unsigned long long)hash;	// IMP=0x0000000100056fe0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100056fdc
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0000000100056eac

@end

