/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CRCameraReaderDelegate <NSObject>
@optional
-(id)cameraReader:(id)arg1 provideOverlayTextForRecognizedObject:(id)arg2;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
-(void)cameraReader:(id)arg1 didRecognizedNewObjects:(id)arg2;
-(void)cameraReaderDidDisplayMessage:(id)arg1;
-(void)cameraReaderDidFindTarget:(id)arg1;
-(void)cameraReaderDidFindTarget:(id)arg1 withCorners:(id)arg2;
-(BOOL)cameraReader:(id)arg1 shouldReturnQRCode:(id)arg2;

@required
-(void)cameraReaderDidCancel:(id)arg1;
-(void)cameraReaderDidEnd:(id)arg1;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2;

@end

