/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDEventSenderInfo.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, BKSHIDEventSenderDescriptor, NSString;

@interface BKIOHIDService : NSObject <BKHIDEventSenderInfo, BSDescriptionProviding> {

	BKIOHIDService* _strongSelf;
	os_unfair_lock_s _workQueueAccessLock;
	NSObject*<OS_dispatch_queue> _workQueue_do_not_touch_directly;
	IOHIDNotificationRef _workQueue_removalNotification;
	NSMutableArray* _workQueue_disappearanceObservers;
	BOOL _authenticated;
	BOOL _builtIn;
	int _eventSource;
	unsigned _primaryUsagePage;
	unsigned _primaryUsage;
	BKSHIDEventSenderDescriptor* _senderDescriptor;
	long long _serviceStatus;
	IOHIDServiceRef _IOHIDService;
	NSString* _displayUUID;
	unsigned long long _senderID;

}

@property (assign,nonatomic) IOHIDServiceRef IOHIDService;                              //@synthesize IOHIDService=_IOHIDService - In the implementation block
@property (nonatomic,copy) NSString * displayUUID;                                      //@synthesize displayUUID=_displayUUID - In the implementation block
@property (assign,nonatomic) int eventSource;                                           //@synthesize eventSource=_eventSource - In the implementation block
@property (assign,nonatomic) unsigned long long senderID;                               //@synthesize senderID=_senderID - In the implementation block
@property (assign,nonatomic) unsigned primaryUsagePage;                                 //@synthesize primaryUsagePage=_primaryUsagePage - In the implementation block
@property (assign,nonatomic) unsigned primaryUsage;                                     //@synthesize primaryUsage=_primaryUsage - In the implementation block
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                 //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,getter=isBuiltIn,nonatomic) BOOL builtIn;                             //@synthesize builtIn=_builtIn - In the implementation block
@property (nonatomic,copy) BKSHIDEventSenderDescriptor * senderDescriptor;              //@synthesize senderDescriptor=_senderDescriptor - In the implementation block
@property (assign,nonatomic) long long serviceStatus;                                   //@synthesize serviceStatus=_serviceStatus - In the implementation block
@property (nonatomic,readonly) NSString * uniqueProductIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(unsigned long long)senderID;
-(NSString *)displayUUID;
-(void)setDisplayUUID:(NSString *)arg1 ;
-(BOOL)isAuthenticated;
-(unsigned)primaryUsage;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(BOOL)setProperties:(id)arg1 ;
-(long long)serviceStatus;
-(void)setBuiltIn:(BOOL)arg1 ;
-(BOOL)isBuiltIn;
-(int)eventSource;
-(void)setEventSource:(int)arg1 ;
-(unsigned)primaryUsagePage;
-(BKSHIDEventSenderDescriptor *)senderDescriptor;
-(void)setPrimaryUsagePage:(unsigned)arg1 ;
-(void)setPrimaryUsage:(unsigned)arg1 ;
-(void)setSenderDescriptor:(BKSHIDEventSenderDescriptor *)arg1 ;
-(void)_setUpInitialProperties;
-(id)_initForTestingWithSenderID:(unsigned long long)arg1 setUpInitialProperties:(BOOL)arg2 ;
-(id)initForSimulatorWithDisplayUUID:(id)arg1 ;
-(id)initWithHIDServiceRef:(IOHIDServiceRef)arg1 ;
-(BOOL)claimsToConformToUsagePage:(unsigned short)arg1 usage:(unsigned short)arg2 ;
-(id)propertyOfClass:(Class)arg1 forKey:(id)arg2 ;
-(void)asyncSetProperty:(id)arg1 forKey:(id)arg2 ;
-(void)asyncSetProperty:(id)arg1 forKey:(id)arg2 andDelayForSeconds:(double)arg3 ;
-(void)asyncSetProperties:(id)arg1 ;
-(int)setElementValue:(unsigned)arg1 forUsagePage:(unsigned)arg2 usage:(unsigned)arg3 ;
-(void)addDisappearanceObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeDisappearanceObserver:(id)arg1 ;
-(NSString *)uniqueProductIdentifier;
-(id)_disappearanceObservers;
-(void)_workQueue_startIOServiceRemovalNotifications;
-(void)_workQueue_stopIOServiceRemovalNotifications;
-(void)_serviceWasRemoved;
-(void)setServiceStatus:(long long)arg1 ;
-(IOHIDServiceRef)IOHIDService;
-(void)setIOHIDService:(IOHIDServiceRef)arg1 ;
@end

