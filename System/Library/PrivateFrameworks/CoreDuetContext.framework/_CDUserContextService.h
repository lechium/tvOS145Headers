/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_CDXPCEventPublisherDelegate.h>

@protocol _CDContextPersisting, OS_dispatch_queue;
@class _CDInMemoryUserContext, NSMutableSet, NSXPCListener, NSMutableDictionary, _CDXPCEventPublisher, NSObject, NSString;

@interface _CDUserContextService : NSObject <NSXPCListenerDelegate, _CDXPCEventPublisherDelegate> {

	BOOL _remoteDevicesHaveBeenActivated;
	id<_CDContextPersisting> _persistence;
	_CDInMemoryUserContext* _userContext;
	NSMutableSet* _clients;
	NSXPCListener* _listener;
	NSMutableSet* _openRegistrations;
	NSMutableSet* _firedRegistrations;
	NSMutableDictionary* _firedRegistrationInfos;
	_CDXPCEventPublisher* _mdcsEventPublisher;
	_CDXPCEventPublisher* _notificationEventPublisher;
	NSMutableDictionary* _mdcsEventSubscribersByToken;
	NSMutableDictionary* _notificationEventSubscribersByToken;
	NSMutableDictionary* _notificationEventSubscribersByClientIdentifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _remoteDevicesByDeviceID;

}

@property (nonatomic,retain) _CDInMemoryUserContext * userContext;                                              //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSMutableSet * clients;                                                            //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                                          //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) id<_CDContextPersisting> persistence;                                              //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,retain) NSMutableSet * openRegistrations;                                                  //@synthesize openRegistrations=_openRegistrations - In the implementation block
@property (nonatomic,retain) NSMutableSet * firedRegistrations;                                                 //@synthesize firedRegistrations=_firedRegistrations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * firedRegistrationInfos;                                      //@synthesize firedRegistrationInfos=_firedRegistrationInfos - In the implementation block
@property (nonatomic,retain) _CDXPCEventPublisher * mdcsEventPublisher;                                         //@synthesize mdcsEventPublisher=_mdcsEventPublisher - In the implementation block
@property (nonatomic,retain) _CDXPCEventPublisher * notificationEventPublisher;                                 //@synthesize notificationEventPublisher=_notificationEventPublisher - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mdcsEventSubscribersByToken;                                 //@synthesize mdcsEventSubscribersByToken=_mdcsEventSubscribersByToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationEventSubscribersByToken;                         //@synthesize notificationEventSubscribersByToken=_notificationEventSubscribersByToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationEventSubscribersByClientIdentifier;              //@synthesize notificationEventSubscribersByClientIdentifier=_notificationEventSubscribersByClientIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                            //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) BOOL remoteDevicesHaveBeenActivated;                                               //@synthesize remoteDevicesHaveBeenActivated=_remoteDevicesHaveBeenActivated - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * remoteDevicesByDeviceID;                                   //@synthesize remoteDevicesByDeviceID=_remoteDevicesByDeviceID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstanceWithPersistence:(id)arg1 ;
+(id)sharedInstanceWithSharedMemoryStore:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<_CDContextPersisting>)persistence;
-(void)start;
-(NSMutableSet *)clients;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(_CDInMemoryUserContext *)userContext;
-(void)setUserContext:(_CDInMemoryUserContext *)arg1 ;
-(void)addOpenRegistration:(id)arg1 ;
-(void)clientWasInterrupted:(id)arg1 ;
-(BOOL)remoteDevicesHaveBeenActivated;
-(void)requestActivateDevicesFromAllSubscribersWithHandler:(/*^block*/id)arg1 ;
-(void)removeOpenRegistration:(id)arg1 ;
-(id)obtainFiredRegistrationMatchingRegistration:(id)arg1 info:(id*)arg2 ;
-(NSMutableDictionary *)remoteDevicesByDeviceID;
-(void)setRemoteDevicesHaveBeenActivated:(BOOL)arg1 ;
-(id)proxySourceDeviceUUIDForUserID:(unsigned)arg1 ;
-(void)setProxySourceDeviceUUID:(id)arg1 forUserID:(unsigned)arg2 ;
-(void)sendEvent:(id)arg1 toProxy:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)addSubscriber:(id)arg1 ;
-(void)removeSubscriberWithToken:(unsigned long long)arg1 streamName:(id)arg2 ;
-(id)initWithListener:(id)arg1 withPersistence:(id)arg2 withStorage:(id)arg3 withStore:(id)arg4 ;
-(void)regenerateState;
-(void)informClientOfFiredRegistration:(id)arg1 info:(id)arg2 ;
-(void)sendEvent:(id)arg1 toClient:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)subscriberForSourceDeviceUUID:(id)arg1 ;
-(id)subscribersForClientIdentifier:(id)arg1 ;
-(BOOL)setMappingObject:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(void)addProxyWithSourceDeviceUUID:(id)arg1 ;
-(unsigned long long)tokenForSourceDeviceUUID:(id)arg1 ;
-(void)setToken:(unsigned long long)arg1 forUserID:(unsigned)arg2 ;
-(void)fetchProxySourceDeviceUUIDFromSubscriber:(id)arg1 ;
-(void)requestActivateDevicesFromSubscriber:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeTokenForUserID:(unsigned)arg1 ;
-(id)initWithListener:(id)arg1 withStorage:(id)arg2 withStore:(id)arg3 ;
-(void)deleteSavedData;
-(void)sendEvent:(id)arg1 toProxy:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendEvent:(id)arg1 toClient:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)setPersistence:(id<_CDContextPersisting>)arg1 ;
-(NSMutableSet *)openRegistrations;
-(void)setOpenRegistrations:(NSMutableSet *)arg1 ;
-(NSMutableSet *)firedRegistrations;
-(void)setFiredRegistrations:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)firedRegistrationInfos;
-(void)setFiredRegistrationInfos:(NSMutableDictionary *)arg1 ;
-(_CDXPCEventPublisher *)mdcsEventPublisher;
-(void)setMdcsEventPublisher:(_CDXPCEventPublisher *)arg1 ;
-(_CDXPCEventPublisher *)notificationEventPublisher;
-(void)setNotificationEventPublisher:(_CDXPCEventPublisher *)arg1 ;
-(NSMutableDictionary *)mdcsEventSubscribersByToken;
-(void)setMdcsEventSubscribersByToken:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)notificationEventSubscribersByToken;
-(void)setNotificationEventSubscribersByToken:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)notificationEventSubscribersByClientIdentifier;
-(void)setNotificationEventSubscribersByClientIdentifier:(NSMutableDictionary *)arg1 ;
@end

