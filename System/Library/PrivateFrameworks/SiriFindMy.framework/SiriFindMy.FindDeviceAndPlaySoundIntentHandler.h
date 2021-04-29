/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriFindMy.framework/SiriFindMy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INExtension.h>
#import <libobjc.A.dylib/FindDeviceAndPlaySoundIntentHandling.h>

@interface SiriFindMy.FindDeviceAndPlaySoundIntentHandler : INExtension <FindDeviceAndPlaySoundIntentHandling> {

	 deviceState;
	 deviceLockStateProvider;
	 findDeviceSession;

}
-(id)init;
-(void)handleFindDeviceAndPlaySound:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmFindDeviceAndPlaySound:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDevicesForFindDeviceAndPlaySound:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)handlerForIntent:(id)arg1 ;
@end
