/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKPresentationViewControllerProxy.h>

@class CMMotionManager, CMAttitude, NSOperationQueue, OKUILabelHUDView, OKRoundProgressView;

@interface OKPresentationViewController : OKPresentationViewControllerProxy {

	CMMotionManager* _motionManager;
	CMAttitude* _motionAttitudeReference;
	long long _motionOrientationReference;
	NSOperationQueue* _motionQueue;
	BOOL _shouldForwardMotion;
	double _motionLastRotationX;
	double _motionLastRotationY;
	double _motionLastRotationZ;
	OKUILabelHUDView* _couchLabelHUDView;
	OKRoundProgressView* _roundProgressView;

}

@property (nonatomic,retain) OKUILabelHUDView * couchLabelHUDView;              //@synthesize couchLabelHUDView=_couchLabelHUDView - In the implementation block
@property (retain) CMAttitude * motionAttitudeReference;                        //@synthesize motionAttitudeReference=_motionAttitudeReference - In the implementation block
-(void)dealloc;
-(id)colorSpace;
-(void)commonInit;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setActivityIndicatorVisible:(BOOL)arg1 ;
-(void)_startPresentation;
-(void)orientationChanged:(id)arg1 ;
-(void)updateMotion;
-(BOOL)isActivityIndicatorVisible;
-(void)updateActivityIndicatorWithProgress:(double)arg1 ;
-(void)_updateMotion:(long long)arg1 ;
-(void)_startMotion;
-(CMAttitude *)motionAttitudeReference;
-(void)setMotionAttitudeReference:(CMAttitude *)arg1 ;
-(void)motionBegan:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(long long)arg1 withEvent:(id)arg2 ;
-(OKUILabelHUDView *)couchLabelHUDView;
-(void)setCouchLabelHUDView:(OKUILabelHUDView *)arg1 ;
@end

