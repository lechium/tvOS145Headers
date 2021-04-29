/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBSSceneHandle.h>
#import <libobjc.A.dylib/FBSSceneAgentProxy.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSceneHost, FBSSceneHostAgent;
@class NSString, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings, NSMutableArray, FBProcess, FBWorkspace, FBSSerialQueue;

@interface FBWorkspaceScene : NSObject <FBSSceneHandle, FBSSceneAgentProxy, BSDescriptionProviding> {

	os_unfair_lock_s _lock;
	id<FBSceneHost> _host;
	NSString* _identifier;
	NSString* _group;
	FBSSceneSpecification* _specification;
	FBSSceneSettings* _lock_settings;
	FBSSceneClientSettings* _lock_clientSettings;
	NSMutableArray* _lock_sceneCreatedBlocks;
	BOOL _lock_sentSceneCreate;
	BOOL _fromRemnant;
	BOOL _lock_invalidated;
	id<FBSSceneHostAgent> _hostAgent;
	NSMutableArray* _agentSessions;
	FBProcess* _process;
	FBWorkspace* _workspace;
	FBSSerialQueue* _workspaceQueue;
	unsigned char _lock_lifecycleState;

}

@property (nonatomic,__weak,readonly) FBWorkspace * parentWorkspace;                    //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSceneHost> host;                             //@synthesize host=_host - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSettings * settings; 
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)debugDescription;
-(void)dealloc;
-(void)invalidate;
-(id<FBSceneHost>)host;
-(NSString *)identifier;
-(id)parameters;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(FBSSceneSpecification *)specification;
-(FBSSceneSettings *)settings;
-(id)callOutQueue;
-(id)hostProcess;
-(id)counterpartAgent;
-(id)clientProcess;
-(id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2 ;
-(id)sessionForIdentifier:(id)arg1 ;
-(void)closeSession:(id)arg1 ;
-(void)agent:(id)arg1 registerMessageHandler:(/*^block*/id)arg2 ;
-(void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(id)initWithParentWorkspace:(id)arg1 host:(id)arg2 ;
-(void)configureFromRemnant:(BOOL)arg1 withSpecification:(id)arg2 settings:(id)arg3 initialClientSettings:(id)arg4 ;
-(void)_workspaceQueue_invalidate;
-(void)_workspaceQueue_sendUpdateToClient:(id)arg1 settingsDiff:(id)arg2 transitionContext:(id)arg3 responseEventHandler:(/*^block*/id)arg4 ;
-(void)_workspaceQueue_sendMessageToClient:(/*^block*/id)arg1 ;
-(void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)arg1 ;
-(void)_workspaceQueue_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_workspaceQueue_handleInvalidationWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FBWorkspace *)parentWorkspace;
@end

