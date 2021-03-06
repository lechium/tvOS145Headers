/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSMutableDictionary, NSMutableArray, NSSet;

@interface AVOfflineVideoStabilizer : NSObject {

	SCD_Struct_AV0 _targetFrameDuration;
	int _metadataPrimingCount;
	float _lookAheadTime;
	AVWeakReference* _dataProviderWeakReference;
	CVPixelBufferPoolRef _pixelBufferPool;
	BOOL _clientMarkedEndOfVideoData;
	long long _videoOutputFrameNumber;
	opaqueCMFormatDescriptionRef _cachedVideoFormatDescription;
	NSMutableDictionary* _cachedInputBufferAttributes;
	NSMutableArray* _outputSampleBuffers;
	BOOL _clientMarkedEndOfMetadata;
	long long _metadataOutputFrameNumber;
	NSMutableArray* _futureFrameMetadataDicts;
	NSSet* _requiredMetadataKeys;
	NSSet* _optionalMetadataKeys;
	OpaqueFigSampleBufferProcessorRef _gvsProcessor;
	BOOL _stabilizationEnabled;
	BOOL _isFirstFrame;

}

@property (nonatomic,readonly) NSMutableArray * outputSampleBuffers;                              //@synthesize outputSampleBuffers=_outputSampleBuffers - In the implementation block
@property (nonatomic,readonly) int preferredSourcePixelBufferPrimingFrameCount; 
@property (nonatomic,readonly) int preferredSourceStabilizationMetadataPrimingCount; 
+(void)initialize;
+(id)offlineVideoStabilizerWithTargetFrameDuration:(SCD_Struct_AV0)arg1 dataProvider:(id)arg2 destinationBufferPool:(CVPixelBufferPoolRef)arg3 stabilizationEnabled:(BOOL)arg4 ;
-(void)dealloc;
-(id)initWithTargetFrameDuration:(SCD_Struct_AV0)arg1 dataProvider:(id)arg2 destinationBufferPool:(CVPixelBufferPoolRef)arg3 stabilizationEnabled:(BOOL)arg4 ;
-(void)_teardownVISProcessor;
-(opaqueCMSampleBufferRef)_copyStabilizedSampleBuffer:(id*)arg1 ;
-(int)_validateStabilizationMetadata:(id)arg1 withSampleTime:(SCD_Struct_AV0)arg2 isEndOfData:(BOOL*)arg3 ;
-(int)_validateSourcePixelBuffer:(CVBufferRef)arg1 withSampleTime:(SCD_Struct_AV0)arg2 metadata:(id)arg3 isEndOfData:(BOOL*)arg4 ;
-(opaqueCMSampleBufferRef)_createSampleBufferWithPixelBuffer:(CVBufferRef)arg1 sampleTime:(SCD_Struct_AV0)arg2 futureMetadata:(id)arg3 status:(int*)arg4 ;
-(int)_setupGVSProcessor;
-(unsigned long long)_extendedRowsOfOutputBuffer;
-(opaqueCMSampleBufferRef)copyStabilizedSampleBuffer:(id*)arg1 ;
-(int)preferredSourcePixelBufferPrimingFrameCount;
-(int)preferredSourceStabilizationMetadataPrimingCount;
-(NSMutableArray *)outputSampleBuffers;
@end

