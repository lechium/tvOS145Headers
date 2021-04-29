/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>
#import <AVFCapture/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureMetadataOutputInternal, NSArray, NSString;

@interface AVCaptureMetadataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureMetadataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureMetadataOutputObjectsDelegate> metadataObjectsDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> metadataObjectsCallbackQueue; 
@property (nonatomic,readonly) NSArray * availableMetadataObjectTypes; 
@property (nonatomic,copy) NSArray * metadataObjectTypes; 
@property (assign,nonatomic) CGRect rectOfInterest; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)new;
+(id)_metadataConstantValueToName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)availableMetadataObjectTypes;
-(void)setMetadataObjectTypes:(NSArray *)arg1 ;
-(void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(id)_metadataIdentifiers;
-(CGRect)rectOfInterest;
-(long long)faceTrackingMaxFaces;
-(void)setFaceTrackingMaxFaces:(long long)arg1 ;
-(BOOL)isFaceTrackingUsesFaceRecognition;
-(void)setFaceTrackingUsesFaceRecognition:(BOOL)arg1 ;
-(BOOL)isFaceTrackingPlusEnabled;
-(void)setFaceTrackingPlusEnabled:(BOOL)arg1 ;
-(NSArray *)metadataObjectTypes;
-(BOOL)isFaceTrackingSupported;
-(BOOL)isOfflineVideoStabilizationMotionMetadataSupported;
-(BOOL)isVideoPreviewHistogramMetadataSupported;
-(BOOL)isAppClipCodeMetadataSupported;
-(id<AVCaptureMetadataOutputObjectsDelegate>)metadataObjectsDelegate;
-(NSObject*<OS_dispatch_queue>)metadataObjectsCallbackQueue;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(BOOL)isFaceTrackingMetadataObjectTypesAvailable;
-(void)setFaceTrackingMetadataObjectTypesAvailable:(BOOL)arg1 ;
-(BOOL)isOfflineVideoStabilizationMotionMetadataObjectTypesAvailable;
-(void)setOfflineVideoStabilizationMotionMetadataObjectTypesAvailable:(BOOL)arg1 ;
-(BOOL)isVideoPreviewHistogramMetadataObjectTypesAvailable;
-(void)setVideoPreviewHistogramMetadataObjectTypesAvailable:(BOOL)arg1 ;
-(BOOL)isAppClipCodeMetadataObjectTypeAvailable;
-(void)setAppClipCodeMetadataObjectTypeAvailable:(BOOL)arg1 ;
@end

