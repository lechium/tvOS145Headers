/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TSClockClient.h>

@protocol OS_dispatch_semaphore;
@class NSData, TSgPTPClock, NSString, NSObject, CUMessageSession;

@interface TVLTimeSync : NSObject <TSClockClient> {

	BOOL _master;
	unsigned _IPv4;
	NSData* _IPv6;
	TSgPTPClock* _clock;
	NSString* _networkInterfaceName;
	NSObject*<OS_dispatch_semaphore> _waitForPTPLock;
	CUMessageSession* _session;

}

@property (assign,nonatomic) unsigned IPv4;                                      //@synthesize IPv4=_IPv4 - In the implementation block
@property (nonatomic,copy) NSData * IPv6;                                        //@synthesize IPv6=_IPv6 - In the implementation block
@property (nonatomic,retain) TSgPTPClock * clock;                                //@synthesize clock=_clock - In the implementation block
@property (nonatomic,copy) NSString * networkInterfaceName;                      //@synthesize networkInterfaceName=_networkInterfaceName - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> waitForPTPLock;              //@synthesize waitForPTPLock=_waitForPTPLock - In the implementation block
@property (nonatomic,retain) CUMessageSession * session;                         //@synthesize session=_session - In the implementation block
@property (assign,getter=isMaster,nonatomic) BOOL master;                        //@synthesize master=_master - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)invalidate;
+(void)timeSyncWithRemoteIPv4:(id)arg1 IPv6:(id)arg2 interface:(id)arg3 session:(id)arg4 master:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)invalidate;
-(CUMessageSession *)session;
-(void)setSession:(CUMessageSession *)arg1 ;
-(BOOL)isMaster;
-(TSgPTPClock *)clock;
-(NSString *)networkInterfaceName;
-(void)setNetworkInterfaceName:(NSString *)arg1 ;
-(void)setMaster:(BOOL)arg1 ;
-(void)didChangeClockMasterForClock:(id)arg1 ;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2 ;
-(void)setClock:(TSgPTPClock *)arg1 ;
-(id)initWithRemoteIPv4:(id)arg1 IPv6:(id)arg2 interface:(id)arg3 ;
-(void)_startPTPWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSData *)IPv6;
-(unsigned)IPv4;
-(void)setWaitForPTPLock:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)waitForPTPLock;
-(void)negotiateGrandmasterIdentityAttempt:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_clearWaitForPTPClock;
-(void)setIPv4:(unsigned)arg1 ;
-(void)setIPv6:(NSData *)arg1 ;
-(unsigned long long)convertToHostTimeFromDomainTime:(unsigned long long)arg1 grandmasterIdentity:(unsigned long long*)arg2 ;
-(unsigned long long)convertToDomainTimeFromHostTime:(unsigned long long)arg1 grandmasterIdentity:(unsigned long long*)arg2 ;
@end

