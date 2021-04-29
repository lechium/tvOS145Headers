/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVConferencePreviewClientDelegate
@optional
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
-(void)didChangeLocalVideoAttributes:(id)arg1;
-(void)didChangeLocalScreenAttributes:(id)arg1;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
-(void)didReceiveCommError;
-(void)didGetSnapshot:(id)arg1;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
-(void)cameraDidBecomeInterruptedForForUniqueID:(id)arg1 reason:(long long)arg2;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg1;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
-(void)cameraCinematicFramingAvailabilityDidChange:(BOOL)arg1;

@end

