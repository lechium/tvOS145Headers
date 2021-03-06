/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIScrollToTopView.h>
#import <UIKitCore/_UIRemoteViewFocusProxy.h>
#import <UIKitCore/_UIViewBoundingPathChangeObserver.h>

@class _UIRemoteViewController, NSString;

@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy, _UIViewBoundingPathChangeObserver> {

	_UIRemoteViewController* _remoteViewController;
	id _viewControllerOperatorProxy;
	id _textEffectsOperatorProxy;
	CGSize _intrinsicContentSize;
	CGRect _formerTextEffectsContentFrame;
	BOOL _observingTextEffectsWindowRotation;
	long long _interfaceOrientation;
	struct {
		unsigned hasIntrinsicContentSize : 1;
		unsigned observingBoundingPathChanges : 1;
		unsigned needsRemoteViewServiceBoundingPathUpdate : 1;
		unsigned remoteViewServiceBoundingPathUpdateScheduled : 1;
	}  _sizeTrackingViewFlags;

}

@property (nonatomic,readonly) _UIRemoteViewController * remoteViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isScrollEnabled;
-(BOOL)canBecomeFocused;
-(_UIRemoteViewController *)remoteViewController;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_geometryChanged:(const SCD_Struct_UI23*)arg1 forAncestor:(id)arg2 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(BOOL)arg2 ;
-(void)_updateTextEffectsGeometriesImmediately;
-(void)_updateTextEffectsWindowSceneSize;
-(void)_updateTextEffectsWindowSafeAreaInsets;
-(void)_updateTextEffectsGeometries:(CGRect)arg1 ;
-(void)_updateTextEffectsGeometries:(CGRect)arg1 textEffectsWindow:(id)arg2 ;
-(void)_textEffectsWindowDidRotate:(id)arg1 ;
-(long long)_interfaceOrientationForScene:(id)arg1 ;
-(BOOL)_needsTextEffectsUpdateToFrame:(CGRect)arg1 ;
-(id)_boundingPathForRemoteViewService;
-(void)_clearNeedsRemoteViewServiceBoundingPathUpdate;
-(void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2 ;
-(BOOL)_canSendViewServiceActualBoundingPath;
-(void)_setNeedsRemoteViewServiceBoundingPathUpdate;
-(void)_updateSceneGeometries:(id)arg1 ;
-(void)updateIntrinsicContentSize:(CGSize)arg1 ;
-(BOOL)_fencingEffectsAreVisible;
@end

