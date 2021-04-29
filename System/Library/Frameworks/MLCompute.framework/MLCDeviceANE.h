/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCLayerOperations.h>
#import <MLCompute/MLCEngineDispatch.h>
#import <MLCompute/MLComputeEngineOptimizerUpdate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <MLCompute/MLComputeEngineControl.h>

@class NSArray, _ANEClient, NSString;

@interface MLCDeviceANE : NSObject <MLCLayerOperations, MLCEngineDispatch, MLComputeEngineOptimizerUpdate, NSCopying, MLComputeEngineControl> {

	int _deviceType;
	NSArray* _deviceList;
	_ANEClient* _clientConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _ANEClient * clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,readonly) NSArray * deviceList;                       //@synthesize deviceList=_deviceList - In the implementation block
@property (nonatomic,readonly) int deviceType;                             //@synthesize deviceType=_deviceType - In the implementation block
+(BOOL)hasANE;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)initWithType:(int)arg1 ;
-(int)deviceType;
-(_ANEClient *)clientConnection;
-(NSArray *)deviceList;
-(id)fusedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8 ;
-(id)batchNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
-(BOOL)compileLayerDeviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)setNormalizationLayerOptimizerDataForDeviceOps:(id)arg1 beta:(id)arg2 gamma:(id)arg3 ;
-(id)poolingLayerWithDescriptor:(id)arg1 paddingSizes:(unsigned long long*)arg2 ;
-(id)paddingLayerWithPaddingType:(int)arg1 paddingLeft:(unsigned long long)arg2 paddingRight:(unsigned long long)arg3 paddingTop:(unsigned long long)arg4 paddingBottom:(unsigned long long)arg5 constantValue:(float)arg6 ;
-(id)groupNormalizationLayerWithFeatureChannelCount:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 ;
-(id)lossLayerWithDescriptor:(id)arg1 ;
-(id)fusedFullyConnectedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(id)arg8 weights:(id)arg9 biasTerms:(id)arg10 ;
-(id)fusedFullyConnectedAndNeuronLayerWithDescriptor:(id)arg1 convolutionDescriptor:(id)arg2 weights:(id)arg3 biasTerms:(id)arg4 ;
-(id)fullyConnectedLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 ;
-(BOOL)setConvolutionLayerOptimizerDataForDeviceOps:(id)arg1 weights:(id)arg2 bias:(id)arg3 ;
-(id)createOptimizerDeviceDataForTensor:(id)arg1 optimizer:(id)arg2 optimizerData:(id)arg3 isVector:(BOOL)arg4 ;
-(void)resetLayer:(id)arg1 ;
-(BOOL)buildProcedureForFusedLayers:(id)arg1 graph:(id)arg2 liveInputs:(id)arg3 liveOutputs:(id)arg4 ;
-(BOOL)updateTensorsForFusedLayers:(id)arg1 ofInferenceGraph:(id)arg2 ;
-(id)convolutionLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 ;
-(id)convolutionTransposeLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 ;
-(id)neuronLayerWithDescriptor:(id)arg1 ;
-(id)layerNormalizationLayerWithNormalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 isFusedWithArithmeticLayer:(BOOL)arg5 ;
-(id)instanceNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
-(id)arithmeticLayerWithOperation:(int)arg1 activationDescriptor:(id)arg2 ;
-(id)compareLayerWithOperation:(int)arg1 ;
-(id)reductionLayerWithReduceType:(int)arg1 dimensions:(id)arg2 sourceShapeCount:(unsigned long long)arg3 ;
-(id)softmaxLayerWithOperation:(int)arg1 dimension:(unsigned long long)arg2 sourceShapeCount:(unsigned long long)arg3 ;
-(id)lossYOLOLayerWithDescriptor:(id)arg1 ;
-(id)dropoutLayerWithRate:(float)arg1 seed:(unsigned long long)arg2 ;
-(id)reshapeLayerWithShape:(id)arg1 ;
-(id)transposeLayerWithShape:(id)arg1 ;
-(id)imageReshapeWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 alignCorners:(BOOL)arg3 ;
-(id)lstmLayerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biasTerms:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7 ;
-(id)gramMatrixLayerWithScaleFactor:(float)arg1 ;
-(id)upsampleLayerWithScaleFactorX:(float)arg1 scaleFactorY:(float)arg2 sampleMode:(int)arg3 alignCorners:(BOOL)arg4 ;
-(id)concatLayerWithConcatDimension:(unsigned long long)arg1 sourceShapeCount:(unsigned long long)arg2 ;
-(id)matMulLayerWithDescriptor:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 inferenceOnly:(BOOL)arg4 ;
-(id)optimizerSGDWithDescriptor:(id)arg1 momentunScale:(float)arg2 useNesterovMomentum:(BOOL)arg3 ;
-(id)optimizerAdamWithDescriptor:(id)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5 ;
-(id)optimizerRMSPropWithDescriptor:(id)arg1 momentumScale:(float)arg2 alpha:(float)arg3 epsilon:(float)arg4 centered:(BOOL)arg5 ;
-(unsigned long long)allocatedDeviceDataSizeForTraining:(BOOL)arg1 layer:(id)arg2 ;
-(BOOL)setMHALayerOptimizerDataForDeviceOps:(id)arg1 optimizerDataForWeights:(id)arg2 optimizerDataForBias:(id)arg3 ;
-(BOOL)setLSTMLayerOptimizerDataForDeviceOps:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 biasTerms:(id)arg4 ;
-(id)partitionInferenceGraph:(id)arg1 startAtLayerIndex:(unsigned long long)arg2 aneDevice:(id)arg3 secondaryDevice:(id)arg4 ;
-(void)fuseLayersForTrainingGraph:(id)arg1 stopGradientTensorList:(id)arg2 ;
-(void)fuseLayersForInferenceGraph:(id)arg1 startAtLayerIndex:(unsigned long long)arg2 ;
-(id)fusedConvolutionAndNeuronLayerWithDescriptor:(id)arg1 convolutionDescriptor:(id)arg2 weights:(id)arg3 biasTerms:(id)arg4 ;
-(id)fusedConvolutionBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(id)arg8 weights:(id)arg9 biasTerms:(id)arg10 ;
-(id)multiheadAttentionLayerWithDescriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attnBias:(id)arg4 inferenceOnly:(BOOL)arg5 ;
-(id)sliceLayerWithbegin:(id)arg1 end:(id)arg2 stride:(id)arg3 inferenceOnly:(BOOL)arg4 ;
-(BOOL)compileOptimizerDeviceOps:(id)arg1 ;
-(unsigned long long)deviceMemorySizeForTensor:(id)arg1 ;
-(unsigned long long)numDevices;
-(void)signalNextEvent;
-(void)waitForOthers;
-(void)readTensor:(id)arg1 targetBuffer:(void*)arg2 ;
-(void)commitAndWaitForCompletion:(/*^block*/id)arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4 ;
-(id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 ;
-(void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 ;
-(void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 reduceOverBatch:(BOOL)arg5 ;
-(void)broadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)dispatchBroadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)waitForAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2 ;
-(BOOL)needToAllocateDeviceMemoryForTensor:(id)arg1 ;
-(void)allocateDeviceMemoryForTensor:(id)arg1 ;
-(void)deallocateDeviceMemoryForTensor:(id)arg1 ;
-(BOOL)shareDeviceMemoryWithResultTensor:(id)arg1 sourceTensor:(id)arg2 ;
-(id)readTensor:(id)arg1 ;
-(id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 ;
-(void)dispatchReadTensor:(id)arg1 targetBuffer:(void*)arg2 batchSize:(unsigned long long)arg3 ;
-(void)broadcastTensor:(id)arg1 ;
-(void)dispatchBroadcastTensor:(id)arg1 ;
-(BOOL)synchronizeTensor:(id)arg1 ;
-(void)commitWithProfiling:(BOOL)arg1 graphExecutionTime:(id)arg2 ;
-(void)commitAndWaitForCompletion:(/*^block*/id)arg1 ;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4 ;
-(void)signalAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2 ;
-(BOOL)transferTensor:(id)arg1 fromDevice:(id)arg2 ;
-(void)setDeviceMemoryForTensor:(id)arg1 data:(id)arg2 ;
-(BOOL)postProcessCompiledGraph:(id)arg1 compilerOptions:(unsigned long long)arg2 ;
-(unsigned long long)deviceMemorySizeForTensor:(id)arg1 deviceIndex:(unsigned long long)arg2 ;
-(void)allocateDeviceMemoryForTensor:(id)arg1 modelAttributes:(id)arg2 procedureIndex:(unsigned long long)arg3 isInput:(BOOL)arg4 ;
-(id)allocateIOSurfaceForTensor:(id)arg1 modelAttributes:(id)arg2 procedureIndex:(unsigned long long)arg3 isInput:(BOOL)arg4 ;
-(void)writeToAllDevices:(id)arg1 allocateData:(BOOL)arg2 batchSize:(unsigned long long)arg3 ;
-(void)writeToDevice:(id)arg1 toDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 ;
-(BOOL)writeScalesAndBiasesOfGocUnit:(id)arg1 tensorWithBiases:(id)arg2 tensorWithScales:(id)arg3 weightFileHandle:(id)arg4 ;
-(BOOL)writeWeightsOfConvolutionLayer:(id)arg1 weightFileHandles:(id)arg2 ;
-(BOOL)writeWeightsOfNormalizationLayer:(id)arg1 weightFileHandle:(id)arg2 ;
-(BOOL)writeWeightsOfLayerNormalizationLayer:(id)arg1 weightFileHandle:(id)arg2 network:(id)arg3 ;
-(BOOL)writeWeightsOfLayer:(id)arg1 weightFileHandles:(id)arg2 network:(id)arg3 ;
-(BOOL)procedureInformationWithModelAttributes:(id)arg1 procedureName:(id)arg2 procedureID:(unsigned long long*)arg3 procedureInputSymbols:(id*)arg4 procedureInputSymbolIndices:(id*)arg5 procedureOutputSymbols:(id*)arg6 procedureOutputSymbolIndices:(id*)arg7 ;
-(BOOL)buildProcedureWithLayer:(id)arg1 weightFileHandles:(id)arg2 toPlist:(id)arg3 ;
-(BOOL)buildProcedureWithFusedLayer:(id)arg1 weightFileHandles:(id)arg2 toPlist:(id)arg3 ;
-(BOOL)allocateDeviceMemoryForSourceAndResultTensorsOfLayer:(id)arg1 model:(id)arg2 tensorLabelToIOSurfaceMap:(id*)arg3 ;
-(id)ANERequestWithModelAttributes:(id)arg1 procedureName:(id)arg2 tensorLabelToIOSurfaceMap:(id)arg3 ;
-(unsigned long long)numberOfDevices;
-(BOOL)addInputs:(id)arg1 toNetwork:(id)arg2 ;
-(BOOL)addOutputs:(id)arg1 toNetwork:(id)arg2 ;
-(void)dispatchForwardReshapeLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(BOOL)isDeviceMemorySharableBetweenSourceAndGradientTensor:(id)arg1 sourceTensor:(id)arg2 ;
-(void)dispatchForwardCompareLayer:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 compareOp:(int)arg5 resultTensorIsTemporary:(BOOL)arg6 resultTensorAllocate:(BOOL)arg7 forTraining:(BOOL)arg8 ;
-(void)dispatchForwardSplitLayer:(id)arg1 sourceTensor:(id)arg2 resultTensors:(id)arg3 ;
-(void)dispatchGradientSplitLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensor:(id)arg3 ;
-(void)dispatchForwardConcatLayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(void)dispatchGradientConcatLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 ;
-(void)dispatchForwardReduceLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 reductionType:(int)arg4 reduceDimensions:(id)arg5 resultTensorIsTemporary:(BOOL)arg6 resultTensorAllocate:(BOOL)arg7 forTraining:(BOOL)arg8 ;
-(void)dispatchGradientReduceLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 reductionType:(int)arg4 reduceDimensions:(id)arg5 resultTensorIsTemporary:(BOOL)arg6 resultTensorAllocate:(BOOL)arg7 ;
-(void)dispatchForwardSelectLayer:(id)arg1 conditionTensor:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchGradientSelectLayer:(id)arg1 conditionTensor:(id)arg2 sourceGradientTensor:(id)arg3 resultGradientTensors:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchForwardEmbeddingLayer:(id)arg1 weight:(id)arg2 sourceTensor:(id)arg3 resultTensor:(id)arg4 ;
-(void)dispatchGradientEmbeddingLayer:(id)arg1 sourceGradientTensor:(id)arg2 ;
-(void)dispatchForwardSliceLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorAllocate:(BOOL)arg4 forTraining:(BOOL)arg5 ;
-(void)dispatchForwardFullyConnectedLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 forTraining:(BOOL)arg6 ;
-(void)dispatchGradientFullyConnectedLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 tertiaryTensor:(id)arg4 resultTensor:(id)arg5 resultTensorIsTemporary:(BOOL)arg6 resultStateIsTemporary:(BOOL)arg7 resultTensorAllocate:(BOOL)arg8 forTraining:(BOOL)arg9 ;
-(void)dispatchForwardFusedArithmeticLayerNormalizationLayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 forTraining:(BOOL)arg6 ;
-(void)dispatchForwardMatMulLayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchGradientMatMulLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchForwardMHALayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchGradientMHALayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchForwardLossLayer:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultStateIsTemporary:(BOOL)arg8 resultTensorAllocate:(BOOL)arg9 forTraining:(BOOL)arg10 ;
-(void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 secondaryResultGradientTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchGradientReshapeLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchGradientSliceLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorAllocate:(BOOL)arg4 ;
-(void)dispatchGradientLossLayer:(id)arg1 sourceGradientTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultGradientTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultTensorAllocate:(BOOL)arg8 ;
-(void)dispatchForwardAndGradientLossLayer:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultGradientTensor:(id)arg7 resultTensorIsTemporary:(BOOL)arg8 resultTensorAllocate:(BOOL)arg9 ;
-(BOOL)shareSourceAndResultGradientTensorDeviceMemory:(id)arg1 sourceTensor:(id)arg2 resultGradientTensor:(id)arg3 ;
-(void)dispatchRNNForwardLayer:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchRNNForwardLayer:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchRNNGradientLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)incrementReadCountForTensorDeviceMemory:(id)arg1 increment:(long long)arg2 ;
-(void)incrementReadCountForGradientState:(id)arg1 increment:(long long)arg2 ;
-(void)dispatchForwardLayer:(id)arg1 ;
-(void)sumSharedGradientsForNormalizationLayerTensorParameter:(id)arg1 layerIndexForSummedGradients:(unsigned long long)arg2 isBetaTensor:(BOOL)arg3 ;
-(void)setOptimizerLearningRate:(id)arg1 learningRate:(float)arg2 ;
-(void)setOptimizerTimeStep:(id)arg1 timeStep:(unsigned long long)arg2 ;
-(void)sumSharedGradientsForConvolutionLayerTensorParameter:(id)arg1 layerIndexForSummedGradients:(unsigned long long)arg2 ;
-(void)updateConvolutionLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4 ;
-(void)updateFullyConnectedLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4 ;
-(void)updateBatchNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 meanTensor:(id)arg5 varianceTensor:(id)arg6 ;
-(void)updateInstanceNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 ;
-(void)updateLayerNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 ;
-(void)updateGroupNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 ;
-(void)updateRNNLayer:(id)arg1 optimizer:(id)arg2 inputWeightsParameter:(id)arg3 hiddenWeightsParameter:(id)arg4 biasesParameter:(id)arg5 ;
-(void)updateMultiheadAttentionLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4 ;
-(void)updateEmbeddingLayer:(id)arg1 weightsParameter:(id)arg2 optimizer:(id)arg3 ;
-(void)updateTensorParameter:(id)arg1 optimizer:(id)arg2 gradient:(id)arg3 ;
-(void)synchronizeUpdatesForLayer:(id)arg1 ;
-(void)synchronizeOptimizerUpdatesForTensor:(id)arg1 ;
-(void)convertUpdatesToTensorDataForLayer:(id)arg1 ;
-(void)convertUpdatesToTensorDataForTensorParameters:(id)arg1 ;
-(void)reloadParameterDataFromHostToDeviceMemoryForTensor:(id)arg1 ;
@end

