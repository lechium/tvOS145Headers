/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPSCNNConvolutionDataSource <NSCopying,NSObject>
@optional
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(id*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(unsigned)weightsQuantizationType;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3;
-(BOOL)updateWithGradientState:(id)arg1 sourceState:(id)arg2;
-(unsigned)weightsLayout;
-(unsigned)kernelWeightsDataType;

@required
-(BOOL)load;
-(id)label;
-(id)descriptor;
-(unsigned)dataType;
-(void)purge;
-(void*)weights;
-(float*)biasTerms;

@end

