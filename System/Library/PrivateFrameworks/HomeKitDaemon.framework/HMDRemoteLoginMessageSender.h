/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDDevice, HMDAppleMediaAccessory, NSObject, HMFMessageDispatcher, NSString;

@interface HMDRemoteLoginMessageSender : HMFObject <HMFLogging> {

	NSUUID* _target;
	HMDDevice* _device;
	HMDAppleMediaAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _messageDispatcher;

}

@property (nonatomic,readonly) NSUUID * target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,__weak,readonly) HMDAppleMediaAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;               //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)target;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDDevice *)device;
-(HMDAppleMediaAccessory *)accessory;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)sendRemoteMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)initWithTarget:(id)arg1 accessory:(id)arg2 device:(id)arg3 workQueue:(id)arg4 messageDispatcher:(id)arg5 ;
@end

