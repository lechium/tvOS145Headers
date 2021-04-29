/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDAccessoryFirmwareUpdateSchedulerWingman.h>
@class NSNotificationCenter;


@protocol HMDAccessoryFirmwareUpdateSchedulerWingman
@property (readonly) NSNotificationCenter * notificationCenter; 
@required
-(NSNotificationCenter *)notificationCenter;
-(id)newBackgroundSchedulerWithIdentifier:(id)arg1;
-(id)policyForAccessory:(id)arg1 sessionState:(unsigned long long)arg2 workQueue:(id)arg3;
-(id)newInitialDelayTimerWithDelay:(double)arg1 options:(unsigned long long)arg2;

@end


@class NSNotificationCenter;

@interface HMDAccessoryFirmwareUpdateSchedulerWingman : NSObject <HMDAccessoryFirmwareUpdateSchedulerWingman>

@property (readonly) NSNotificationCenter * notificationCenter; 
-(NSNotificationCenter *)notificationCenter;
-(id)newBackgroundSchedulerWithIdentifier:(id)arg1 ;
-(id)policyForAccessory:(id)arg1 sessionState:(unsigned long long)arg2 workQueue:(id)arg3 ;
-(id)newInitialDelayTimerWithDelay:(double)arg1 options:(unsigned long long)arg2 ;
@end
