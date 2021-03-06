/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, HMFMessageReceiver;
@class NSObject, NSString, NSUUID, NSArray, HMFObjectObserver;

@interface __HMFMessageHandler : HMFObject <HMFLogging, HMFObject> {

	unsigned long long _hash;
	NSObject*<OS_dispatch_queue> _queue;
	id<HMFMessageReceiver> _receiver;
	NSString* _name;
	NSUUID* _target;
	NSArray* _policies;
	HMFObjectObserver* _observer;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (readonly) HMFObjectObserver * observer;                                //@synthesize observer=_observer - In the implementation block
@property (__weak,readonly) id<HMFMessageReceiver> receiver;                      //@synthesize receiver=_receiver - In the implementation block
@property (copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSUUID * target;                                        //@synthesize target=_target - In the implementation block
@property (copy,readonly) NSArray * policies;                                     //@synthesize policies=_policies - In the implementation block
@property (readonly) unsigned long long hash;                                     //@synthesize hash=_hash - In the implementation block
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 selector:(SEL)arg4 ;
+(id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 handler:(/*^block*/id)arg4 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)target;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)shortDescription;
-(NSArray *)policies;
-(HMFObjectObserver *)observer;
-(id<HMFMessageReceiver>)receiver;
-(id)logIdentifier;
-(NSArray *)attributeDescriptions;
-(BOOL)invokeWithMessage:(id)arg1 ;
-(id)initWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 ;
@end

