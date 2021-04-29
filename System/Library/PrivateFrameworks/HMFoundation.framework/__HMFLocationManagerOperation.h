/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFOperation.h>
#import <HMFoundation/HMFLogging.h>

@class CLLocationManager, HMFLocationAuthorization, NSString;

@interface __HMFLocationManagerOperation : HMFOperation <HMFLogging> {

	os_unfair_lock_s _lock;
	BOOL _ready;
	CLLocationManager* _manager;
	HMFLocationAuthorization* _authorization;

}

@property (readonly) HMFLocationAuthorization * authorization;              //@synthesize authorization=_authorization - In the implementation block
@property (readonly) CLLocationManager * manager;                           //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)main;
-(BOOL)isReady;
-(CLLocationManager *)manager;
-(HMFLocationAuthorization *)authorization;
-(id)initWithTimeout:(double)arg1 ;
-(id)initWithAuthorization:(id)arg1 ;
@end
