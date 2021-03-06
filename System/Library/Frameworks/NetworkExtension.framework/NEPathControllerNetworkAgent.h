/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NENetworkAgent.h>

@class NSMutableArray, NSString;

@interface NEPathControllerNetworkAgent : NENetworkAgent {

	BOOL updateClientsImmediately;
	BOOL _isForcedAdvisory;
	BOOL _weakAdvisory;
	BOOL _noAdvisoryTimer;
	/*^block*/id _internalAssertHandler;
	/*^block*/id _internalUnassertHandler;
	NSMutableArray* _predictedInterfaceArray;
	NSMutableArray* _advisoryInterfaceArray;
	NSString* _advisoryAgentDomain;
	NSString* _advisoryAgentType;

}

@property (copy) id internalAssertHandler;                                //@synthesize internalAssertHandler=_internalAssertHandler - In the implementation block
@property (copy) id internalUnassertHandler;                              //@synthesize internalUnassertHandler=_internalUnassertHandler - In the implementation block
@property (retain) NSMutableArray * predictedInterfaceArray;              //@synthesize predictedInterfaceArray=_predictedInterfaceArray - In the implementation block
@property (retain) NSMutableArray * advisoryInterfaceArray;               //@synthesize advisoryInterfaceArray=_advisoryInterfaceArray - In the implementation block
@property (retain) NSString * advisoryAgentDomain;                        //@synthesize advisoryAgentDomain=_advisoryAgentDomain - In the implementation block
@property (retain) NSString * advisoryAgentType;                          //@synthesize advisoryAgentType=_advisoryAgentType - In the implementation block
@property (assign) BOOL weakAdvisory;                                     //@synthesize weakAdvisory=_weakAdvisory - In the implementation block
@property (assign) BOOL noAdvisoryTimer;                                  //@synthesize noAdvisoryTimer=_noAdvisoryTimer - In the implementation block
@property (assign,nonatomic) BOOL isForcedAdvisory;                       //@synthesize isForcedAdvisory=_isForcedAdvisory - In the implementation block
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(id)copyAgentData;
-(BOOL)assertAgentWithOptions:(id)arg1 ;
-(void)unassertAgentWithOptions:(id)arg1 ;
-(BOOL)updateClientsImmediately;
-(void)setUpdateClientsImmediately:(BOOL)arg1 ;
-(void)setAdvisoryInterfaceArray:(NSMutableArray *)arg1 ;
-(void)setPredictedInterfaceArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)advisoryInterfaceArray;
-(NSMutableArray *)predictedInterfaceArray;
-(void)setWeakAdvisory:(BOOL)arg1 ;
-(void)setNoAdvisoryTimer:(BOOL)arg1 ;
-(void)setIsForcedAdvisory:(BOOL)arg1 ;
-(void)setAdvisoryAgentDomain:(NSString *)arg1 ;
-(void)setAdvisoryAgentType:(NSString *)arg1 ;
-(BOOL)weakAdvisory;
-(BOOL)noAdvisoryTimer;
-(BOOL)isForcedAdvisory;
-(NSString *)advisoryAgentDomain;
-(NSString *)advisoryAgentType;
-(id)internalAssertHandler;
-(id)internalUnassertHandler;
-(void)setInternalAssertHandler:(id)arg1 ;
-(void)setInternalUnassertHandler:(id)arg1 ;
-(void)setAssertHandler:(/*^block*/id)arg1 ;
-(void)setUnassertHandler:(/*^block*/id)arg1 ;
-(id)initWithAdvisoryInterface:(id)arg1 advisoryMode:(unsigned long long)arg2 ;
-(id)initWithAdvisoryAgentDomain:(id)arg1 agentType:(id)arg2 advisoryMode:(unsigned long long)arg3 ;
@end

