/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoAnalyzer.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMIVideoCommandBufferDelegate.h>
#import <libobjc.A.dylib/HMIVideoDecoderDelegate.h>
#import <libobjc.A.dylib/HMIVideoEncoderDelegate.h>
#import <libobjc.A.dylib/HMIVideoFrameSelectorDelegate.h>
#import <libobjc.A.dylib/HMIVideoFrameAnalyzerDelegate.h>
#import <libobjc.A.dylib/HMIVideoAssetWriterDelegate.h>
#import <libobjc.A.dylib/HMIVideoFrameSamplerDelegate.h>
#import <libobjc.A.dylib/HMIVideoPackageAnalyzerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMIVideoCommandBuffer, HMIVideoDecoder, HMIVideoFrameSampler, HMIVideoEncoder, HMIVideoFrameSelector, HMIVideoFrameAnalyzer, HMIVideoAssetWriter, HMIVideoEventBuffer, NSData, HMIVideoPackageAnalyzer, HMIVideoAnalyzerScheduler, HMIVideoTimeline, NSDate, NSString;

@interface HMIVideoAnalyzerServer : HMIVideoAnalyzer <HMFLogging, HMIVideoCommandBufferDelegate, HMIVideoDecoderDelegate, HMIVideoEncoderDelegate, HMIVideoFrameSelectorDelegate, HMIVideoFrameAnalyzerDelegate, HMIVideoAssetWriterDelegate, HMIVideoFrameSamplerDelegate, HMIVideoPackageAnalyzerDelegate> {

	BOOL _failed;
	BOOL _cancelled;
	long long _numDecodedSamples;
	long long _numDidAnalyzeFrames;
	long long _numDidAnalyzeFragments;
	BOOL _monitored;
	BOOL _encode;
	double _analysisFPS;
	NSObject*<OS_dispatch_queue> _workQueue;
	const opaqueCMFormatDescriptionRef _inputVideoFormat;
	const opaqueCMFormatDescriptionRef _inputAudioFormat;
	const opaqueCMFormatDescriptionRef _outputVideoFormat;
	HMIVideoCommandBuffer* _commandBuffer;
	HMIVideoDecoder* _decoder;
	HMIVideoFrameSampler* _frameThumbnailSampler;
	HMIVideoEncoder* _encoder;
	HMIVideoFrameSelector* _frameSelector;
	HMIVideoFrameAnalyzer* _frameAnalyzer;
	HMIVideoAssetWriter* _assetWriter;
	HMIVideoEventBuffer* _frameAnalyzerResultBuffer;
	HMIVideoEventBuffer* _thumbnailBuffer;
	NSData* _initializationSegment;
	HMIVideoEventBuffer* _dynamicConfigurationBuffer;
	HMIVideoPackageAnalyzer* _packageAnalyzer;
	HMIVideoAnalyzerScheduler* _scheduler;
	HMIVideoTimeline* _timeline;
	NSDate* _startDate;
	SCD_Struct_HM3 _currentPTS;
	SCD_Struct_HM3 _currentDTS;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) const opaqueCMFormatDescriptionRef inputVideoFormat;               //@synthesize inputVideoFormat=_inputVideoFormat - In the implementation block
