/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NWNetworkAgent.h>

@protocol NENexusAgentDelegate;
@class NSUUID, NSString, NWNetworkAgentRegistration, NSObject;

@interface NENexusAgent : NSObject <NWNetworkAgent> {

	BOOL active;
	BOOL supportsBrowseRequests;
	BOOL nexusProvider;
	unsigned _frameType;
	NSUUID* agentUUID;
	NSString* agentDescription;
	NWNetworkAgentRegistration* _registration;
	NSObject*<NENexusAgentDelegate> _delegate;

}

@property (retain) NWNetworkAgentRegistration * registration;                            //@synthesize registration=_registration - In the implementation block
@property (assign) unsigned frameType;                                                   //@synthesize frameType=_frameType - In the implementation block
@property (__weak) NSObject*<NENexusAgentDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
@property (assign,nonatomic) BOOL supportsListenRequests; 
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
+(id)agentType;
+(id)agentDomain;
+(id)agentFromData:(id)arg1 ;
-(NSObject*<NENexusAgentDelegate>)delegate;
-(void)setDelegate:(NSObject*<NENexusAgentDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setFrameType:(unsigned)arg1 ;
-(unsigned)frameType;
-(NWNetworkAgentRegistration *)registration;
-(NSUUID *)agentUUID;
-(void)setSupportsBrowseRequests:(BOOL)arg1 ;
-(BOOL)supportsBrowseRequests;
-(id)copyAgentData;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(BOOL)isKernelActivated;
-(void)setKernelActivated:(BOOL)arg1 ;
-(BOOL)isUserActivated;
-(void)setUserActivated:(BOOL)arg1 ;
-(BOOL)isVoluntary;
-(void)setVoluntary:(BOOL)arg1 ;
-(BOOL)startAgentWithOptions:(id)arg1 ;
-(BOOL)assertAgentWithOptions:(id)arg1 ;
-(void)unassertAgentWithOptions:(id)arg1 ;
-(BOOL)requestNexusWithOptions:(id)arg1 ;
-(void)closeNexusWithOptions:(id)arg1 ;
-(BOOL)isSpecificUseOnly;
-(void)setSpecificUseOnly:(BOOL)arg1 ;
-(BOOL)isNetworkProvider;
-(void)setNetworkProvider:(BOOL)arg1 ;
-(BOOL)isNexusProvider;
-(void)setNexusProvider:(BOOL)arg1 ;
-(void)setRegistration:(NWNetworkAgentRegistration *)arg1 ;
@end

