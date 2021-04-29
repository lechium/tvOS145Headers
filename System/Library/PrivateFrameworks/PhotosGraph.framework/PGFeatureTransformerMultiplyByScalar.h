/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGFeatureSliceTransformer.h>

@interface PGFeatureTransformerMultiplyByScalar : PGFeatureSliceTransformer {

	float _scalarToMultiply;

}

@property (nonatomic,readonly) float scalarToMultiply;              //@synthesize scalarToMultiply=_scalarToMultiply - In the implementation block
+(id)name;
+(id)instanceWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2 ;
-(id)initWithScalarToMultiply:(float)arg1 ;
-(id)initWithScalarToMultiply:(float)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(float)scalarToMultiply;
@end

