/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray;

@interface VCPCNNFaceLandmarkDetector : NSObject {

	NSMutableArray* _landmarks;

}
+(id)detector;
-(id)landmarks;
-(int)computeLandmarks:(float*)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withFaceBounds:(CGRect)arg2 ;
-(float*)getInputBuffer;
@end

