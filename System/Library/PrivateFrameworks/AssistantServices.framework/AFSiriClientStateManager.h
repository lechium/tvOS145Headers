/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, AFNotifyStatePublisher, NSMapTable, AFSafetyBlock, AFWatchdogTimer;

@interface AFSiriClientStateManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AFNotifyStatePublisher* _publisher;
	NSMapTable* _statesByClient;
	long long _transactionDepth;
	AFSafetyBlock* _presentationTransitionAssertion;
	AFWatchdogTimer* _presentationTransitionWatchdogTimer;
	NSObject*<OS_dispatch_group> _presentationTransitionGroup;

}
+(id)sharedManager;
-(void)beginTransaction;
-(void)endTransaction;
-(id)initWithInstanceContext:(id)arg1 ;
-(void)beginListeningForClient:(void*)arg1 ;
-(void)endListeningForClient:(void*)arg1 ;
-(void)beginRequestWithUUID:(id)arg1 forClient:(void*)arg2 ;
-(void)endSessionForClient:(void*)arg1 ;
-(void)endRequestWithUUID:(id)arg1 forClient:(void*)arg2 ;
-(void)invalidateClient:(void*)arg1 ;
-(void)beginSpeakingForClient:(id)arg1 ;
-(void)endSpeakingForClient:(id)arg1 ;
-(void)beginSessionForClient:(void*)arg1 ;
-(void)_removeStateForClient:(void*)arg1 ;
-(void)_beginSessionForClient:(void*)arg1 ;
-(void)_endSessionForClient:(void*)arg1 ;
-(void)_beginRequestWithUUID:(id)arg1 forClient:(void*)arg2 ;
-(void)_endRequestWithUUID:(id)arg1 forClient:(void*)arg2 ;
-(void)_beginListeningForClient:(void*)arg1 ;
-(void)_endListeningForClient:(void*)arg1 ;
-(void)_beginSpeakingForClient:(void*)arg1 ;
-(void)_endSpeakingForClient:(void*)arg1 ;
-(void)_aggregateStatesAndPublishIfNeeded;
-(void)_beginPresentationTransition;
-(void)_endPresentationTransitionForReason:(id)arg1 ;
-(unsigned long long)_aggregatedState;
-(id)_stateForClient:(void*)arg1 createIfAbsent:(BOOL)arg2 ;
-(void)beginPresentationTransition;
-(void)endPresentationTransition;
-(void)getCurrentStateWithCompletion:(/*^block*/id)arg1 ;
@end

