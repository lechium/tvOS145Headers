/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPRequest.h>

@class VCPImageHandsAnalyzer, NSArray;

@interface VCPHandPoseVideoRequest : VCPRequest {

	int _handID;
	int _preferredWidth;
	int _preferredHeight;
	unsigned _preferredFormat;
	VCPImageHandsAnalyzer* _analyzer;
	NSArray* _existingHands;

}
-(id)init;
-(id)initWithOptions:(id)arg1 ;
-(unsigned)preferredPixelFormat;
-(CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)cleanupWithOptions:(id)arg1 error:(id*)arg2 ;
-(int)associateHands:(id)arg1 withExisingHands:(id)arg2 ;
-(float)handDistance:(id)arg1 withhandB:(id)arg2 ;
@end

