/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoNode.h>

@interface HMIVideoProcessingNode : HMIVideoNode
-(void)finish;
-(void)flush;
-(void)flushAsync;
-(void)handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

