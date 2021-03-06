/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TUVideoDeviceControllerProviderDelegate <AVConferencePreviewClientDelegate>
@required
-(void)didStartPreviewForProvider:(id)arg1;
-(void)didPausePreviewForProvider:(id)arg1;
-(void)didStopPreviewForProvider:(id)arg1;
-(void)captureDevicesChangedForProvider:(id)arg1;
-(void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2;
-(void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2;
-(void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3;
-(void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2;
-(void)provider:(id)arg1 cameraZoomAvailabilityDidChange:(BOOL)arg2;
-(void)provider:(id)arg1 cameraCinematicFramingAvailabilityDidChange:(BOOL)arg2;
-(void)provider:(id)arg1 cameraCinematicFramingEnabledDidChange:(BOOL)arg2;

@end

