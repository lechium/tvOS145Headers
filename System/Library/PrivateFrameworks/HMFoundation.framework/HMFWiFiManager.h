/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFWiFiManagerDataSourceDelegate.h>

@protocol OS_dispatch_queue, HMFWiFiManagerDataSource;
@class NSString, HMFMACAddress, NSObject, NSHashTable;

@interface HMFWiFiManager : HMFObject <HMFLogging, HMFWiFiManagerDataSourceDelegate> {

	os_unfair_lock_s _lock;
	BOOL _shouldAssertWoW;
	NSString* _currentNetworkSSID;
	HMFMACAddress* _MACAddress;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMFWiFiManagerDataSource> _dataSource;
	NSHashTable* _activeAssertions;

}

@property (copy,readonly) HMFMACAddress * MACAddress;                 //@synthesize MACAddress=_MACAddress - In the implementation block
@property (copy,readonly) NSString * currentNetworkSSID; 
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)logCategory;
-(id)init;
-(BOOL)isActive;
-(HMFMACAddress *)MACAddress;
-(id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2 ;
-(void)currentNetworkDidChangeForDataSource:(id)arg1 ;
-(NSString *)currentNetworkSSID;
-(void)dataSource:(id)arg1 didChangeWoWState:(BOOL)arg2 ;
-(void)dataSource:(id)arg1 didChangeLinkAvailability:(BOOL)arg2 ;
-(id)beginActiveAssertionWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)endActiveAssertion:(id)arg1 ;
-(void)takeWoWAssertion;
-(void)releaseWoWAssertion;
@end

