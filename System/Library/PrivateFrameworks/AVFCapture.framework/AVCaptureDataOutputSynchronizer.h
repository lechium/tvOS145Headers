/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <AVFCapture/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <AVFCapture/AVCaptureMetadataOutputObjectsDelegate.h>
#import <AVFCapture/AVCaptureDepthDataOutputDelegate.h>
#import <AVFCapture/AVCaptureVisionDataOutputDelegate.h>
#import <AVFCapture/AVCapturePointCloudDataOutputDelegate.h>
#import <AVFCapture/AVCaptureCameraCalibrationDataOutputDelegate.h>

@class AVCaptureDataOutputSynchronizerInternal, NSArray, NSString;

@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureVisionDataOutputDelegate, AVCapturePointCloudDataOutputDelegate, AVCaptureCameraCalibrationDataOutputDelegate> {

	AVCaptureDataOutputSynchronizerInternal* _internal;

}

@property (retain,readonly) NSArray * dataOutputs; 
@property (nonatomic,readonly) id<AVCaptureDataOutputSynchronizerDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id<AVCaptureDataOutputSynchronizerDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithDataOutputs:(id)arg1 ;
-(NSArray *)dataOutputs;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4 ;
-(void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4 reason:(long long)arg5 ;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(void)visionDataOutput:(id)arg1 didOutputVisionDataPixelBuffer:(CVBufferRef)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4 ;
-(void)visionDataOutput:(id)arg1 didDropVisionDataPixelBufferForTimestamp:(SCD_Struct_AV0)arg2 connection:(id)arg3 reason:(long long)arg4 ;
-(void)cameraCalibrationDataOutput:(id)arg1 didOutputCameraCalibrationData:(id)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4 ;
-(void)cameraCalibrationDataOutput:(id)arg1 didDropCameraCalibrationDataAtTimestamp:(SCD_Struct_AV0)arg2 connection:(id)arg3 reason:(long long)arg4 ;
-(void)pointCloudDataOutput:(id)arg1 didOutputPointCloudData:(id)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4 ;
-(void)pointCloudDataOutput:(id)arg1 didDropPointCloudData:(id)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4 reason:(long long)arg5 ;
-(int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg1 ;
-(void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
-(void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
-(void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg1 ;
-(void)_appendSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2 ;
-(void)_dispatchRipenedSynchronizedData;
-(void)_adjustSynchronizedDataTimestamps;
-(SCD_Struct_AV0)_earliestSlaveSynchronizedDataQueueTimestamp;
-(void)_dispatchSynchronizedDataWithTimestamp:(SCD_Struct_AV0)arg1 ;
-(BOOL)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(SCD_Struct_AV0)arg1 ;
@end

