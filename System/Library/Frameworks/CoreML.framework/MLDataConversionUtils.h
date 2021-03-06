/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MLDataConversionUtils : NSObject
+(id)stridesForShape:(id)arg1 ;
+(BOOL)populateEspressoShapeAndStridesFromInputShape:(id)arg1 ndRepresentation:(BOOL)arg2 espressoShape:(id*)arg3 espressoStrides:(id*)arg4 error:(id*)arg5 ;
+(BOOL)populateShapeAndStrideFor:(id)arg1 inputShape:(id)arg2 outputShape:(id*)arg3 outputStrides:(id*)arg4 error:(id*)arg5 ;
+(id)espressoDataProviderFromFeatureProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
+(id)espressoDataProviderFromBatchProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
+(id)featureProviderFromEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)batchProviderFromEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
@end

