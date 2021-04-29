/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSObject, HMPendingRequests, HMDelegateCaller, HMFMessageDispatcher, HMXPCClient;

@interface _HMContext : NSObject <HMFLogging> {

	NSString* _name;
	NSDictionary* _userInfo;
	NSObject*<OS_dispatch_queue> _queue;
	HMPendingRequests* _pendingRequests;
	HMDelegateCaller* _delegateCaller;
	HMFMessageDispatcher* _messageDispatcher;
	HMXPCClient* _xpcClient;

}

@property (nonatomic,readonly) HMXPCClient * xpcClient;                               //@synthesize xpcClient=_xpcClient - In the implementation block
@property (copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSDictionary * userInfo;                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HMPendingRequests * pendingRequests;                   //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) HMDelegateCaller * delegateCaller;                     //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;              //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,readonly) HMXPCClient * messageTransport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)contextWithName:(id)arg1 ;
+(id)contextWithName:(id)arg1 userInfo:(id)arg2 delegateCaller:(id)arg3 ;
+(id)contextWithName:(id)arg1 delegateCaller:(id)arg2 ;
-(NSString *)name;
-(id)init;
-(NSDictionary *)userInfo;
-(NSObject*<OS_dispatch_queue>)queue;
-(HMPendingRequests *)pendingRequests;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(HMDelegateCaller *)delegateCaller;
-(HMXPCClient *)messageTransport;
-(id)subcontextWithName:(id)arg1 ;
-(HMXPCClient *)xpcClient;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 pendingRequests:(id)arg3 delegateCaller:(id)arg4 messageDispatcher:(id)arg5 messageTransport:(id)arg6 ;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 pendingRequests:(id)arg3 delegateCaller:(id)arg4 messageDispatcher:(id)arg5 ;
@end
