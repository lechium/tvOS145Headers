/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMDeviceOrientationManager : NSObject {

	id _internal;

}
+(BOOL)isAvailable;
+(void)dummySelector:(id)arg1 ;
+(BOOL)isAlwaysOn;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(id)initPrivate;
-(void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)deviceOrientationBlocking;
-(void)stopDeviceOrientationUpdates;
-(void)deallocPrivate;
-(void)onDeviceOrientation:(const Sample*)arg1 ;
-(void)onMotionPreferencesUpdated;
-(void)stopDeviceOrientationUpdatesPrivate;
-(void)onNotification:(id)arg1 ;
-(void)setDeviceOrientationCallbackModePrivate:(int)arg1 ;
-(void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isDeviceOrientationAvailable;
-(void)signalAndReleaseSemaphoreIfNecessaryPrivate;
-(void)updateAggregateDictionaryPrivate;
-(BOOL)orientationNotificationsDisabled;
-(id)stringForOrientation:(int)arg1 ;
-(BOOL)isDeviceOrientationActive;
@end
