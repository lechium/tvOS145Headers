/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>

@class HMDCameraSessionID, HMDAccessory;

@interface HMDCameraMetricsLogEvent : HMDLogEvent {

	BOOL _isLocal;
	HMDCameraSessionID* _sessionID;
	HMDAccessory* _accessory;

}

@property (nonatomic,readonly) HMDCameraSessionID * sessionID;               //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (readonly) BOOL isLocal;                                           //@synthesize isLocal=_isLocal - In the implementation block
-(HMDCameraSessionID *)sessionID;
-(BOOL)isLocal;
-(HMDAccessory *)accessory;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 ;
@end

