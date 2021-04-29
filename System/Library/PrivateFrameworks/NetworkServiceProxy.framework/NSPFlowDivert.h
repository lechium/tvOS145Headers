/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEAppProxyProviderContainer.h>

@class NSPConfiguration, NEPolicySession, NEFlowDivertFileHandle;

@interface NSPFlowDivert : NEAppProxyProviderContainer {

	BOOL _shouldResetPolicies;
	BOOL _started;
	NSPConfiguration* _configuration;
	NEPolicySession* _policySession;
	NEFlowDivertFileHandle* _flowDivertControlHandle;
	NEFlowDivertFileHandle* _flowDivertDataHandle;

}

@property (retain) NEPolicySession * policySession;                               //@synthesize policySession=_policySession - In the implementation block
@property (retain) NEFlowDivertFileHandle * flowDivertControlHandle;              //@synthesize flowDivertControlHandle=_flowDivertControlHandle - In the implementation block
@property (retain) NEFlowDivertFileHandle * flowDivertDataHandle;                 //@synthesize flowDivertDataHandle=_flowDivertDataHandle - In the implementation block
@property (assign) BOOL started;                                                  //@synthesize started=_started - In the implementation block
@property (assign) BOOL shouldResetPolicies;                                      //@synthesize shouldResetPolicies=_shouldResetPolicies - In the implementation block
@property (nonatomic,retain) NSPConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
-(NSPConfiguration *)configuration;
-(void)stop;
-(void)setConfiguration:(NSPConfiguration *)arg1 ;
-(BOOL)started;
-(void)addPolicy:(id)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)teardown;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NEPolicySession *)policySession;
-(void)setPolicySession:(NEPolicySession *)arg1 ;
-(NEFlowDivertFileHandle *)flowDivertControlHandle;
-(id)createFlowDivertSocketHandles;
-(void)setFlowDivertControlHandle:(NEFlowDivertFileHandle *)arg1 ;
-(id)createPolicySession;
-(void)setShouldResetPolicies:(BOOL)arg1 ;
-(void)setFlowDivertDataHandle:(NEFlowDivertFileHandle *)arg1 ;
-(id)getAgentResults:(id)arg1 ;
-(BOOL)shouldInstallFlowDivert:(id)arg1 ;
-(id)getExecutableConditions:(id)arg1 ;
-(void)addPoliciesForDivertDNSOnly:(id)arg1 domainConditions:(id)arg2 divertResult:(id)arg3 ;
-(void)addPoliciesForAgent:(id)arg1 conditions:(id)arg2 ;
-(id)getEffectiveAppRules:(id)arg1 ;
-(id)getAgentResultsForSelf;
-(BOOL)resetPolicies:(BOOL)arg1 ;
-(void)destroyFlowDivertSocketHandles;
-(void)destroyPolicySession;
-(BOOL)shouldResetPolicies;
-(id)initWithDelegate:(id)arg1 providerClass:(Class)arg2 configuration:(id)arg3 ;
-(void)didStartWithError:(id)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(NEFlowDivertFileHandle *)flowDivertDataHandle;
@end