@property (assign) const opaqueCMFormatDescriptionRef inputAudioFormat;               //@synthesize inputAudioFormat=_inputAudioFormat - In the implementation block
@property (assign) const opaqueCMFormatDescriptionRef outputVideoFormat;              //@synthesize outputVideoFormat=_outputVideoFormat - In the implementation block
@property (readonly) HMIVideoCommandBuffer * commandBuffer;                           //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (readonly) HMIVideoDecoder * decoder;                                       //@synthesize decoder=_decoder - In the implementation block
@property (readonly) HMIVideoFrameSampler * frameThumbnailSampler;                    //@synthesize frameThumbnailSampler=_frameThumbnailSampler - In the implementation block
@property (retain) HMIVideoEncoder * encoder;                                         //@synthesize encoder=_encoder - In the implementation block
@property (readonly) HMIVideoFrameSelector * frameSelector;                           //@synthesize frameSelector=_frameSelector - In the implementation block
@property (readonly) HMIVideoFrameAnalyzer * frameAnalyzer;                           //@synthesize frameAnalyzer=_frameAnalyzer - In the implementation block
@property (retain) HMIVideoAssetWriter * assetWriter;                                 //@synthesize assetWriter=_assetWriter - In the implementation block
@property (assign) SCD_Struct_HM3 currentPTS;                                         //@synthesize currentPTS=_currentPTS - In the implementation block
@property (assign) SCD_Struct_HM3 currentDTS;                                         //@synthesize currentDTS=_currentDTS - In the implementation block
@property (readonly) HMIVideoEventBuffer * frameAnalyzerResultBuffer;                 //@synthesize frameAnalyzerResultBuffer=_frameAnalyzerResultBuffer - In the implementation block
@property (readonly) HMIVideoEventBuffer * thumbnailBuffer;                           //@synthesize thumbnailBuffer=_thumbnailBuffer - In the implementation block
@property (retain) NSData * initializationSegment;                                    //@synthesize initializationSegment=_initializationSegment - In the implementation block
@property (readonly) HMIVideoEventBuffer * dynamicConfigurationBuffer;                //@synthesize dynamicConfigurationBuffer=_dynamicConfigurationBuffer - In the implementation block
@property (readonly) HMIVideoPackageAnalyzer * packageAnalyzer;                       //@synthesize packageAnalyzer=_packageAnalyzer - In the implementation block
@property (readonly) HMIVideoAnalyzerScheduler * scheduler;                           //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) HMIVideoTimeline * timeline;                                     //@synthesize timeline=_timeline - In the implementation block
@property (readonly) NSDate * startDate;                                              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)cancel;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(double)delay;
-(unsigned long long)status;
-(NSDate *)startDate;
-(void)finish;
-(HMIVideoCommandBuffer *)commandBuffer;
-(void)flush;
-(HMIVideoAnalyzerScheduler *)scheduler;
-(id)stateDescription;
-(HMIVideoDecoder *)decoder;
-(HMIVideoAssetWriter *)assetWriter;
-(void)setAssetWriter:(HMIVideoAssetWriter *)arg1 ;
-(BOOL)encode;
-(void)setEncoder:(HMIVideoEncoder *)arg1 ;
-(HMIVideoEncoder *)encoder;
-(void)_notifyDelegateDidFailWithError:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 identifier:(id)arg2 ;
-(HMIVideoTimeline *)timeline;
-(void)flushAsync;
-(double)analysisFPS;
-(void)setAnalysisFPS:(double)arg1 ;
-(void)encoder:(id)arg1 didEncodeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)encoder:(id)arg1 didFailWithError:(id)arg2 ;
-(void)frameSampler:(id)arg1 didSampleFrame:(opaqueCMSampleBufferRef)arg2 ;
-(HMIVideoFrameSelector *)frameSelector;
-(HMIVideoFrameAnalyzer *)frameAnalyzer;
-(void)frameAnalyzer:(id)arg1 didAnalyzeFrame:(id)arg2 error:(id)arg3 ;
-(NSData *)initializationSegment;
-(BOOL)monitored;
-(void)setMonitored:(BOOL)arg1 ;
-(void)buffer:(id)arg1 willHandleSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)bufferWillFlush:(id)arg1 ;
-(void)bufferWillFinish:(id)arg1 ;
-(void)decoder:(id)arg1 didDecodeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)decoder:(id)arg1 didFailWithError:(id)arg2 ;
-(void)assetWriter:(id)arg1 didOutputInitializationSegment:(id)arg2 ;
-(void)assetWriter:(id)arg1 didOutputSeparableSegment:(id)arg2 timeRange:(SCD_Struct_HM4)arg3 ;
-(void)assetWriter:(id)arg1 didFailWithError:(id)arg2 ;
-(void)frameSelector:(id)arg1 didSelectFrame:(opaqueCMSampleBufferRef)arg2 detections:(id)arg3 ;
-(void)handleAssetData:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleMessageWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEncode:(BOOL)arg1 ;
-(HMIVideoEventBuffer *)dynamicConfigurationBuffer;
-(void)_prepareForInputVideoFormat:(const opaqueCMFormatDescriptionRef)arg1 ;
-(void)_prepareForInputAudioFormat:(const opaqueCMFormatDescriptionRef)arg1 ;
-(void)_ensureEncoder;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_handleDecodedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(const opaqueCMFormatDescriptionRef)inputAudioFormat;
-(const opaqueCMFormatDescriptionRef)inputVideoFormat;
-(const opaqueCMFormatDescriptionRef)outputVideoFormat;
-(void)_configureAssetWriter;
-(void)_prepareForOutputVideoFormat:(const opaqueCMFormatDescriptionRef)arg1 ;
-(void)_configureEncoder;
-(id)dynamicConfigurationForTime:(SCD_Struct_HM3)arg1 ;
-(HMIVideoFrameSampler *)frameThumbnailSampler;
-(HMIVideoPackageAnalyzer *)packageAnalyzer;
-(HMIVideoEventBuffer *)frameAnalyzerResultBuffer;
-(void)_notifyDelegateDidAnalyzeFrame:(id)arg1 ;
-(HMIVideoEventBuffer *)thumbnailBuffer;
-(void)setInitializationSegment:(NSData *)arg1 ;
-(void)_notifyDelegateDidAnalyzeFragment:(id)arg1 ;
-(void)_produceResult:(SEL)arg1 withArguments:(id)arg2 ;
-(void)setInputVideoFormat:(const opaqueCMFormatDescriptionRef)arg1 ;
-(void)setInputAudioFormat:(const opaqueCMFormatDescriptionRef)arg1 ;
-(void)setOutputVideoFormat:(const opaqueCMFormatDescriptionRef)arg1 ;
-(SCD_Struct_HM3)currentPTS;
-(void)setCurrentPTS:(SCD_Struct_HM3)arg1 ;
-(SCD_Struct_HM3)currentDTS;
-(void)setCurrentDTS:(SCD_Struct_HM3)arg1 ;
@end

