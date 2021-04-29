/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFAccessibilityState, AFAudioPlaybackRequest;

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isDeviceInSetupFlow;
	BOOL _isDeviceInCarDNDMode;
	BOOL _isDeviceInStarkMode;
	float _outputVolume;
	AFAccessibilityState* _accessibilityState;
	long long _deviceRingerSwitchState;
	AFAudioPlaybackRequest* _tapToSiriAudioPlaybackRequest;
	AFAudioPlaybackRequest* _twoShotAudioPlaybackRequest;

}

@property (nonatomic,copy,readonly) AFAccessibilityState * accessibilityState;                           //@synthesize accessibilityState=_accessibilityState - In the implementation block
@property (nonatomic,readonly) long long deviceRingerSwitchState;                                        //@synthesize deviceRingerSwitchState=_deviceRingerSwitchState - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceInSetupFlow;                                                 //@synthesize isDeviceInSetupFlow=_isDeviceInSetupFlow - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceInCarDNDMode;                                                //@synthesize isDeviceInCarDNDMode=_isDeviceInCarDNDMode - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceInStarkMode;                                                 //@synthesize isDeviceInStarkMode=_isDeviceInStarkMode - In the implementation block
@property (nonatomic,readonly) float outputVolume;                                                       //@synthesize outputVolume=_outputVolume - In the implementation block
@property (nonatomic,copy,readonly) AFAudioPlaybackRequest * tapToSiriAudioPlaybackRequest;              //@synthesize tapToSiriAudioPlaybackRequest=_tapToSiriAudioPlaybackRequest - In the implementation block
@property (nonatomic,copy,readonly) AFAudioPlaybackRequest * twoShotAudioPlaybackRequest;                //@synthesize twoShotAudioPlaybackRequest=_twoShotAudioPlaybackRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(BOOL)isDeviceInStarkMode;
-(BOOL)isDeviceInCarDNDMode;
-(id)initWithAccessibilityState:(id)arg1 deviceRingerSwitchState:(long long)arg2 isDeviceInSetupFlow:(BOOL)arg3 isDeviceInCarDNDMode:(BOOL)arg4 isDeviceInStarkMode:(BOOL)arg5 outputVolume:(float)arg6 tapToSiriAudioPlaybackRequest:(id)arg7 twoShotAudioPlaybackRequest:(id)arg8 ;
-(long long)deviceRingerSwitchState;
-(BOOL)isDeviceInSetupFlow;
-(float)outputVolume;
-(AFAccessibilityState *)accessibilityState;
-(AFAudioPlaybackRequest *)tapToSiriAudioPlaybackRequest;
-(AFAudioPlaybackRequest *)twoShotAudioPlaybackRequest;
@end

