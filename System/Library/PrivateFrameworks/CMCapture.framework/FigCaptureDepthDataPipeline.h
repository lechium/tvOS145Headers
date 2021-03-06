/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class BWDepthConverterNode, BWNodeOutput, BWPipelineStage, NSString;

@interface FigCaptureDepthDataPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWDepthConverterNode* _depthDataConverterNode;
	BWNodeOutput* _videoAndConvertedDepthDataOutput;
	BWPipelineStage* _pipelineStage;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;                                          //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                         //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,readonly) BWPipelineStage * pipelineStage;                              //@synthesize pipelineStage=_pipelineStage - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * videoAndConvertedDepthDataOutput;              //@synthesize videoAndConvertedDepthDataOutput=_videoAndConvertedDepthDataOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 delegate:(id)arg5 ;
-(BWPipelineStage *)pipelineStage;
-(BWNodeOutput *)videoAndConvertedDepthDataOutput;
-(int)_buildDepthPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 delegate:(id)arg4 ;
-(int)_buildDepthConversionPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 convertedDepthOutputsOut:(id*)arg4 ;
-(int)_buildDepthDataSinkPipeline:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 clientAuditToken:(SCD_Struct_Fi72)arg4 delegate:(id)arg5 ;
@end

