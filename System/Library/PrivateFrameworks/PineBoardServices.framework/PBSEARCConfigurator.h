/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PBSEARCObserver.h>
#import <libobjc.A.dylib/PBSEARCConfigurating.h>

@protocol OS_dispatch_queue;
@class PBSEARCConfiguratorServiceProxy, NSHashTable, NSObject, NSString;

@interface PBSEARCConfigurator : NSObject <PBSEARCObserver, PBSEARCConfigurating> {

	long long _eARCStatus;
	PBSEARCConfiguratorServiceProxy* _serviceProxy;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _cachedStatus;

}

@property (nonatomic,readonly) PBSEARCConfiguratorServiceProxy * serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue;                  //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                    //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) long long cachedStatus;                                        //@synthesize cachedStatus=_cachedStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long eARCStatus;                                        //@synthesize eARCStatus=_eARCStatus - In the implementation block
+(id)sharedInstance;
+(long long)eARCStatus;
+(void)toggleEARC:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id)_init;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(PBSEARCConfiguratorServiceProxy *)serviceProxy;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)_configureRemoteProxy:(id)arg1 ;
-(void)enableEARC:(BOOL)arg1 ;
-(void)eARCStatusChanged:(long long)arg1 ;
-(void)addEARCObserver:(id)arg1 ;
-(long long)eARCStatus;
-(void)removeEARCObserver:(id)arg1 ;
-(void)setEARCEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)cachedStatus;
-(void)setCachedStatus:(long long)arg1 ;
@end
