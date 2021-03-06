/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MLComputeEngineControl <NSObject>
@optional
-(BOOL)isEqual:(id)arg1;
-(BOOL)needToAllocateDeviceMemoryForTensor:(id)arg1 batchSize:(unsigned long long)arg2;
-(void)allocateDeviceMemoryForTensor:(id)arg1 batchSize:(unsigned long long)arg2;
-(void)selectDevicesWithBatchSize:(unsigned long long)arg1 calledfromBindAndWrite:(BOOL)arg2;
-(void)allocateDeviceHeapForGraph:(id)arg1 forInference:(BOOL)arg2;
-(void)selectDevicesWithBatchSize:(unsigned long long)arg1;
-(BOOL)postProcessCompiledGraph:(id)arg1 compilerOptions:(unsigned long long)arg2;
-(BOOL)synchronizeTensorOnHost:(id)arg1;

@required
-(unsigned long long)deviceMemorySizeForTensor:(id)arg1;
-(unsigned long long)numDevices;
-(void)signalNextEvent;
-(void)waitForOthers;
-(void)readTensor:(id)arg1 targetBuffer:(void*)arg2;
-(void)commitAndWaitForCompletion:(/*^block*/id)arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4;
-(id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;
-(void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4;
-(void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 reduceOverBatch:(BOOL)arg5;
-(void)broadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2;
-(void)dispatchBroadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2;
-(void)waitForAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
-(BOOL)needToAllocateDeviceMemoryForTensor:(id)arg1;
-(void)allocateDeviceMemoryForTensor:(id)arg1;
-(void)deallocateDeviceMemoryForTensor:(id)arg1;
-(BOOL)shareDeviceMemoryWithResultTensor:(id)arg1 sourceTensor:(id)arg2;
-(id)readTensor:(id)arg1;
-(id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2;
-(void)dispatchReadTensor:(id)arg1 targetBuffer:(void*)arg2 batchSize:(unsigned long long)arg3;
-(void)broadcastTensor:(id)arg1;
-(void)dispatchBroadcastTensor:(id)arg1;
-(BOOL)synchronizeTensor:(id)arg1;
-(void)commitWithProfiling:(BOOL)arg1 graphExecutionTime:(id)arg2;
-(void)commitAndWaitForCompletion:(/*^block*/id)arg1;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4;
-(void)signalAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
-(BOOL)transferTensor:(id)arg1 fromDevice:(id)arg2;
-(void)setDeviceMemoryForTensor:(id)arg1 data:(id)arg2;

@end

