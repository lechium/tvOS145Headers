/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol WFPropertyListObject;
@class NSString, NSArray, NSSet;

@interface WFContentProperty : NSObject <NSCopying> {

	BOOL _canLowercaseName;
	BOOL _multipleValues;
	BOOL _filterable;
	BOOL _sortable;
	BOOL _gettable;
	BOOL _settable;
	BOOL _appendable;
	BOOL _removable;
	BOOL _primary;
	BOOL _caseInsensitive;
	BOOL _irrational;
	NSString* _keyPath;
	/*^block*/id _block;
	/*^block*/id _setterBlock;
	NSString* _name;
	NSString* _singularItemName;
	Class _propertyClass;
	NSArray* _allowedOperators;
	id<WFPropertyListObject> _userInfo;
	NSString* _negativeName;
	unsigned long long _tense;
	unsigned long long _timeUnits;
	unsigned long long _comparableUnits;
	NSString* _measurementUnitType;
	NSString* _displayName;
	NSArray* _possibleValues;
	/*^block*/id _possibleValuesGetter;

}

@property (nonatomic,copy,readonly) NSArray * possibleLabels; 
@property (nonatomic,readonly) Class valueItemClass; 
@property (nonatomic,copy,readonly) NSSet * allowedTransactionModes; 
@property (nonatomic,copy) NSArray * possibleValues;                                   //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,copy) id possibleValuesGetter;                                    //@synthesize possibleValuesGetter=_possibleValuesGetter - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                                //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,copy,readonly) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,copy,readonly) id setterBlock;                                    //@synthesize setterBlock=_setterBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * localizedSingularItemName; 
@property (nonatomic,copy,readonly) NSString * singularItemName;                       //@synthesize singularItemName=_singularItemName - In the implementation block
@property (nonatomic,readonly) BOOL canLowercaseName;                                  //@synthesize canLowercaseName=_canLowercaseName - In the implementation block
@property (nonatomic,readonly) Class propertyClass;                                    //@synthesize propertyClass=_propertyClass - In the implementation block
@property (nonatomic,readonly) BOOL multipleValues;                                    //@synthesize multipleValues=_multipleValues - In the implementation block
@property (getter=isFilterable,nonatomic,readonly) BOOL filterable;                    //@synthesize filterable=_filterable - In the implementation block
@property (getter=isSortable,nonatomic,readonly) BOOL sortable;                        //@synthesize sortable=_sortable - In the implementation block
@property (getter=isGettable,nonatomic,readonly) BOOL gettable;                        //@synthesize gettable=_gettable - In the implementation block
@property (getter=isSettable,nonatomic,readonly) BOOL settable;                        //@synthesize settable=_settable - In the implementation block
@property (getter=isAppendable,nonatomic,readonly) BOOL appendable;                    //@synthesize appendable=_appendable - In the implementation block
@property (getter=isRemovable,nonatomic,readonly) BOOL removable;                      //@synthesize removable=_removable - In the implementation block
@property (getter=isPrimary,nonatomic,readonly) BOOL primary;                          //@synthesize primary=_primary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedOperators;                        //@synthesize allowedOperators=_allowedOperators - In the implementation block
@property (nonatomic,copy,readonly) id<WFPropertyListObject> userInfo;                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasPossibleValues; 
@property (nonatomic,readonly) BOOL caseInsensitive;                                   //@synthesize caseInsensitive=_caseInsensitive - In the implementation block
@property (nonatomic,copy,readonly) NSString * negativeName;                           //@synthesize negativeName=_negativeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedNegativeName; 
@property (getter=isIrrational,nonatomic,readonly) BOOL irrational;                    //@synthesize irrational=_irrational - In the implementation block
@property (nonatomic,readonly) unsigned long long tense;                               //@synthesize tense=_tense - In the implementation block
@property (nonatomic,readonly) unsigned long long timeUnits;                           //@synthesize timeUnits=_timeUnits - In the implementation block
@property (nonatomic,readonly) unsigned long long comparableUnits;                     //@synthesize comparableUnits=_comparableUnits - In the implementation block
@property (nonatomic,readonly) NSString * measurementUnitType;                         //@synthesize measurementUnitType=_measurementUnitType - In the implementation block
@property (getter=isLabeledValue,nonatomic,readonly) BOOL labeledValue; 
@property (nonatomic,readonly) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
+(id)possibleLabelsForClass:(Class)arg1 localized:(BOOL)arg2 ;
-(id)parameterDefinition;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id<WFPropertyListObject>)userInfo;
-(NSString *)localizedName;
-(NSString *)keyPath;
-(id)block;
-(unsigned long long)tense;
-(NSString *)displayName;
-(BOOL)isRemovable;
-(BOOL)isPrimary;
-(NSArray *)possibleValues;
-(Class)propertyClass;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(BOOL)caseInsensitive;
-(BOOL)isSettable;
-(NSArray *)possibleLabels;
-(Class)valueItemClass;
-(NSSet *)allowedTransactionModes;
-(id)preferredTransactionModeWithCurrentMode:(id)arg1 ;
-(id)initWithKeyPath:(id)arg1 block:(/*^block*/id)arg2 setterBlock:(/*^block*/id)arg3 name:(id)arg4 propertyClass:(Class)arg5 multipleValues:(BOOL)arg6 filterable:(BOOL)arg7 sortable:(BOOL)arg8 gettable:(BOOL)arg9 settable:(BOOL)arg10 appendable:(BOOL)arg11 removable:(BOOL)arg12 primary:(BOOL)arg13 allowedOperators:(id)arg14 userInfo:(id)arg15 possibleValues:(id)arg16 possibleValuesGetter:(/*^block*/id)arg17 caseInsensitive:(BOOL)arg18 negativeName:(id)arg19 singularItemName:(id)arg20 irrational:(BOOL)arg21 tense:(unsigned long long)arg22 timeUnits:(unsigned long long)arg23 comparableUnits:(unsigned long long)arg24 measurementUnitType:(id)arg25 displayName:(id)arg26 canLowercaseName:(BOOL)arg27 ;
-(NSString *)localizedNegativeName;
-(NSString *)localizedSingularItemName;
-(BOOL)hasPossibleValues;
-(void)getPossibleValues:(/*^block*/id)arg1 ;
-(BOOL)isLabeledValue;
-(void)getValueForObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getValuesForObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateWithValue:(id)arg1 withTransaction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isEquivalentToProperty:(id)arg1 ;
-(unsigned long long)equivalentHash;
-(id)setterBlock;
-(NSString *)singularItemName;
-(BOOL)canLowercaseName;
-(BOOL)multipleValues;
-(BOOL)isFilterable;
-(BOOL)isSortable;
-(BOOL)isGettable;
-(BOOL)isAppendable;
-(NSArray *)allowedOperators;
-(NSString *)negativeName;
-(BOOL)isIrrational;
-(unsigned long long)timeUnits;
-(unsigned long long)comparableUnits;
-(NSString *)measurementUnitType;
-(id)possibleValuesGetter;
-(void)setPossibleValuesGetter:(id)arg1 ;
@end

