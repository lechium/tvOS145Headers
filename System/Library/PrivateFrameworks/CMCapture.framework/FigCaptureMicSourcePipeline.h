/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourcePipeline.h>

@class BWAudioSourceNode, BWFanOutNode, BWZoomCommandHandler;

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {

	BWAudioSourceNode* _sourceNode;
	BWFanOutNode* _splitterNodesByMicSourcePosition[3];
	unsigned _nextOutputIndexByMicSourcePosition[3];
	BWZoomCommandHandler* _zoomCommandHandlerForStereoAudioCapture;

}

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) BWAudioSourceNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
+(void)initialize;
-(void)dealloc;
-(OpaqueCMClockRef)clock;
-(BWAudioSourceNode *)sourceNode;
-(id)nextOutputForMicSourcePosition:(int)arg1 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 cmSession:(opaqueCMSessionRef)arg4 renderDelegate:(id)arg5 isMultiCamSession:(BOOL)arg6 ;
-(int)_buildMicSourcePipelineWithConfiguration:(id)arg1 graph:(id)arg2 cmSession:(opaqueCMSessionRef)arg3 renderDelegate:(id)arg4 isMultiCamSession:(BOOL)arg5 ;
@end

