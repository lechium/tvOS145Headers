/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVCameraCalibrationData;

@interface AVCaptureSynchronizedCameraCalibrationData : AVCaptureSynchronizedData {

	AVCameraCalibrationData* _cameraCalibrationData;
	BOOL _cameraCalibrationDataWasDropped;
	long long _droppedReason;

}

@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
@property (readonly) BOOL cameraCalibrationDataWasDropped; 
@property (readonly) long long droppedReason; 
-(void)dealloc;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(long long)droppedReason;
-(BOOL)cameraCalibrationDataWasDropped;
-(id)_initWithCameraCalibrationData:(id)arg1 timestamp:(SCD_Struct_AV0)arg2 cameraCalibrationDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
@end
