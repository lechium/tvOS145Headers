/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSceneManagerSceneDelegate.h>
#import <libobjc.A.dylib/FBWorkspaceEventDispatcherTarget.h>

@class FBSceneManagerObserver, NSMutableOrderedSet, NSMutableDictionary, NSMapTable, FBSceneEventQueue, NSMutableArray, NSString;

@interface FBSceneManager : NSObject <FBSceneManagerSceneDelegate, FBWorkspaceEventDispatcherTarget> {

	FBSceneManagerObserver* _delegateProxy;
	NSMutableOrderedSet* _observerProxies;
	unsigned long long _synchronizationBlockDepth;
	NSMutableDictionary* _scenesByID;
	NSMapTable* _providerToScenesMap;
	FBSceneEventQueue* _eventQueue;
	NSMutableArray* _pendingIdleEvents;
	BOOL _suppressConnectionHandshakeForCurrentProcess;

}

@property (assign,setter=_setSuppressConnectionHandshakeForCurrentProcess:,nonatomic) BOOL _suppressConnectionHandshakeForCurrentProcess;              //@synthesize suppressConnectionHandshakeForCurrentProcess=_suppressConnectionHandshakeForCurrentProcess - In the implementation block
@property (assign,nonatomic,__weak) id<FBSceneManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setKeyboardScene:(id)arg1 ;
+(id)keyboardScene;
+(void)_clearKeyboardScene;
+(id)observeKeyboardSceneAvailability:(/*^block*/id)arg1 ;
+(void)synchronizeChanges:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id<FBSceneManagerDelegate>)delegate;
-(void)setDelegate:(id<FBSceneManagerDelegate>)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)sceneWithIdentifier:(id)arg1 ;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)didReceiveHandshake:(id)arg1 ;
-(BOOL)_isSynchronizingSceneUpdates;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)_createSceneWithDefinition:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 transitionContext:(id)arg4 fromRemnant:(id)arg5 usingClientProvider:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_appendCommonDescriptionItemsToBuilder:(id)arg1 ;
-(void)_beginSynchronizationBlock;
-(void)_endSynchronizationBlock;
-(void)_destroyScene:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)_enqueueSceneManagerInternalObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_updateScene:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_enqueueSceneManagerObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 sceneObserverBlock:(/*^block*/id)arg3 sceneManagerObserverBlock:(/*^block*/id)arg4 ;
-(void)_enqueueEventForScene:(id)arg1 withName:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_applyMutableSettings:(id)arg1 toScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_enqueueSceneObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_eventForScene:(id)arg1 withName:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 preferInternal:(BOOL)arg3 sceneObserverBlock:(/*^block*/id)arg4 sceneManagerObserverBlock:(/*^block*/id)arg5 ;
-(void)_executeNextIdleEventIfAppropriate;
-(void)_executeEventWhenIdle:(id)arg1 ;
-(void)scene:(id)arg1 enumerateAndCalloutToObserversWithEventName:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)scene:(id)arg1 handleUpdateToSettings:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)scenesMatchingPredicate:(id)arg1 ;
-(id)scenesPassingTest:(/*^block*/id)arg1 ;
-(id)sceneFromIdentityToken:(id)arg1 ;
-(id)sceneFromIdentityTokenStringRepresentation:(id)arg1 ;
-(id)createSceneWithDefinition:(id)arg1 initialParameters:(id)arg2 ;
-(id)createSceneWithIdentifier:(id)arg1 parameters:(id)arg2 clientProvider:(id)arg3 transitionContext:(id)arg4 ;
-(id)createSceneFromRemnant:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 ;
-(id)createSceneWithIdentifier:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4 transitionContext:(id)arg5 ;
-(void)destroyScene:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)newSceneIdentityTokenForIdentity:(id)arg1 ;
-(BOOL)_suppressConnectionHandshakeForCurrentProcess;
-(void)_setSuppressConnectionHandshakeForCurrentProcess:(BOOL)arg1 ;
@end

