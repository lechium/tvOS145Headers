/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/FigCapturePipeline.h>

@class FigCaptureVISPipeline, BWFanOutNode, BWOverCaptureFanOutNode, NSMutableArray, FigCaptureMovieFileSinkHeadPipeline;

@interface FigCaptureMovieFileSinkMiddlePipeline : FigCapturePipeline {

	FigCaptureVISPipeline* _visPipeline;
	BWFanOutNode* _videoFanOut;
	FigCaptureVISPipeline* _overCaptureVISPipeline;
	BWOverCaptureFanOutNode* _audioFanOut;
	NSMutableArray* _metadataFanOuts;
	FigCaptureMovieFileSinkHeadPipeline* _headPipeline;
	unsigned long long _numberOfTailsToSupport;

}

@property (nonatomic,readonly) FigCaptureVISPipeline * visPipeline;                         //@synthesize visPipeline=_visPipeline - In the implementation block
@property (nonatomic,readonly) FigCaptureVISPipeline * overCaptureVISPipeline;              //@synthesize overCaptureVISPipeline=_overCaptureVISPipeline - In the implementation block
-(void)dealloc;
-(int)_buildMovieFileSinkExtendedCVISMiddleWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 ;
-(id)videoOutputForTailIndex:(unsigned long long)arg1 ;
-(id)audioOutputForTailIndex:(unsigned long long)arg1 ;
-(id)metadataOutputsForTailIndex:(unsigned long long)arg1 ;
-(FigCaptureVISPipeline *)visPipeline;
-(FigCaptureVISPipeline *)overCaptureVISPipeline;
@end

