/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking, OS_dispatch_queue;
@class HMDHomeConfigurationLogEvent, NSObject, NSMapTable, HMDLogEventContextProvider;

@interface HMDLogEventDispatcher : HMFObject {

	id<HMFLocking> _lock;
	HMDHomeConfigurationLogEvent* _cachedHomeConfiguration;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMapTable* _logEventObserversByClass;
	unsigned long long _cachedHomeConfigurationVersion;
	HMDLogEventContextProvider* _logEventContextProvider;

}

@property (nonatomic,readonly) NSMapTable * logEventObserversByClass;                             //@synthesize logEventObserversByClass=_logEventObserversByClass - In the implementation block
@property (assign,nonatomic) unsigned long long cachedHomeConfigurationVersion;                   //@synthesize cachedHomeConfigurationVersion=_cachedHomeConfigurationVersion - In the implementation block
@property (nonatomic,readonly) HMDLogEventContextProvider * logEventContextProvider;              //@synthesize logEventContextProvider=_logEventContextProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) HMDHomeConfigurationLogEvent * cachedHomeConfiguration;              //@synthesize cachedHomeConfiguration=_cachedHomeConfiguration - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)submitLogEvent:(id)arg1 ;
-(void)submitLogEvent:(id)arg1 error:(id)arg2 ;
-(void)addObserver:(id)arg1 forEventClasses:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEventClass:(Class)arg2 ;
-(HMDHomeConfigurationLogEvent *)cachedHomeConfiguration;
-(NSMapTable *)logEventObserversByClass;
-(HMDLogEventContextProvider *)logEventContextProvider;
-(void)setCachedHomeConfiguration:(HMDHomeConfigurationLogEvent *)arg1 ;
-(void)addObserver:(id)arg1 forEventClass:(Class)arg2 ;
-(unsigned long long)cachedHomeConfigurationVersion;
-(void)setCachedHomeConfigurationVersion:(unsigned long long)arg1 ;
@end

