/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {

	NSArray* _deviceTypes;
	long long _position;
	NSString* _mediaType;
	NSArray* _devices;
	NSArray* _supportedMultiCamDeviceSets;

}

@property (nonatomic,readonly) NSArray * devices;                                  //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) NSArray * supportedMultiCamDeviceSets; 
+(void)initialize;
+(id)allDevices;
+(id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
+(id)allDeviceTypes;
+(id)allVideoDeviceTypes;
+(id)allPointCloudDeviceTypes;
+(id)allAudioDeviceTypes;
+(id)allVirtualDeviceTypes;
+(id)allVideoDevices;
+(id)allPointCloudDevices;
+(id)allAudioDevices;
+(id)allVirtualDevices;
+(id)allSupportedMultiCamDeviceSets;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSArray *)devices;
-(id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 allowIOSMacEnvironment:(BOOL)arg4 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)arg5 ;
-(void)_handleDeviceConnectedDisconnectedNotification:(id)arg1 ;
-(NSArray *)supportedMultiCamDeviceSets;
@end
