/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLowPowerModeMonitor : VTEventMonitor {

	unsigned char _powerMode;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveLowPowerModeChanged;
-(unsigned char)_checkPowerMode;
-(void)_didReceiveLowPowerModeChangedInQueue:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withPowerMode:(unsigned char)arg2 ;
-(unsigned char)powerMode;
-(BOOL)isLowPowerMode;
@end

