/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFilterRenderer.h>

@protocol MTLCommandQueue;
@class NSString, NSDictionary, FigSDOFEffectRendering;

@interface BWStillImageMetalSDOFRenderer : NSObject <BWFilterRenderer> {

	NSDictionary* _sensorIDDictionary;
	FigSDOFEffectRendering* _sdofEffectRenderer;
	int _portraitRenderQuality;
	SCD_Struct_BW2 _imageDimensions;
	SCD_Struct_BW2 _depthDataMapDimensions;
	id<MTLCommandQueue> _mtlCommandQueue;

}

@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) BOOL supportsAnimation; 
@property (nonatomic,readonly) BOOL adjustsMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(short)type;
-(NSString *)displayName;
-(int)_loadAndConfigureSDOFRenderer;
-(id)bundleOptionsDictionary;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)supportsAnimation;
-(BOOL)adjustsMetadata;
-(id)initWithSensorIDDictionary:(id)arg1 imageDimensions:(SCD_Struct_BW2)arg2 depthDataMapDimensions:(SCD_Struct_BW2)arg3 portraitRenderQuality:(int)arg4 metalCommandQueue:(id)arg5 ;
@end

