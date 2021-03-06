/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMXPCMessageTransport.h>

@class HMXPCClient, NSString;

@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCMessageTransport> {

	HMXPCClient* _client;
	/*^block*/id _refreshHandler;

}

@property (__weak) HMXPCClient * client;                            //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) id refreshHandler;                       //@synthesize refreshHandler=_refreshHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMXPCClient *)client;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setClient:(HMXPCClient *)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(void)handleMessage:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)refreshHandler;
-(void)fetchUserInfo:(/*^block*/id)arg1 ;
-(id)initWithRefreshHandler:(/*^block*/id)arg1 ;
-(void)setRefreshHandler:(id)arg1 ;
@end

