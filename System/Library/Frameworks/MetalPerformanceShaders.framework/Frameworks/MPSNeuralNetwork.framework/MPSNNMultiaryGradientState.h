/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@protocol MPSNNPadding;
@interface MPSNNMultiaryGradientState : MPSState {

	unsigned long long _srcCount;
	NNKernelSourceParams* _srcInfo;
	MPSImageCoordinate* _srcSizes;
	SCD_Struct_MP4 _clipRect;
	MPSImageCoordinate _destSize;
	unsigned long long _destFeatureChannels;
	unsigned long long _destinationFeatureChannelOffset;
	id<MPSNNPadding> _padding;
	unsigned long long _maxBatchSize;
	BOOL _isBackwards;
	BOOL _initOnce;
	unsigned _provenance;

}
-(void)dealloc;
-(id)initWithSourceCount:(unsigned long long)arg1 ;
@end

