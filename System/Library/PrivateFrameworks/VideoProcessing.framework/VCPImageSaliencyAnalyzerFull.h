/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VCPImageSaliencyAnalyzer.h>

@class VCPCNNModel, VCPCNNData, NSURL;

@interface VCPImageSaliencyAnalyzerFull : VCPImageSaliencyAnalyzer {

	VCPCNNModel* _model;
	VCPCNNData* _input;
	NSURL* _modelURL;

}
-(int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)getSalientRegions:(/*^block*/id)arg1 ;
@end

