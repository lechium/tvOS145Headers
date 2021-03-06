/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking;
@interface HMDDeviceSetupManager : HMFObject {

	id<HMFLocking> _lock;
	int _proxSetupNotificationToken;
	BOOL _running;

}

@property (getter=isRunning,readonly) BOOL running;              //@synthesize running=_running - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(BOOL)isRunning;
-(void)stopAdvertising;
-(id)followUpController;
-(void)startAdvertising;
@end

