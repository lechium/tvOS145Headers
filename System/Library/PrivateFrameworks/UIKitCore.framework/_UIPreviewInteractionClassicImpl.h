/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPreviewInteractionImpl.h>

@protocol _UIPreviewInteractionTouchForceProviding, UIPreviewInteractionDelegate;
@class UIView, UIPreviewInteraction, _UIPreviewInteractionStateRecognizer, CADisplayLink, NSString;

@interface _UIPreviewInteractionClassicImpl : NSObject <_UIPreviewInteractionImpl> {

	UIView* _view;
	struct {
		unsigned delegatePreviewInteractionShouldBegin : 1;
		unsigned delegateDidUpdateCommitTransition : 1;
		unsigned delegateShouldFinishTransitionToPreview : 1;
		unsigned delegateShouldAutomaticallyTransitionToPreviewAfterDelay : 1;
		unsigned delegateHighlighterForPreviewTransition : 1;
		unsigned delegateViewControllerPresentationForPresentingViewController : 1;
		unsigned interactive : 1;
		unsigned delegateDidPreventInteraction : 1;
		unsigned interactionRequiresRestart : 1;
		unsigned interactionWasCancelled : 1;
		unsigned previousProgressWasNegativeOrZero : 1;
		unsigned currentState : 3;
		unsigned nextUpdateShouldTransitionToPreview : 1;
		unsigned nextPreviewShouldPreventHapticFeedback : 1;
	}  _previewInteractionFlags;
	id<_UIPreviewInteractionTouchForceProviding> _systemTouchForceProvider;
	_UIPreviewInteractionStateRecognizer* _currentInteractionStateRecognizer;
	CGPoint _sceneReferenceLocationFromLatestUpdate;
	CADisplayLink* _continuousEvaluationDisplayLink;
	id<UIPreviewInteractionDelegate> _delegate;
	id<_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
	UIPreviewInteraction* _previewInteraction;

}

@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                                       //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider;              //@synthesize touchForceProvider=_touchForceProvider - In the implementation block
@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction;                             //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<UIPreviewInteractionDelegate>)delegate;
-(void)setDelegate:(id<UIPreviewInteractionDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIView *)view;
-(void)_endContinuousEvaluation;
-(void)_updateForContinuousEvaluation:(id)arg1 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(id)initWithView:(id)arg1 previewInteraction:(id)arg2 ;
-(id<_UIPreviewInteractionTouchForceProviding>)touchForceProvider;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(void)_endHighlightingIfNeeded;
-(void)_dismissPreviewViewControllerIfNeeded;
-(void)cancelInteraction;
-(void)_endInteractionIfNeeded;
-(void)_updateForCurrentTouchForceProvider;
-(void)_prepareForInteractionIfNeeded;
-(void)_endUsingFeedbackIfNeeded;
-(void)_endViewControllerPresentationObserving;
-(void)setTouchForceProvider:(id<_UIPreviewInteractionTouchForceProviding>)arg1 ;
-(void)_prepareUsingFeedbackIfNeeded;
-(void)_updateInteractionStateRecognizerForTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(UIPreviewInteraction *)previewInteraction;
-(void)_prepareUsingFeedback;
-(void)_prepareHighlighterIfNeeded;
-(BOOL)_shouldCancelTransitionToState:(long long)arg1 ;
-(void)_updateHighlighter:(double)arg1 ;
-(void)_presentPreviewViewControllerIfNeeded;
-(void)_resetAfterInteraction;
-(void)_endInteractiveStateTransitions;
-(void)_startPreviewAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_gestureRecognizerForExclusionRelationship;
-(void)_prepareForViewControllerPresentationObserving;
@end

