/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableDictionary, NSDictionary;

@interface VCPVideoFaceDetector : VCPVideoAnalyzer {

	int _angle;
	SCD_Struct_VC6 _timeLastDetection;
	NSMutableDictionary* _activeFaces;
	NSDictionary* _results;

}
+(id)faceDetectorWithTransform:(CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3 tracking:(BOOL)arg4 faceDominated:(BOOL)arg5 cancel:(/*^block*/id)arg6 ;
-(id)results;
-(id)faceRanges;
@end

