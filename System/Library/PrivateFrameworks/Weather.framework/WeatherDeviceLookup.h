/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Weather/Weather-Structs.h>
@class ACAccountStore;

@interface WeatherDeviceLookup : NSObject {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)init;
-(ACAccountStore *)accountStore;
-(void)checkAllDevicesRunningMinimumiOSVersion:(SCD_Struct_We2)arg1 macOSVersion:(SCD_Struct_We2)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
