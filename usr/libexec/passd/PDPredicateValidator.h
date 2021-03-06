//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPredicateVisitor-Protocol.h"

@class NSDictionary, NSError, NSMutableSet, NSPredicate;

@interface PDPredicateValidator : NSObject <NSPredicateVisitor>
{
    _Bool _validatedPredicate;	// 8 = 0x8
    _Bool _validatedOperator;	// 9 = 0x9
    NSPredicate *_predicate;	// 16 = 0x10
    NSDictionary *_allowedKeysAndOperators;	// 24 = 0x18
    NSMutableSet *_usedKeys;	// 32 = 0x20
    unsigned long long _allowedOperators;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
}

+ (id)validatePredicate:(id)arg1 allowedKeysAndOperators:(id)arg2 error:(id *)arg3;	// IMP=0x00000001002a4224
- (void).cxx_destruct;	// IMP=0x00000001002a48b8
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x00000001002a46e8
- (void)visitPredicate:(id)arg1;	// IMP=0x00000001002a46e4
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x00000001002a44ec
- (id)validateWithError:(id *)arg1;	// IMP=0x00000001002a4434
- (id)initWithPredicate:(id)arg1 allowedKeysAndOperators:(id)arg2;	// IMP=0x00000001002a434c
- (id)init;	// IMP=0x00000001002a4334

@end

