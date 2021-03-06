/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRefreshControlContentView.h>

@class UIView, _UIRefreshControlModernReplicatorView, UILabel;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {

	BOOL _animationsAreValid;
	UIView* _replicatorContainer;
	_UIRefreshControlModernReplicatorView* _replicatorView;
	UIView* _seed;
	BOOL _hasFinishedRevealing;
	UILabel* _textLabel;
	BOOL _areAnimationsValid;
	BOOL _horizontallyCenteredFramesNeedUpdate;
	double _currentPopStiffness;
	double _impactIntensity;

}

@property (assign,nonatomic) BOOL areAnimationsValid;                                //@synthesize areAnimationsValid=_areAnimationsValid - In the implementation block
@property (assign,nonatomic) BOOL horizontallyCenteredFramesNeedUpdate;              //@synthesize horizontallyCenteredFramesNeedUpdate=_horizontallyCenteredFramesNeedUpdate - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                  //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) double currentPopStiffness;                             //@synthesize currentPopStiffness=_currentPopStiffness - In the implementation block
@property (assign,nonatomic) double impactIntensity;                                 //@synthesize impactIntensity=_impactIntensity - In the implementation block
-(void)setAttributedTitle:(id)arg1 ;
-(id)attributedTitle;
-(long long)style;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)_removeAllAnimations;
-(id)_effectiveTintColor;
-(void)_tick;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(double)maximumSnappingHeight;
-(void)setCurrentPopStiffness:(double)arg1 ;
-(void)setImpactIntensity:(double)arg1 ;
-(void)willTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)didTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_resetToRevealingState;
-(void)_updateTimeOffsetOfRelevantLayers;
-(void)_spin;
-(void)_snappingMagic;
-(void)_tickDueToProgrammaticRefresh;
-(void)_goAway;
-(void)_cleanUpAfterRevealing;
-(void)_setSpunAppearance;
-(id)_effectiveTintColorWithAlpha:(double)arg1 ;
-(CGAffineTransform)_bloomedSeedTransform;
-(CGAffineTransform)_unbloomedSeedTransform;
-(void)_setUnbloomedAppearance;
-(void)_reveal;
-(void)_setBloomedAppearance;
-(void)_unbloom;
-(double)currentPopStiffness;
-(void)_bloom;
-(double)_currentTimeOffset;
-(double)_percentageShowing;
-(double)_maximumSnappingHeightScalingForScrollViewHeight;
-(BOOL)areAnimationsValid;
-(void)setAreAnimationsValid:(BOOL)arg1 ;
-(double)impactIntensity;
-(BOOL)horizontallyCenteredFramesNeedUpdate;
-(void)setHorizontallyCenteredFramesNeedUpdate:(BOOL)arg1 ;
@end

