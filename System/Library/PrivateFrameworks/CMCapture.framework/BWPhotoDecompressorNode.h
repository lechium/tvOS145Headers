/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWPhotoDecompressor, NSMutableArray, NSMutableSet;

@interface BWPhotoDecompressorNode : BWNode {

	BOOL _downstreamIsSharingOutputPool;
	BOOL _synchronizedSlaveAttachedMediaDecompressionEnabled;
	BWPhotoDecompressor* _photoDecompressor;
	BWPhotoDecompressor* _synchronizedSlavePhotoDecompressor;
	NSMutableArray* _emitSampleBufferSemaphores;
	NSMutableArray* _emitSynchronizedSlaveSampleBufferSemaphores;
	NSMutableSet* _disabledSynchronizedSlaveSemaphores;
	int _numberOfTimesWaited;
	int _numberOfBuffersEmitted;
	int _numberOfTimesSynchronizedSlaveWaited;
	int _numberOfSynchronizedSlaveBuffersEmitted;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)_releaseResources;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)_setOverCaptureSynchronizedSlaveSemaphoreEnabled:(BOOL)arg1 ;
-(void)_ensureSemaphoresAreBalanced;
-(id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(BOOL)arg1 ;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(BOOL)downstreamIsSharingOutputPool;
-(void)setDownstreamIsSharingOutputPool:(BOOL)arg1 ;
-(void)addEmitSampleBufferSemaphore:(id)arg1 ;
-(void)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)arg1 ;
@end

