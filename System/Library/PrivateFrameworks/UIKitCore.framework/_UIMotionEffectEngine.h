/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionEffectEventConsumer.h>

@class _UIAssociationTable, _UILazyMapTable, NSMapTable, _UIMotionEffectEventProvider, _UIMotionEffectEvent, CADisplayLink, NSMutableSet, NSArray, NSString;

@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer> {

	_UIAssociationTable* _effectViewAssociationTable;
	_UILazyMapTable* _analyzerSettingsToAnalyzers;
	NSMapTable* _analyzersToEffects;
	NSMapTable* _suspendedViewsToEffectSets;
	_UIMotionEffectEventProvider* _eventProvider;
	BOOL _hasReceivedAtLeastOneEventSinceStarting;
	_UIMotionEffectEvent* _pendingEvent;
	os_unfair_lock_s _pendingEventLock;
	CADisplayLink* _displayLink;
	BOOL _generatingUpdates;
	NSMutableSet* _suspendReasons;
	_UIMotionEffectEvent* _lastEvent;
	BOOL _slowUpdatesEnabled;
	BOOL _pendingSlowDown;
	long long _eventProviderStatus;
	BOOL _allAnalyzersAreCentered;
	BOOL _hasAppliedAtLeastOneUpdateSinceStarting;
	BOOL _isPendingReset;
	int _thermalNotificationToken;
	int _screenDimmingNotificationToken;
	long long _targetInterfaceOrientation;

}

@property (assign,setter=_setTargetInterfaceOrientation:,nonatomic) long long _targetInterfaceOrientation;              //@synthesize targetInterfaceOrientation=_targetInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * suspensionReasons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_eventProviderClass;
+(Class)_analyzerClass;
+(BOOL)_motionEffectsEnabled;
+(BOOL)_motionEffectsSupported;
-(NSString *)debugDescription;
-(id)init;
-(void)dealloc;
-(BOOL)_isSuspended;
-(void)updateWithEvent:(id)arg1 ;
-(void)updateEventProviderStatus:(long long)arg1 ;
-(void)_startOrStopGeneratingUpdates;
-(void)beginSuspendingForReason:(id)arg1 ;
-(void)resetMotionAnalysis;
-(void)endSuspendingForReason:(id)arg1 ;
-(void)_stopGeneratingUpdates;
-(void)_unapplyAllEffects;
-(void)_updateDisplayLinkInterval;
-(void)_toggleSlowUpdates;
-(void)_applyEffectsFromAnalyzer:(id)arg1 ;
-(void)_handleLatestDeviceMotion;
-(BOOL)_shouldGenerateUpdates;
-(void)_startGeneratingUpdates;
-(BOOL)_hasMotionEffectsForView:(id)arg1 ;
-(id)_motionEffectsForView:(id)arg1 ;
-(void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2 ;
-(void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2 ;
-(BOOL)_motionEffectsAreSuspendedForView:(id)arg1 ;
-(void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2 ;
-(void)beginSuspendingMotionEffectsForView:(id)arg1 ;
-(void)endSuspendingMotionEffectsForView:(id)arg1 ;
-(NSArray *)suspensionReasons;
-(void)_unregisterAllMotionEffectsForView:(id)arg1 ;
-(BOOL)_motionEffect:(id)arg1 belongsToView:(id)arg2 ;
-(long long)_targetInterfaceOrientation;
-(void)_setTargetInterfaceOrientation:(long long)arg1 ;
@end

