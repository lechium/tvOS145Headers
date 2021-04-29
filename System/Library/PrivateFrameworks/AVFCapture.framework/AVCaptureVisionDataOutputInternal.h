/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureVisionDataOutputInternal : NSObject {

	AVCaptureDataOutputDelegateCallbackHelper* delegateCallbackHelper;
	AVWeakReference* weakReference;
	SCD_Struct_AV0 minFrameDuration;
	SCD_Struct_AV0 minBurstFrameDuration;
	SCD_Struct_AV0 maxBurstDuration;
	unsigned long long gaussianPyramidOctavesCount;
	float gaussianPyramidBaseOctaveDownscalingFactor;
	unsigned long long maxKeypointsCount;
	BOOL featureBinningEnabled;
	BOOL featureOrientationAssignmentEnabled;
	float keypointDetectionThreshold;

}
-(id)init;
-(void)dealloc;
@end
