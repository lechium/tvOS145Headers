//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;
@protocol PQLInjecting;

@interface CPLPrequeliteVariableGroup : NSObject
{
    NSData *_sqlForValues;	// 8 = 0x8
    NSData *_sqlForUpdates;	// 16 = 0x10
    id _defaultValuesObject;	// 24 = 0x18
    _Bool _shouldNotCacheValue;	// 32 = 0x20
    NSArray *_variables;	// 40 = 0x28
    id <PQLInjecting> _namesInjection;	// 48 = 0x30
    id <PQLInjecting> _definitionInjection;	// 56 = 0x38
}

+ (id)variableGroupWithVariablesAndGroups:(id)arg1;	// IMP=0x00000001000415ac
+ (id)variableGroupWithVariables:(id)arg1;	// IMP=0x000000010004155c
- (void).cxx_destruct;	// IMP=0x00000001000421e4
@property(readonly, nonatomic) id <PQLInjecting> definitionInjection; // @synthesize definitionInjection=_definitionInjection;
@property(readonly, nonatomic) id <PQLInjecting> namesInjection; // @synthesize namesInjection=_namesInjection;
@property(nonatomic) _Bool shouldNotCacheValue; // @synthesize shouldNotCacheValue=_shouldNotCacheValue;
@property(readonly, nonatomic) NSArray *variables; // @synthesize variables=_variables;
@property(readonly, nonatomic) id <PQLInjecting> injectionForDefaultValuesUpdate;
- (id)injectionForUpdates:(id)arg1;	// IMP=0x00000001000420fc
- (id)valuesInSet:(id)arg1;	// IMP=0x00000001000420ec
- (id)valuesInSet:(id)arg1 startingAtIndex:(int)arg2;	// IMP=0x0000000100041f30
@property(readonly, nonatomic) id <PQLInjecting> injectionForDefaultValues;
- (id)injectionForValues:(id)arg1;	// IMP=0x0000000100041e68
- (id)_defaultValuesObject;	// IMP=0x0000000100041c7c
- (id)initWithVariables:(id)arg1;	// IMP=0x0000000100041780

@end
