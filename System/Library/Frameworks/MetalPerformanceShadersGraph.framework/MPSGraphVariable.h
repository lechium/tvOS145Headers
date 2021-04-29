/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSArray;

@interface MPSGraphVariable : NSObject <NSCopying> {

	NSData* _data;
	NSMutableArray* _mpsndarrays;
	Value _value;
	unsigned _dataType;
	NSArray* _shape;

}

@property (nonatomic,copy,readonly) NSArray * shape;              //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) Value value;                       //@synthesize value=_value - In the implementation block
+(id)newVariableWithData:(id)arg1 shape:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Value)value;
-(unsigned)dataType;
-(NSArray *)shape;
-(id)mpsNDArrayWithDevice:(id)arg1 ;
-(id)initVariableWithData:(id)arg1 value:(Value)arg2 ;
-(id)initVariableWithData:(id)arg1 shape:(id)arg2 ;
-(id)initVariableWithMPSNDArray:(id)arg1 value:(Value)arg2 ;
@end

