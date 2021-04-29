/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCalloutView.h>

@class _MKStandardCalloutMaskView, _MKCalloutLayer, UIView, MKSmallCalloutView, UIVisualEffectView, UIMotionEffectGroup;

@interface MKStandardCalloutView : MKCalloutView {

	SCD_Struct_MK16 _anchor;
	CGRect _frame;
	struct {
		unsigned animated : 1;
		unsigned didMoveCalled : 1;
		unsigned hasPendingAnimatedLayout : 1;
		unsigned needsCalloutUpdate : 1;
		unsigned isObserving : 1;
		unsigned reserved : 26;
	}  _flags;
	BOOL _animatingMapToShow;
	BOOL _dismissed;
	_MKStandardCalloutMaskView* _maskView;
	_MKCalloutLayer* _maskLayer;
	_MKCalloutLayer* _contentStrokeLayer;
	UIView* _contentView;
	MKSmallCalloutView* _calloutView;
	UIVisualEffectView* _backdropView;
	UIMotionEffectGroup* _motionEffect;
	long long _style;
	SCD_Struct_MK17 _metrics;
	BOOL _hideTitle;

}

@property (assign,nonatomic) BOOL hideTitle;              //@synthesize hideTitle=_hideTitle - In the implementation block
+(Class)layerClass;
+(double)defaultHeight;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTitle:(id)arg1 ;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(CGPoint)anchorPoint;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(void)_stopObservingAnnotationView:(id)arg1 ;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithAnnotationView:(id)arg1 ;
-(void)_adaptToUserInterfaceStyle;
-(void)_updateCalloutAnimated:(BOOL)arg1 ;
-(void)setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_originForScale:(double)arg1 ;
-(void)_frameDidChange;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(long long)anchorPosition;
-(void)_calculateActualAnchorPoint:(CGPoint*)arg1 frame:(CGRect*)arg2 forDesiredAnchorPoint:(CGPoint)arg3 boundaryRect:(CGRect)arg4 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(long long)_calculateAnchorPosition:(CGPoint*)arg1 visibleRect:(CGRect*)arg2 ;
-(void)forceAnchorPosition:(long long)arg1 ;
-(void)annotationViewFrameDidChange;
-(void)completeBounceAnimation;
-(void)_addMotionEffectIfNecessary;
-(void)_runBounceAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_markDidMoveCalled;
-(void)_showFromAnchorPoint:(CGPoint)arg1 boundaryRect:(CGRect)arg2 animate:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_startObservingAnnotationView:(id)arg1 ;
-(void)_removeMotionEffect;
-(void)_removeAccessoryTargetForView:(id)arg1 ;
-(void)_calloutAccessoryControlTapped:(id)arg1 ;
-(BOOL)hideTitle;
-(void)setLeftView:(id)arg1 backgroundColor:(id)arg2 animated:(BOOL)arg3 ;
-(void)_addAccessoryTargetForView:(id)arg1 ;
-(void)_updateCallout;
-(void)_setNeedsCalloutUpdate;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(void)_updateTransformForMotionEffectDirection:(CGPoint)arg1 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)_setOriginForScale:(double)arg1 ;
-(BOOL)isLeftAnchored;
-(void)motionEffectDidUpdate:(id)arg1 ;
-(BOOL)hasPendingVisibility;
-(void)showAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setHideTitle:(BOOL)arg1 ;
@end
