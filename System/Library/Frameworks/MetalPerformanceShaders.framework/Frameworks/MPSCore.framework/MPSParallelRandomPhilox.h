/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSParallelRandom.h>

@protocol MTLBuffer;
@interface MPSParallelRandomPhilox : MPSParallelRandom {

	id<MTLBuffer> _counters;
	float _bernoulliParameter;
	float _uniformMin;
	float _uniformMax;
	float _normalMean;
	float _normalStandardDeviation;
	unsigned long long _seed;

}
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(unsigned long long)arg3 numEntries:(unsigned long long)arg4 stride:(unsigned)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(unsigned long long)arg3 numEntries:(unsigned long long)arg4 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 distributionDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 ;
@end
