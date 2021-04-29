/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableString;

@interface CPMLSchema : NSObject {

	NSMutableArray* schema;
	NSMutableString* schemaHeader;
	NSMutableString* schemaHeaderWithType;
	NSMutableArray* attribute;
	NSMutableArray* schemaHDef;
	NSMutableArray* nsRemapTable;
	NSMutableArray* _categoricalDataList;
	NSMutableArray* _replaceMissingValue;
	NSMutableArray* _matchReplaceValue;
	int yColumnPosition;
	NSMutableArray* availableOptions;
	NSMutableArray* _indexColumnList;

}

@property (nonatomic,readonly) NSMutableArray * attribute; 
@property (nonatomic,readonly) NSMutableArray * indexColumnList;                    //@synthesize indexColumnList=_indexColumnList - In the implementation block
@property (nonatomic,readonly) NSMutableString * schemaHeader; 
@property (nonatomic,readonly) NSMutableString * schemaHeaderWithType; 
@property (nonatomic,readonly) NSMutableArray * nsRemapTable; 
@property (nonatomic,readonly) NSMutableArray * availableOptions; 
-(NSMutableArray *)attribute;
-(id)init:(id)arg1 ;
-(id)initWithPlist:(id)arg1 ;
-(NSMutableArray *)availableOptions;
-(unsigned long long)getTotalAttributes;
-(id)getUserDefinedCategoricalData:(unsigned long long)arg1 ;
-(int)getYColumnPosition;
-(int)getSchemaType:(unsigned long long)arg1 ;
-(id)getColumnName:(unsigned long long)arg1 ;
-(int)getVectorContent:(unsigned long long)arg1 ;
-(NSMutableString *)schemaHeaderWithType;
-(NSMutableArray *)indexColumnList;
-(BOOL)matchSubstituteValue:(unsigned long long)arg1 theValue:(id)arg2 ;
-(id)getSubstituteValue:(unsigned long long)arg1 ;
-(BOOL)isStringType:(unsigned long long)arg1 ;
-(BOOL)isVectorType:(unsigned long long)arg1 ;
-(int)getColumnPosition:(id)arg1 ;
-(BOOL)isRealType:(unsigned long long)arg1 ;
-(BOOL)isIntType:(unsigned long long)arg1 ;
-(NSMutableArray *)nsRemapTable;
-(unsigned long long)getUserDefinedCategoricalDataCount:(unsigned long long)arg1 ;
-(BOOL)isColumnContinous:(unsigned)arg1 ;
-(BOOL)isNumType:(unsigned long long)arg1 ;
-(BOOL)hasOptions:(unsigned long long)arg1 ;
-(NSMutableString *)schemaHeader;
@end

