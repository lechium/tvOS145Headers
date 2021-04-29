/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol MTLCommandQueue;
@class NSString, FigMetalContext, FigMetalHistogram, NSDictionary;

@interface BWMeteorHeadroomNode : BWNode {

	NSString* _lastCaptureRequestIdentifier;
	float _lastMeteorHeadroom;
	float _gainMapMainImageDownscalingFactor;
	int _headroomProcessingType;
	FigMetalContext* _metalContext;
	id<MTLCommandQueue> _metalCommandQueue;
	FigMetalHistogram* _histogram;
	NSDictionary* _meteorHeadroomParametersByPortType;

}
+(void)initialize;
-(void)dealloc;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1 ;
-(float)gainMapMainImageDownscalingFactor;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 ;
-(void)setHeadroomProcessingType:(int)arg1 ;
-(int)headroomProcessingType;
@end

