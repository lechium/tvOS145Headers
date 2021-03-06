/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPRelayStream.h>
#import <libobjc.A.dylib/HMDRelayManagerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegateHomeKit.h>

@protocol OS_dispatch_queue;
@class HMDRelayManager, NSString, NSData, IDSService, NSObject, NSMutableArray;

@interface HMDRelayStream : HAPRelayStream <HMDRelayManagerDelegate, HMFLogging, IDSServiceDelegateHomeKit> {

	BOOL _opened;
	BOOL _suspended;
	HMDRelayManager* _relayManger;
	NSString* _accessoryIdentifier;
	NSData* _accessToken;
	NSString* _controllerIdentifier;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingSentMessageIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * controllerIdentifier;                        //@synthesize controllerIdentifier=_controllerIdentifier - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                       //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,getter=isOpened,nonatomic) BOOL opened;                                   //@synthesize opened=_opened - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingSentMessageIdentifiers;              //@synthesize pendingSentMessageIdentifiers=_pendingSentMessageIdentifiers - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                             //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,__weak,readonly) HMDRelayManager * relayManger;                        //@synthesize relayManger=_relayManger - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessoryIdentifier;                         //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * accessToken;                                   //@synthesize accessToken=_accessToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)open;
-(void)close;
-(void)resume;
-(void)setSuspended:(BOOL)arg1 ;
-(void)suspend;
-(id)writeData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isSuspended;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(unsigned long long)mtu;
-(NSData *)accessToken;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingAccessoryData:(id)arg3 fromAccessoryID:(id)arg4 context:(id)arg5 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)accessoryIdentifier;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
-(BOOL)isOpened;
-(id)logIdentifier;
-(void)_closeWithError:(id)arg1 ;
-(NSString *)controllerIdentifier;
-(void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2 ;
-(id)initWithRelayManager:(id)arg1 idsService:(id)arg2 accessoryIdentifier:(id)arg3 accessToken:(id)arg4 ;
-(void)setOpened:(BOOL)arg1 ;
-(NSMutableArray *)pendingSentMessageIdentifiers;
-(HMDRelayManager *)relayManger;
@end

