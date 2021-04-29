/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SASPresentationManagerDelegate;
@class NSMutableDictionary;

@interface SASPresentationManager : NSObject {

	BOOL _lastReportedShouldRejectNewActivations;
	id<SASPresentationManagerDelegate> _presentationManagerDelegate;
	NSMutableDictionary* _presentations;

}

@property (nonatomic,retain) NSMutableDictionary * presentations;              //@synthesize presentations=_presentations - In the implementation block
+(BOOL)_canTransitionFromState:(long long)arg1 toState:(long long)arg2 presentationIdentifier:(long long)arg3 ;
+(BOOL)_canTransitionToOffFromState:(long long)arg1 ;
+(BOOL)_canTransitionToHeatedFromState:(long long)arg1 ;
+(BOOL)_canTransitionToStoppingFromState:(long long)arg1 ;
+(BOOL)_canTransitionToStartingFromState:(long long)arg1 ;
+(BOOL)_canTransitionToActiveFromState:(long long)arg1 presentationIdentifier:(long long)arg2 ;
+(BOOL)_shouldKeepPingingForRequestState:(long long)arg1 ;
+(BOOL)_canTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(id)init;
-(long long)requestState;
-(void)pongWithPresentationIdentifier:(long long)arg1 ;
-(void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)setPresentationManagerDelegate:(id)arg1 ;
-(void)unregisterSiriPresentationWithIdentifier:(long long)arg1 ;
-(void)presentationWithPresentationIdentifierBecameActive:(long long)arg1 ;
-(void)presentationWithPresentationIdentifierBeganStopping:(long long)arg1 ;
-(void)presentationWithPresentationIdentifierBecameOff:(long long)arg1 ;
-(BOOL)activePresentationsAreIdleAndQuiet;
-(void)cancelAllPreheatedPresentations;
-(void)sendButtonEventCompletionToPresentations:(/*^block*/id)arg1 ;
-(long long)nextPresentationToActivate;
-(void)activePresentations_handleRequestWithOptions:(id)arg1 ;
-(void)presentationWithPresentationIdentifier:(long long)arg1 activationDeterminedShouldDeferWake:(BOOL)arg2 ;
-(void)presentationWithPresentationIdentifierBeganStarting:(long long)arg1 ;
-(void)presentationRequestedWithPresentationIdentifier:(long long)arg1 presentationOptions:(id)arg2 requestOptions:(id)arg3 ;
-(void)startingAndActiveAndStoppingPresentations_presentationDismissalRequestedWithOptions:(id)arg1 ;
-(void)activePresentations_cancelTTS;
-(void)preheatNextPresentationToActivate;
-(void)startingPresentations_cancelPendingActivationWithReason:(unsigned long long)arg1 ;
-(void)activePresentations_deviceWonMyriadElection;
-(void)activeAndStartingPresentations_updateCurrentLockState:(unsigned long long)arg1 ;
-(void)activePresentations_bulletinManagerDidChangeBulletins;
-(void)_presentationsLock_cancelAllPreheatedPresentations;
-(void)_notifyDelegateOfShouldRejectNewActivationsChangeIfNecessary;
-(long long)_presentationsLock_nextPresentationToActivate;
-(BOOL)_shouldRejectNewActivations;
-(void)_sendBlockToActivePresentations:(/*^block*/id)arg1 ;
-(void)_sendBlockToStartingPresentations:(/*^block*/id)arg1 ;
-(void)_sendBlockToStoppingPresentations:(/*^block*/id)arg1 ;
-(void)_transitionPresentationWithPresentationIdentifier:(long long)arg1 toState:(long long)arg2 ;
-(void)_setupPingTimerForPresentationIdentifier:(long long)arg1 ;
-(void)_teardownPingTimerForPresentationIdentifier:(long long)arg1 ;
-(void)_sendBlock:(/*^block*/id)arg1 toPresentationWithPresentationIdentifier:(long long)arg2 ;
-(void)_waitForPongFromPresentationWithPresentationIdentifier:(long long)arg1 ;
-(void)_forceAllPresentationsOff;
-(void)activeSpringBoardPresentation_updateActiveInterfaceOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 ;
-(void)presentationWithPresentationIdentifierWakeScreenAfterActivation:(long long)arg1 reason:(id)arg2 ;
-(NSMutableDictionary *)presentations;
-(void)setPresentations:(NSMutableDictionary *)arg1 ;
@end

