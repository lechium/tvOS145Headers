//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PQLInjecting-Protocol.h"

@class CPLPrequeliteTable, CPLPrequeliteType, NSData, NSString, PQLNameInjection;
@protocol PQLBindable, PQLInjecting;

@interface CPLPrequeliteVariable : NSObject <PQLInjecting, NSCopying>
{
    PQLNameInjection *_injection;	// 8 = 0x8
    id _cachedValue;	// 16 = 0x10
    id _cachedValueIdentifier;	// 24 = 0x18
    _Bool _shouldNotCacheValue;	// 32 = 0x20
    _Bool _allowsNull;	// 33 = 0x21
    _Bool _unique;	// 34 = 0x22
    NSString *_variableName;	// 40 = 0x28
    CPLPrequeliteTable *_table;	// 48 = 0x30
    CPLPrequeliteType *_type;	// 56 = 0x38
    id <PQLBindable> _bindableValueForDefaultValue;	// 64 = 0x40
    id _defaultValue;	// 72 = 0x48
}

+ (id)variableWithName:(id)arg1 forTable:(id)arg2 type:(id)arg3;	// IMP=0x00000001000411d4
+ (id)variableWithName:(id)arg1 type:(id)arg2;	// IMP=0x00000001000411c0
+ (id)indexVariableForVariableWithName:(id)arg1 forTable:(id)arg2;	// IMP=0x0000000100040c14
+ (id)variableWithName:(id)arg1 defaultValue:(id)arg2 forTable:(id)arg3 type:(id)arg4;	// IMP=0x0000000100040b60
+ (id)variableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3;	// IMP=0x0000000100040acc
- (void).cxx_destruct;	// IMP=0x00000001000414e4
@property(nonatomic, getter=isUnique) _Bool unique; // @synthesize unique=_unique;
@property(nonatomic) _Bool allowsNull; // @synthesize allowsNull=_allowsNull;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) id <PQLBindable> bindableValueForDefaultValue; // @synthesize bindableValueForDefaultValue=_bindableValueForDefaultValue;
@property(nonatomic) _Bool shouldNotCacheValue; // @synthesize shouldNotCacheValue=_shouldNotCacheValue;
@property(readonly, nonatomic) CPLPrequeliteType *type; // @synthesize type=_type;
@property(readonly, nonatomic) CPLPrequeliteTable *table; // @synthesize table=_table;
@property(readonly, nonatomic) NSString *variableName; // @synthesize variableName=_variableName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000413ec
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000413d8
- (id)columnDefinitionWithDefaultValue:(id)arg1;	// IMP=0x00000001000411fc
@property(readonly, nonatomic) id <PQLInjecting> columnDefinition;
- (id)valueFromSet:(id)arg1 atIndex:(int)arg2;	// IMP=0x0000000100041120
- (id)bindableValueForValue:(id)arg1;	// IMP=0x0000000100041088
- (void)discardCachedValue;	// IMP=0x0000000100041058
- (void)setCachedValue:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000100040fe0
- (id)cachedValueForIdentifier:(id)arg1;	// IMP=0x0000000100040f74
- (_Bool)hasCachedValueForIdentifier:(id)arg1;	// IMP=0x0000000100040f14
@property(readonly, copy) NSString *description;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x0000000100040e98
@property(readonly, nonatomic) NSData *sql;
- (id)initWithName:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 type:(id)arg4;	// IMP=0x0000000100040cdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
