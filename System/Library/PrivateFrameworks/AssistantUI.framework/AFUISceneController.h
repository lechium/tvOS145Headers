/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/FBApplicationUpdateScenesTransactionObserver.h>

@protocol AFUISceneControllerDelegate;
@class FBScene, FBApplicationUpdateScenesTransaction, BKSProcessAssertion, AFUISceneConfiguration, NSString;

@interface AFUISceneController : NSObject <FBSceneObserver, FBApplicationUpdateScenesTransactionObserver> {

	FBScene* _scene;
	FBApplicationUpdateScenesTransaction* _createTransaction;
	BKSProcessAssertion* _backgroundRunningAssertion;
	AFUISceneConfiguration* _pendingConfigurationToApply;
	BOOL _sceneForeground;
	unsigned long long _invalidationReason;
	id<AFUISceneControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFUISceneControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id<AFUISceneControllerDelegate>)delegate;
-(void)setDelegate:(id<AFUISceneControllerDelegate>)arg1 ;
-(id)_currentConfiguration;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2 ;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)requestSceneViewWithConfiguration:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)invalidateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2 ;
-(void)updateSceneViewWithConfiguration:(id)arg1 ;
-(void)cancelSceneLoadingTimeOut;
-(void)_recordSceneCreateBegin;
-(void)startSceneLoadingTimeOutTimerWithDuration:(double)arg1 ;
-(void)_recordSceneCreateEnd;
-(void)sceneLoadingTimeOutDidOccur;
@end

