/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDSnapshotRequestHandlerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface HMDSnapshotCacheRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDSnapshotRequestHandlerProtocol> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _snapshotCacheMap;
	NSString* _logIdentifier;

}

@property (nonatomic,readonly) NSString * logIdentifier;              //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithWorkQueue:(id)arg1 logID:(id)arg2 ;
-(void)addSnapshotFileToCache:(id)arg1 ;
-(void)removeSnapshotFileToCache:(id)arg1 error:(id)arg2 ;
-(void)setSnapshotFileToCache:(id)arg1 proactiveSessionID:(id)arg2 ;
@end

