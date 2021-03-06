/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDAccessoryFirmwareUpdateManagerWingman.h>
@class UARPController;


@protocol HMDAccessoryFirmwareUpdateManagerWingman
@property (nonatomic,readonly) UARPController * uarpController; 
@required
-(UARPController *)uarpController;
-(id)newAccessoryFirmwareUpdateSessionWithHAPAccessory:(id)arg1 uarpAccessory:(id)arg2 accessoryFirmwareUpdateManager:(id)arg3 logEventManager:(id)arg4;

@end


@class UARPController;

@interface HMDAccessoryFirmwareUpdateManagerWingman : NSObject <HMDAccessoryFirmwareUpdateManagerWingman> {

	UARPController* _uarpController;

}

@property (nonatomic,readonly) UARPController * uarpController;              //@synthesize uarpController=_uarpController - In the implementation block
-(id)init;
-(UARPController *)uarpController;
-(id)newAccessoryFirmwareUpdateSessionWithHAPAccessory:(id)arg1 uarpAccessory:(id)arg2 accessoryFirmwareUpdateManager:(id)arg3 logEventManager:(id)arg4 ;
@end

