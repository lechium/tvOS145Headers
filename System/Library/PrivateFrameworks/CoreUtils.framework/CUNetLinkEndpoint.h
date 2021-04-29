/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CUNetLinkEndpoint : NSObject {

	SCD_Union_CU22 _ipAddr;
	int _state;
	/*^block*/id _stateChangedHandler;
	unsigned long long _expireTime;
	unsigned long long _expiredTicks;
	BOOL _present;
	unsigned _seqNum;
	unsigned _stateChanges;
	BOOL _client;

}

@property (assign,nonatomic) /*function pointer*/void* ipAddr;              //@synthesize ipAddr=_ipAddr - In the implementation block
@property (getter=isClient,nonatomic,readonly) BOOL client;                 //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) int state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangedHandler;                          //@synthesize stateChangedHandler=_stateChangedHandler - In the implementation block
-(id)description;
-(int)state;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)stateChangedHandler;
-(void)setStateChangedHandler:(id)arg1 ;
-(/*function pointer*/void*)ipAddr;
-(void)setIpAddr:(/*function pointer*/void*)arg1 ;
-(BOOL)isClient;
@end
