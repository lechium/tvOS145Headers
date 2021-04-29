//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPredicateVisitor-Protocol.h"

@class NSArray, NSMutableArray;

@interface PredicateValidator : NSObject <NSPredicateVisitor>
{
    _Bool _acceptableExpressionTypes[32];	// 8 = 0x8
    NSArray *_acceptableKeyPaths;	// 40 = 0x28
    NSMutableArray *_errors;	// 48 = 0x30
    _Bool _valid;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100183cb4
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0000000100183cb0
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000100183b38
- (void)visitPredicate:(id)arg1;	// IMP=0x0000000100183b34
- (_Bool)validatePredicate:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100183994
- (void)setAcceptableKeyPaths:(id)arg1;	// IMP=0x000000010018394c
- (void)setAcceptableExpressionTypes:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010018392c
- (id)init;	// IMP=0x00000001001838e8

@end

