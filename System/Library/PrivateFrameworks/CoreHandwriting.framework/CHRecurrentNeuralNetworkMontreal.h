/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHRecurrentNeuralNetwork.h>

@class NSArray, NSDictionary;

@interface CHRecurrentNeuralNetworkMontreal : CHRecurrentNeuralNetwork {

	NSArray* _inputNames;
	NSDictionary* _featureCounts;
	NSArray* _outputNames;
	NSDictionary* _classCounts;
	MontrealNeuralNetworkRef __model;

}

@property (nonatomic,readonly) MontrealNeuralNetworkRef _model;                  //@synthesize _model=__model - In the implementation block
@property (nonatomic,retain,readonly) NSArray * inputNames;                      //@synthesize inputNames=_inputNames - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * featureCounts;              //@synthesize featureCounts=_featureCounts - In the implementation block
@property (nonatomic,retain,readonly) NSArray * outputNames;                     //@synthesize outputNames=_outputNames - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * classCounts;                //@synthesize classCounts=_classCounts - In the implementation block
-(void)dealloc;
-(MontrealNeuralNetworkRef)_model;
-(NSDictionary *)featureCounts;
-(vector<float, std::__1::allocator<float>>*)_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id*)arg4 ;
-(id)initWithModelName:(id)arg1 ;
-(BOOL)_recursivelyPredictProbabilitiesForDrawing:(id)arg1 features:(vector<float, std::__1::allocator<float>>*)arg2 pointRange:(NSRange)arg3 modelInputName:(id)arg4 modelOutputNames:(id)arg5 probabilities:(vector<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double>>>, std::__1::allocator<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double>>>>>*)arg6 probabilityPredictionBlock:(/*^block*/id)arg7 error:(id*)arg8 cancellationBlock:(/*^block*/id)arg9 ;
-(NSArray *)inputNames;
-(NSArray *)outputNames;
-(NSDictionary *)classCounts;
@end

