/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMFMessageDispatcher, NSObject, NSString;

@interface HMDSettingMessageMapper : HMFObject <HMFMessageReceiver> {

	NSUUID* _identifier;
	HMFMessageDispatcher* _messageDispatcher;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (retain) HMFMessageDispatcher * messageDispatcher;                                  //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)identifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)registerForMessage:(id)arg1 policies:(id)arg2 messageDispatcher:(id)arg3 messageHandler:(/*^block*/id)arg4 ;
-(void)deregisterFromAllMessages;
@end

