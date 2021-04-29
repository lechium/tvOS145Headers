/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SideBoardCore.framework/SideBoardCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, SIBCConnectionManager, NSUUID;

@interface SIBCEndpointSessionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _sessions;
	SIBCConnectionManager* _connectionManager;
	NSUUID* _hubIdentifier;

}

@property (nonatomic,readonly) NSUUID * hubIdentifier;              //@synthesize hubIdentifier=_hubIdentifier - In the implementation block
+(id)sessionManagerWithQueue:(id)arg1 hubIdentifier:(id)arg2 ;
-(void)_addSession:(id)arg1 ;
-(void)_removeSession:(id)arg1 ;
-(NSUUID *)hubIdentifier;
-(id)initWithQueue:(id)arg1 hubIdentifier:(id)arg2 ;
-(id)sessionWithEndpointIdentifier:(id)arg1 ;
-(id)addSessionWithEndpointIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)removeSessionWithEndpointIdentifier:(id)arg1 ;
@end
