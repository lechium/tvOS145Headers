/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVServices/TVServices-Structs.h>
@interface TVSBluetoothRemoteUtilities : NSObject
+(void)startConnectionMonitoring;
+(void)startListeningForPowerSources;
+(void)stopConnectionMonitoring;
+(void)stopListeningForPowerSources;
+(void)setAdvertiseNonConnectable:(BOOL)arg1 ;
+(long long)batteryLevelForRemoteName:(id)arg1 ;
+(BOOL)chargingStateForRemoteName:(id)arg1 ;
+(long long)remoteTypeOverride;
+(id)_mostRecentConnectedRemote;
+(id)_connectedRemotesWithRemoteType:(long long)arg1 ;
+(void)disconnectRemoteWithName:(id)arg1 ;
+(id)powerSourceInfoForRemoteName:(id)arg1 ;
+(id)_connectedRemotes;
+(id)bluetoothRemoteWithName:(id)arg1 ;
+(id)existingBluetoothRemoteWithName:(id)arg1 ;
+(id)connectedBluetoothRemote;
+(BOOL)isAnyRemoteConnected;
+(void)setConnectionKeepAliveTimeInSeconds:(double)arg1 ;
+(void)disconnectAllRemotesAndKeepPaired;
+(void)setPresenceDetectionEnabled:(BOOL)arg1 ;
+(void)resetToFactoryDefault;
+(BOOL)isB239ButtonEvent:(IOHIDEventRef)arg1 ;
@end

