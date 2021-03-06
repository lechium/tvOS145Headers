/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPSGraphOperation, NSArray, NSString;

@interface MPSGraphTensor : NSObject <NSCopying> {

	Value _value;
	MPSGraphOperation* _operation;
	unsigned _dataType;
	unsigned long long _index;
	NSArray* _shape;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) Value value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSArray * shape;                              //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,__weak,readonly) MPSGraphOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(Value)value;
-(unsigned long long)index;
-(MPSGraphOperation *)operation;
-(unsigned)dataType;
-(NSArray *)shape;
-(id)initTensorWithOperation:(id)arg1 value:(Value)arg2 name:(id)arg3 ;
-(id)initTensorWithValue:(Value)arg1 ;
-(id)initTensorWithOperation:(id)arg1 value:(Value)arg2 ;
@end

