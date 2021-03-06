/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString, BWStillImageCoordinatorNode, BWStillImageSampleBufferSinkNode, BWPortraitHDRStagingNode;


@protocol FigCaptureStillImageSinkPipeline <NSObject>
@property (nonatomic,readonly) NSArray * nodes; 
@property (nonatomic,readonly) NSString * sinkID; 
@property (nonatomic,readonly) BWStillImageCoordinatorNode * stillImageCoordinatorNode; 
@property (nonatomic,readonly) BWStillImageSampleBufferSinkNode * stillImageSinkNode; 
@property (nonatomic,readonly) BWPortraitHDRStagingNode * portraitHDRStagingNode; 
@required
-(NSArray *)nodes;
-(NSString *)sinkID;
-(BWStillImageSampleBufferSinkNode *)stillImageSinkNode;
-(void)enablePrepareTimeAllocationsForDeferredPrepare;
-(BWStillImageCoordinatorNode *)stillImageCoordinatorNode;
-(BWPortraitHDRStagingNode *)portraitHDRStagingNode;

@end

