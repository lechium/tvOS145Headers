/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCControllerProfile.h>

@class NSString;

@interface _GCSonyDualSenseControllerProfile : NSObject <_GCControllerProfile>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceManager;
+(void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2 ;
+(void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2 ;
+(id)logicalDeviceControllerProductCategory:(id)arg1 ;
+(id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2 ;
+(void)physicalDevice:(id)arg1 getBatteryWithReply:(/*^block*/id)arg2 ;
+(id)physicalDeviceGetHapticCapabilities:(id)arg1 ;
+(id)physicalDeviceGetHapticCapabilityGraph:(id)arg1 ;
+(id)logicalDevice:(id)arg1 makeControllerMotionWithIdentifier:(id)arg2 ;
+(void)physicalDevice:(id)arg1 getLightWithReply:(/*^block*/id)arg2 ;
+(void)physicalDevice:(id)arg1 setLight:(id)arg2 ;
+(BOOL)physicalDeviceSupportsMotion:(id)arg1 ;
+(void)physicalDevice:(id)arg1 getSensorsEnabledWithReply:(/*^block*/id)arg2 ;
+(void)physicalDevice:(id)arg1 setSensorsActive:(BOOL)arg2 ;
+(void)physicalDevice:(id)arg1 setAdaptiveTriggersPayload:(id)arg2 forIndex:(int)arg3 ;
+(void)physicalDevice:(id)arg1 getAdaptiveTriggersStatusesWithReply:(/*^block*/id)arg2 ;
+(long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1 ;
+(void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2 ;
@end

