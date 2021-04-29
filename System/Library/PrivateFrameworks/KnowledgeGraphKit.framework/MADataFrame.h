/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, MAIndexCache, MAFloatMatrix, NSArray;

@interface MADataFrame : NSObject {

	NSString* _name;
	MAIndexCache* _rowIndexCache;
	MAIndexCache* _columnIndexCache;
	MAFloatMatrix* _matrix;

}

@property (nonatomic,readonly) MAIndexCache * rowIndexCache;                 //@synthesize rowIndexCache=_rowIndexCache - In the implementation block
@property (nonatomic,readonly) MAIndexCache * columnIndexCache;              //@synthesize columnIndexCache=_columnIndexCache - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rowLabels; 
@property (nonatomic,copy,readonly) NSArray * columnLabels; 
@property (nonatomic,copy,readonly) MAFloatMatrix * matrix;                  //@synthesize matrix=_matrix - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(MAFloatMatrix *)matrix;
-(id)initWithName:(id)arg1 rowIndexCache:(id)arg2 columnIndexCache:(id)arg3 matrix:(id)arg4 ;
-(id)initWithName:(id)arg1 rowLabels:(id)arg2 columnLabels:(id)arg3 matrix:(id)arg4 ;
-(NSArray *)rowLabels;
-(NSArray *)columnLabels;
-(long long)indexOfRowWithLabel:(id)arg1 ;
-(long long)indexOfColumnWithLabel:(id)arg1 ;
-(float)floatAtRowIndex:(long long)arg1 columnIndex:(long long)arg2 ;
-(id)numberAtRow:(id)arg1 column:(id)arg2 ;
-(id)csvString;
-(MAIndexCache *)rowIndexCache;
-(MAIndexCache *)columnIndexCache;
@end
