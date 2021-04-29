/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableSet, NSSet;

@interface VCHardwareSettings : NSObject {

	int _supportHEVC;
	BOOL _supportVCPEncoderInitialized;
	BOOL _supportVCPEncoder;
	NSMutableDictionary* _hardwareUsageModeSettings;
	NSMutableSet* _pixelFormatCollections;

}

@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) BOOL isVideoRenderingSupported; 
@property (nonatomic,readonly) NSSet * pixelFormatCollections;              //@synthesize pixelFormatCollections=_pixelFormatCollections - In the implementation block
+(long long)deviceClass;
+(unsigned)maxRemoteParticipants30fps;
+(unsigned)builtinMicCount;
+(BOOL)supportsCFraming;
-(id)init;
-(void)dealloc;
-(BOOL)supportHEVC;
-(BOOL)vcpSupportsHEVCEncoder;
-(unsigned)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)arg1 ;
-(BOOL)isHEVCEncodeSupported:(int)arg1 ;
-(BOOL)isHEVCDecodeSupported:(int)arg1 ;
-(unsigned)tilesPerVideoFrame:(int)arg1 hdrMode:(unsigned long long)arg2 ;
-(unsigned)tilesPerVideoFrame:(int)arg1 ;
-(BOOL)isVideoRenderingSupported;
-(NSSet *)pixelFormatCollections;
-(id)featureListStringForH264:(int)arg1 ;
-(id)featureListStringForHEVC:(int)arg1 ;
-(BOOL)storeHardwareSettingsForAllOperatingModes;
-(unsigned)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)arg1 ;
@end

