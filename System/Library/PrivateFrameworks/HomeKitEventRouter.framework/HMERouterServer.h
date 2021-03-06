/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/HomeKitEventRouter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMEEventConsumer.h>
#import <libobjc.A.dylib/HMETopicRouterDelegate.h>

@protocol OS_os_log, HMESubscriptionProviding, HMEEventForwarder, OS_dispatch_queue;
@class NSObject, NSMapTable, NSSet, HMETopicRouter;

@interface HMERouterServer : NSObject <HMEEventConsumer, HMETopicRouterDelegate> {

	NSObject*<OS_os_log> _logger;
	NSMapTable* _unregisterEvents;
	id<HMESubscriptionProviding> _subscriptionProvider;
	id<HMEEventForwarder> _localEventForwarder;
	NSSet* _accessControlTypesRequiringEnforcement;
	NSObject*<OS_dispatch_queue> _queue;
	HMETopicRouter* _topicRouter;

}

@property (readonly) NSMapTable * unregisterEvents;                                  //@synthesize unregisterEvents=_unregisterEvents - In the implementation block
@property (readonly) id<HMESubscriptionProviding> subscriptionProvider;              //@synthesize subscriptionProvider=_subscriptionProvider - In the implementation block
@property (readonly) id<HMEEventForwarder> localEventForwarder;                      //@synthesize localEventForwarder=_localEventForwarder - In the implementation block
@property (readonly) NSSet * accessControlTypesRequiringEnforcement;                 //@synthesize accessControlTypesRequiringEnforcement=_accessControlTypesRequiringEnforcement - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (readonly) HMETopicRouter * topicRouter;                                   //@synthesize topicRouter=_topicRouter - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3 requireACLEnforcementForTypes:(id)arg4 ;
-(id)dumpStateDescription;
-(void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg1 removals:(id)arg2 ;
-(HMETopicRouter *)topicRouter;
-(void)didReceiveEvent:(id)arg1 topic:(id)arg2 ;
-(void)didConnectConnection:(id)arg1 connectEvent:(id)arg2 unregisterEvent:(id)arg3 ;
-(void)didRemoveConnection:(id)arg1 ;
-(void)handleEvent:(id)arg1 topic:(id)arg2 ;
-(NSSet *)accessControlTypesRequiringEnforcement;
-(id<HMEEventForwarder>)localEventForwarder;
-(NSMapTable *)unregisterEvents;
-(id<HMESubscriptionProviding>)subscriptionProvider;
@end

