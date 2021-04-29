/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@class PXViewControllerZoomTransitionSettings, PXViewControllerPinchTransitionSettings, PXViewControllerSwipeDownTransitionSettings;

@interface PXViewControllerTransitionSettings : PXSettings {

	PXViewControllerZoomTransitionSettings* _zoomTransitionSettings;
	PXViewControllerPinchTransitionSettings* _pinchTransitionSettings;
	PXViewControllerSwipeDownTransitionSettings* _swipeDownTransitionSettings;

}

@property (nonatomic,retain) PXViewControllerZoomTransitionSettings * zoomTransitionSettings;                        //@synthesize zoomTransitionSettings=_zoomTransitionSettings - In the implementation block
@property (nonatomic,retain) PXViewControllerPinchTransitionSettings * pinchTransitionSettings;                      //@synthesize pinchTransitionSettings=_pinchTransitionSettings - In the implementation block
@property (nonatomic,retain) PXViewControllerSwipeDownTransitionSettings * swipeDownTransitionSettings;              //@synthesize swipeDownTransitionSettings=_swipeDownTransitionSettings - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)createChildren;
-(id)parentSettings;
-(PXViewControllerZoomTransitionSettings *)zoomTransitionSettings;
-(void)setZoomTransitionSettings:(PXViewControllerZoomTransitionSettings *)arg1 ;
-(PXViewControllerPinchTransitionSettings *)pinchTransitionSettings;
-(void)setPinchTransitionSettings:(PXViewControllerPinchTransitionSettings *)arg1 ;
-(PXViewControllerSwipeDownTransitionSettings *)swipeDownTransitionSettings;
-(void)setSwipeDownTransitionSettings:(PXViewControllerSwipeDownTransitionSettings *)arg1 ;
@end

