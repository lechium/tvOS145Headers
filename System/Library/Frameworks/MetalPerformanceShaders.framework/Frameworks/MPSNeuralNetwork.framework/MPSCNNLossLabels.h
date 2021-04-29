/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@class NSData, MPSImage;

@interface MPSCNNLossLabels : MPSState {

	MPSImageCoordinate _lossImageSize;
	BOOL _isScalarLoss;
	NSData* _userData;
	unsigned long long _userDataLayout;
	unsigned long long _numFeatureChannels_labels;
	unsigned long long _numFeatureChannels_loss;
	MPSImage* _userLabelsImage;
	MPSImage* _userWeightsImage;
	BOOL _hasStateWeights;
	BOOL _computeNonZeroWeights;

}
-(id)init;
-(void)dealloc;
-(id)lossImage;
-(id)initWithDevice:(id)arg1 lossImageSize:(MPSImageCoordinate)arg2 labelsDescriptor:(id)arg3 weightsDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 labelsDescriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 lossImageSize:(MPSImageCoordinate)arg2 labelsImage:(id)arg3 weightsImage:(id)arg4 ;
-(id)labelsImage;
-(id)weightsImage;
@end

