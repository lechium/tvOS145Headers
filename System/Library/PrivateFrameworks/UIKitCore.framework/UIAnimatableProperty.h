/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIAnimatablePropertyBase.h>

@protocol OS_dispatch_queue, UIVectorOperatable, UIViewAnimationComposing;
@class _UIViewAnimatablePropertyTransformer, NSObject, UIViewRunningAnimationEntry, UIViewInProcessAnimationState;

@interface UIAnimatableProperty : UIAnimatablePropertyBase {

	_UIViewAnimatablePropertyTransformer* _transformer;
	NSObject*<OS_dispatch_queue> _animationEntryLockingQueue;
	NSObject*<OS_dispatch_queue> _invalidationLockingQueue;
	UIViewRunningAnimationEntry* _animationEntry;
	id<UIVectorOperatable> _pendingTargetVelocity;
	id<UIVectorOperatable> _pendingVelocity;
	BOOL _invalidated;
	int _ownershipCount;
	id _value;
	id _presentationValue;
	id<UIViewAnimationComposing> _composer;
	UIViewInProcessAnimationState* _animationState;
	/*^block*/id _invalidationCallback;

}

@property (nonatomic,retain) id<UIViewAnimationComposing> composer;                              //@synthesize composer=_composer - In the implementation block
@property (nonatomic,retain) UIViewRunningAnimationEntry * animationEntry; 
@property (assign,nonatomic,__weak) UIViewInProcessAnimationState * animationState;              //@synthesize animationState=_animationState - In the implementation block
@property (assign,nonatomic) int ownershipCount;                                                 //@synthesize ownershipCount=_ownershipCount - In the implementation block
@property (nonatomic,copy) id invalidationCallback;                                              //@synthesize invalidationCallback=_invalidationCallback - In the implementation block
@property (retain) id presentationValue;                                                         //@synthesize presentationValue=_presentationValue - In the implementation block
@property (retain) id value;                                                                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) id velocity; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                            //@synthesize invalidated=_invalidated - In the implementation block
-(id)debugDescription;
-(void)invalidate;
-(id)value;
-(void)setValue:(id)arg1 ;
-(BOOL)isInvalidated;
-(id)velocity;
-(void)setVelocity:(id)arg1 ;
-(void)setComposer:(id<UIViewAnimationComposing>)arg1 ;
-(id<UIViewAnimationComposing>)composer;
-(id)invalidationCallback;
-(void)setInvalidationCallback:(id)arg1 ;
-(void)setPresentationValue:(id)arg1 ;
-(id)presentationValue;
-(id)transformer;
-(UIViewInProcessAnimationState *)animationState;
-(void)setAnimationState:(UIViewInProcessAnimationState *)arg1 ;
-(void)setTransformer:(id)arg1 ;
-(BOOL)animatePropertyWithCurrentValue:(id)arg1 targetValue:(id)arg2 preTickShouldRemoveCallback:(/*^block*/id)arg3 newValueCallback:(/*^block*/id)arg4 removedCallback:(/*^block*/id)arg5 ;
-(id)velocityTarget:(BOOL)arg1 ;
-(void)setVelocity:(id)arg1 target:(BOOL)arg2 ;
-(UIViewRunningAnimationEntry *)animationEntry;
-(BOOL)_performAnimation;
-(void)invalidateAndStopImmediately:(BOOL)arg1 ;
-(id)initWithInvalidationCallback:(/*^block*/id)arg1 ;
-(void)invalidateIfPossible;
-(void)setAnimationEntry:(UIViewRunningAnimationEntry *)arg1 ;
-(int)ownershipCount;
-(void)setOwnershipCount:(int)arg1 ;
@end

