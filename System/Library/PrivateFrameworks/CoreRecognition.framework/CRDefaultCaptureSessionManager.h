/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <libobjc.A.dylib/CRCaptureSessionManager.h>

@class NSString, CALayer;

@interface CRDefaultCaptureSessionManager : NSObject <CRCaptureSessionManager> {

	BOOL _enableMetadataOutput;
	long long _cameraPosition;
	NSString* _cameraMode;
	long long _whiteBalanceMode;
	long long _focusMode;
	long long _exposureMode;
	long long _torchMode;
	CALayer* _previewLayer;
	NSString* _currentDeviceID;
	CGSize _cameraResolution;

}

@property (assign,nonatomic) long long cameraPosition;                //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,copy) NSString * cameraMode;                     //@synthesize cameraMode=_cameraMode - In the implementation block
@property (assign,nonatomic) long long whiteBalanceMode;              //@synthesize whiteBalanceMode=_whiteBalanceMode - In the implementation block
@property (assign,nonatomic) long long focusMode;                     //@synthesize focusMode=_focusMode - In the implementation block
@property (assign,nonatomic) long long exposureMode;                  //@synthesize exposureMode=_exposureMode - In the implementation block
@property (assign,nonatomic) long long torchMode;                     //@synthesize torchMode=_torchMode - In the implementation block
@property (nonatomic,readonly) CALayer * previewLayer;                //@synthesize previewLayer=_previewLayer - In the implementation block
@property (retain) NSString * currentDeviceID;                        //@synthesize currentDeviceID=_currentDeviceID - In the implementation block
@property (assign) BOOL enableMetadataOutput;                         //@synthesize enableMetadataOutput=_enableMetadataOutput - In the implementation block
@property (assign) CGSize cameraResolution;                           //@synthesize cameraResolution=_cameraResolution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isRunning;
-(void)stopRunning;
-(void)setExposureMode:(long long)arg1 ;
-(long long)exposureMode;
-(long long)cameraPosition;
-(void)setupCameraSession;
-(void)teardownCameraSession;
-(BOOL)toggleCamera;
-(BOOL)switchToCamera:(long long)arg1 ;
-(BOOL)switchToCameraWithDeviceID:(id)arg1 ;
-(void)startRunning;
-(void)refocusOnPoint:(CGPoint)arg1 ;
-(void)refocusOnPoint:(CGPoint)arg1 exposure:(BOOL)arg2 ;
-(void)resetFocus;
-(void)setPreviewOrientation:(long long)arg1 ;
-(BOOL)isAdjustingFocus;
-(BOOL)isFocusPointOfInterestSupported;
-(CGPoint)focusPointOfInterest;
-(CGPoint)convertCameraPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(CGPoint)convertCameraPoint:(CGPoint)arg1 toLayer:(id)arg2 ;
-(CGPoint)convertCameraPoint:(CGPoint)arg1 toLayer:(id)arg2 flipped:(BOOL)arg3 ;
-(CGRect)convertCameraRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGPoint)convertCameraPointOCR:(CGPoint)arg1 toLayer:(id)arg2 flipped:(BOOL)arg3 ;
-(void)highISOAdjustExposure;
-(BOOL)isPreviewVideoMirrored;
-(CGRect)previewVisibleRect;
-(int)targetVideoFormat;
-(void)setCameraPosition:(long long)arg1 ;
-(NSString *)cameraMode;
-(void)setCameraMode:(NSString *)arg1 ;
-(long long)whiteBalanceMode;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(long long)focusMode;
-(void)setFocusMode:(long long)arg1 ;
-(long long)torchMode;
-(void)setTorchMode:(long long)arg1 ;
-(CALayer *)previewLayer;
-(NSString *)currentDeviceID;
-(void)setCurrentDeviceID:(NSString *)arg1 ;
-(BOOL)enableMetadataOutput;
-(void)setEnableMetadataOutput:(BOOL)arg1 ;
-(CGSize)cameraResolution;
-(void)setCameraResolution:(CGSize)arg1 ;
@end

