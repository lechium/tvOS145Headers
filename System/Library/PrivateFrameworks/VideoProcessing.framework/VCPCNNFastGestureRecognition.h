/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModelEspresso;

@interface VCPCNNFastGestureRecognition : NSObject {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;

}
+(id)detector;
-(id)init;
-(void)dealloc;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)createInput:(float*)arg1 keypoints:(CGPoint*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
-(int)getDetectionScore:(float*)arg1 ;
-(int)planDestroy;
-(int)gestureDetection:(CGPoint*)arg1 score:(float*)arg2 ;
@end

