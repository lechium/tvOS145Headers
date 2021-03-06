/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UIContextMenuInteraction, NSSet;

@interface UIControl : UIView {

	NSMutableArray* _targetActions;
	CGPoint _previousPoint;
	double _downTime;
	struct {
		unsigned disabled : 1;
		unsigned tracking : 1;
		unsigned touchInside : 1;
		unsigned touchDragged : 1;
		unsigned requiresDisplayOnTracking : 1;
		unsigned highlighted : 1;
		unsigned dontHighlightOnTouchDown : 1;
		unsigned allowActionsToQueue : 1;
		unsigned pendingUnhighlight : 1;
		unsigned selected : 1;
		unsigned verticalAlignment : 3;
		unsigned horizontalAlignment : 3;
		unsigned wasLastHighlightSuccessful : 1;
		unsigned touchHasHighlighted : 1;
	}  _controlFlags;
	BOOL _contextMenuInteractionEnabled;
	BOOL _showsMenuAsPrimaryAction;
	BOOL _contextMenuEnabled;
	BOOL _contextMenuIsPrimary;
	long long _requiredButtonMask;
	UIContextMenuInteraction* _contextMenuInteraction;

}

@property (nonatomic,readonly) long long effectiveContentVerticalAlignment; 
@property (assign,getter=isContextMenuEnabled,nonatomic) BOOL contextMenuEnabled;                                    //@synthesize contextMenuEnabled=_contextMenuEnabled - In the implementation block
@property (assign,nonatomic) BOOL contextMenuIsPrimary;                                                              //@synthesize contextMenuIsPrimary=_contextMenuIsPrimary - In the implementation block
@property (assign,setter=_setRequiredButtonMask:,nonatomic) long long _requiredButtonMask;                           //@synthesize requiredButtonMask=_requiredButtonMask - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) long long contentVerticalAlignment; 
@property (assign,nonatomic) long long contentHorizontalAlignment; 
@property (nonatomic,readonly) long long effectiveContentHorizontalAlignment; 
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isTracking,nonatomic,readonly) BOOL tracking; 
@property (getter=isTouchInside,nonatomic,readonly) BOOL touchInside; 
@property (nonatomic,readonly) NSSet * allTargets; 
@property (nonatomic,readonly) unsigned long long allControlEvents; 
@property (nonatomic,readonly) UIContextMenuInteraction * contextMenuInteraction;                                    //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (assign,getter=isContextMenuInteractionEnabled,nonatomic) BOOL contextMenuInteractionEnabled;              //@synthesize contextMenuInteractionEnabled=_contextMenuInteractionEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsMenuAsPrimaryAction;                                                          //@synthesize showsMenuAsPrimaryAction=_showsMenuAsPrimaryAction - In the implementation block
+(unsigned long long)_primaryStateForState:(unsigned long long)arg1 ;
+(BOOL)_allowActionsToQueue;
-(void)_mapkit_setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_cnui_super_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned long long)state;
-(BOOL)isEnabled;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(BOOL)isTracking;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)canBecomeFirstResponder;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)sendActionsForControlEvents:(unsigned long long)arg1 ;
-(BOOL)shouldTrack;
-(NSSet *)allTargets;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTracking:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3 ;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(BOOL)cancelMouseTracking;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(long long)contentHorizontalAlignment;
-(unsigned long long)allControlEvents;
-(BOOL)isTouchInside;
-(void)enumerateEventHandlers:(/*^block*/id)arg1 ;
-(void)removeTarget:(id)arg1 forEvents:(int)arg2 ;
-(void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(void)sendAction:(id)arg1 ;
-(long long)contentVerticalAlignment;
-(long long)_focusedSound;
-(unsigned long long)_stateForFocusUpdateContext:(id)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)_systemDefaultFocusGroupDescriptor;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)_setLastHighlightSuccessful:(BOOL)arg1 ;
-(void)_willMoveToWindow:(id)arg1 ;
-(long long)_sceneDraggingBehaviorOnPan;
-(void)addAction:(id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(double)_highlightCornerRadius;
-(void)_commonInitForPrimaryAction:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 primaryAction:(id)arg2 ;
-(long long)effectiveContentHorizontalAlignment;
-(void)setContextMenuIsPrimary:(BOOL)arg1 ;
-(CGRect)_clippedHighlightBounds;
-(BOOL)_touchHasHighlighted;
-(BOOL)_wasLastHighlightSuccessful;
-(long long)effectiveContentVerticalAlignment;
-(void)setShowsMenuAsPrimaryAction:(BOOL)arg1 ;
-(void)_unhighlight;
-(BOOL)requiresDisplayOnTracking;
-(BOOL)cancelTouchTracking;
-(void)_addControlTargetAction:(id)arg1 ;
-(void)_incrementStatisticsForUserActionForEvents:(unsigned long long)arg1 ;
-(void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3 ;
-(void)_beginInteractionDurationStatisticMeasurements;
-(void)_commitInteractionDurationStatisticMeasurements;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(void)removeAction:(id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(void)removeActionForIdentifier:(id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(id)_allTargetActions;
-(BOOL)_hasActionForEventMask:(unsigned long long)arg1 ;
-(void)_setHighlightOnMouseDown:(BOOL)arg1 ;
-(void)_delayActions;
-(void)_sendDelayedActions;
-(void)_cancelDelayedActions;
-(BOOL)touchDragged;
-(void)setRequiresDisplayOnTracking:(BOOL)arg1 ;
-(BOOL)hasOneOrMoreTargets;
-(void)_sendDelayedActions:(BOOL)arg1 ;
-(void)_diagnoseFocusabilityForReport:(id)arg1 ;
-(long long)_requiredButtonMask;
-(void)_setRequiredButtonMask:(long long)arg1 ;
-(BOOL)isContextMenuInteractionEnabled;
-(void)setContextMenuInteractionEnabled:(BOOL)arg1 ;
-(BOOL)showsMenuAsPrimaryAction;
-(BOOL)isContextMenuEnabled;
-(void)setContextMenuEnabled:(BOOL)arg1 ;
-(BOOL)contextMenuIsPrimary;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(id)_scalarStatisticsForUserValueChangedEvent;
-(id)__scalarStatisticsForUserTouchUpInsideEvent;
-(id)__scalarStatisticsForUserValueChangedEvent;
-(id)__distributionStatisticsForUserInteractionDuration;
-(id)_scalarStatisticsForUserTouchUpInsideEvent;
-(id)_distributionStatisticsForUserInteractionDuration;
@end

