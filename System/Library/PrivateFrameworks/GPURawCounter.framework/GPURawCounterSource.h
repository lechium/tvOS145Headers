/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDictionary;


@protocol GPURawCounterSource <NSObject>
@property (readonly) NSString * name; 
@property (readonly) id<GPURawCounterSourceGroup> sourceGroup; 
@property (copy) NSDictionary * options; 
@required
-(NSString *)name;
-(BOOL)setEnabled:(BOOL)arg1;
-(NSDictionary *)options;
-(void)setOptions:(id)arg1;
-(BOOL)isEnabled;
-(id)availableCounters;
-(BOOL)postProcessRawDataWithRingBufferSource:(char*)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 sourceWrite:(unsigned long long)arg4 output:(char*)arg5 outputSize:(unsigned long long)arg6 outputRead:(unsigned long long)arg7 outputWrite:(unsigned long long*)arg8 isLast:(BOOL)arg9;
-(id)availableTriggers;
-(id)selectedTriggers;
-(BOOL)requestTriggers:(id)arg1 firstErrorIndex:(unsigned long long*)arg2;
-(id)selectedCounters;
-(BOOL)requestCounters:(id)arg1 firstErrorIndex:(unsigned long long*)arg2;
-(unsigned)ringBufferNum;
-(BOOL)ringBufferInfoAtIndex:(unsigned)arg1 base:(char**)arg2 size:(unsigned*)arg3 dataOffset:(unsigned*)arg4 dataSize:(unsigned*)arg5;
-(unsigned)drainRingBufferAtIndex:(unsigned)arg1 dataSize:(unsigned)arg2;
-(void)resetRawDataPostProcessor;
-(BOOL)postProcessRawDataWithSource:(char*)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 output:(char*)arg4 outputSize:(unsigned long long)arg5 outputWritten:(unsigned long long*)arg6 isLast:(BOOL)arg7;
-(BOOL)postProcessRawDataWithRingBufferIndex:(unsigned)arg1 source:(char*)arg2 sourceSize:(unsigned long long)arg3 sourceRead:(unsigned long long*)arg4 sourceWrite:(unsigned long long)arg5 output:(char*)arg6 outputSize:(unsigned long long)arg7 outputRead:(unsigned long long)arg8 outputWrite:(unsigned long long*)arg9 isLast:(BOOL)arg10;
-(BOOL)pollCountersAtBufferIndex:(unsigned)arg1 withBlock:(/*^block*/id)arg2;
-(id<GPURawCounterSourceGroup>)sourceGroup;

@end

