/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class HMFUnfairLock, HMFTimer, NSMapTable, NSMutableSet, NSString;

@interface HMDBonjourBrowserHelper : HMFObject <NSNetServiceBrowserDelegate, HMFTimerDelegate> {

	BOOL _started;
	double _browsingInterval;
	double _browsingPeriodicity;
	HMFUnfairLock* _lock;
	HMFTimer* _browsingTimer;
	HMFTimer* _periodicityTimer;
	NSMapTable* _browsers;
	NSMutableSet* _discoveredServices;

}

@property (assign,nonatomic) double browsingInterval;                        //@synthesize browsingInterval=_browsingInterval - In the implementation block
@property (assign,nonatomic) double browsingPeriodicity;                     //@synthesize browsingPeriodicity=_browsingPeriodicity - In the implementation block
@property (nonatomic,retain) HMFUnfairLock * lock;                           //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) HMFTimer * browsingTimer;                       //@synthesize browsingTimer=_browsingTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * periodicityTimer;                    //@synthesize periodicityTimer=_periodicityTimer - In the implementation block
@property (nonatomic,retain) NSMapTable * browsers;                          //@synthesize browsers=_browsers - In the implementation block
@property (nonatomic,retain) NSMutableSet * discoveredServices;              //@synthesize discoveredServices=_discoveredServices - In the implementation block
@property (getter=isStarted,nonatomic,readonly) BOOL started;                //@synthesize started=_started - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMFUnfairLock *)lock;
-(void)start;
-(void)stop;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(BOOL)isStarted;
-(void)setLock:(HMFUnfairLock *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithServicesOfTypes:(id)arg1 browsingTimeInterval:(double)arg2 browsingPeriodicity:(double)arg3 ;
-(unsigned long long)discoveredServicesCountForServiceType:(id)arg1 ;
-(NSMutableSet *)discoveredServices;
-(void)setDiscoveredServices:(NSMutableSet *)arg1 ;
-(HMFTimer *)periodicityTimer;
-(double)browsingPeriodicity;
-(void)setPeriodicityTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)browsingTimer;
-(double)browsingInterval;
-(void)setBrowsingTimer:(HMFTimer *)arg1 ;
-(NSMapTable *)browsers;
-(void)stopBrowsers;
-(unsigned long long)discoveredServicesCount;
-(void)setBrowsingInterval:(double)arg1 ;
-(void)setBrowsingPeriodicity:(double)arg1 ;
-(void)setBrowsers:(NSMapTable *)arg1 ;
@end

