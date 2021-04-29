/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ATEnvironmentMonitorObserver.h>

@class ATEnvironmentMonitor, NSString;

@interface ATHostWakeupService : NSObject <ATEnvironmentMonitorObserver> {

	ATEnvironmentMonitor* _environmentMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)start;
-(void)stop;
-(void)environmentMonitorDidChangePower:(id)arg1 ;
-(void)_wakeupHost:(id)arg1 ;
-(void)sendWakeupToAllHostsWithCompletion:(/*^block*/id)arg1 ;
-(void)sendWakeupToHostWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getWakeableHostsWithCompletion:(/*^block*/id)arg1 ;
@end
