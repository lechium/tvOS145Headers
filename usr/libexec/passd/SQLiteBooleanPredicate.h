//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePredicate.h"

#import "NSCopying-Protocol.h"

@interface SQLiteBooleanPredicate : SQLitePredicate <NSCopying>
{
    _Bool _booleanValue;	// 8 = 0x8
}

+ (id)falsePredicate;	// IMP=0x0000000100055d78
+ (id)truePredicate;	// IMP=0x0000000100055d50
@property(readonly, nonatomic) _Bool booleanValue; // @synthesize booleanValue=_booleanValue;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0000000100055e3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100055da0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100055d9c

@end
