/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXViewControllerZoomTransitionSettings : PXSettings {

	BOOL _showRectsOfInterest;
	BOOL _animateViewControllersViews;
	BOOL _animateEndPointsContents;
	long long _animationType;
	long long _crossfadeType;
	double _transitionDuration;
	double _minimumZoomScale;
	double _maximumZoomScale;
	double _titleCrossfadeAmount;

}

@property (assign,nonatomic) long long animationType;                       //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) long long crossfadeType;                       //@synthesize crossfadeType=_crossfadeType - In the implementation block
@property (assign,nonatomic) double transitionDuration;                     //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double minimumZoomScale;                       //@synthesize minimumZoomScale=_minimumZoomScale - In the implementation block
@property (assign,nonatomic) double maximumZoomScale;                       //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) double titleCrossfadeAmount;                   //@synthesize titleCrossfadeAmount=_titleCrossfadeAmount - In the implementation block
@property (assign,nonatomic) BOOL showRectsOfInterest;                      //@synthesize showRectsOfInterest=_showRectsOfInterest - In the implementation block
@property (assign,nonatomic) BOOL animateViewControllersViews;              //@synthesize animateViewControllersViews=_animateViewControllersViews - In the implementation block
@property (assign,nonatomic) BOOL animateEndPointsContents;                 //@synthesize animateEndPointsContents=_animateEndPointsContents - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(long long)animationType;
-(void)setDefaultValues;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)minimumZoomScale;
-(double)maximumZoomScale;
-(id)parentSettings;
-(double)transitionDuration;
-(void)setAnimationType:(long long)arg1 ;
-(void)setTransitionDuration:(double)arg1 ;
-(long long)crossfadeType;
-(void)setCrossfadeType:(long long)arg1 ;
-(double)titleCrossfadeAmount;
-(void)setTitleCrossfadeAmount:(double)arg1 ;
-(BOOL)showRectsOfInterest;
-(void)setShowRectsOfInterest:(BOOL)arg1 ;
-(BOOL)animateViewControllersViews;
-(void)setAnimateViewControllersViews:(BOOL)arg1 ;
-(BOOL)animateEndPointsContents;
-(void)setAnimateEndPointsContents:(BOOL)arg1 ;
@end

