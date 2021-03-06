/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSObservationSource.h>
#import <libobjc.A.dylib/NSObserver.h>

@class UIView, _UITouchesObservingGestureRecognizer, NSObservation, CADisplayLink, NSSet, NSString;

@interface _UITouchForceObservable : NSObservationSource <NSObserver> {

	UIView* _view;
	long long _observerCount;
	_UITouchesObservingGestureRecognizer* _gestureRecognizer;
	NSObservation* _touchesObservation;
	CADisplayLink* _continuousEvaluationDisplayLink;
	NSSet* _currentTouches;
	double _lastObservationTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)addObserver:(id)arg1 ;
-(void)removeObservation:(id)arg1 ;
-(void)receiveObservedValue:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)_updateForContinuousEvaluation:(id)arg1 ;
-(void)_cancelContinuousEvaluation;
-(id)_touchForceMessageForTouches:(id)arg1 ;
-(void)_willBeginHavingAnyObservers;
-(void)_didEndHavingAnyObservers;
-(double)_unclampedTouchForceForTouches:(id)arg1 ;
-(double)_maximumPossibleForceForTouches:(id)arg1 ;
-(BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)arg1 ;
-(double)_timestampForTouches:(id)arg1 ;
@end

