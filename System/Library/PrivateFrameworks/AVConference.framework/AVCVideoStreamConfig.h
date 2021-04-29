/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AVCVideoStreamConfig : NSObject {

	long long _txCodecType;
	long long _rxCodecType;
	long long _videoResolution;
	unsigned long long _framerate;
	unsigned long long _txMaxBitrate;
	unsigned long long _txMinBitrate;
	unsigned long long _rxMaxBitrate;
	unsigned long long _rxMinBitrate;
	NSString* _txCodecFeatureListString;
	NSString* _rxCodecFeatureListString;
	unsigned long long _keyFrameInterval;
	int _remoteVideoInitialOrientation;
	BOOL _enableCVO;
	unsigned long long _cvoExtensionID;
	BOOL _isVideoProtected;
	long long _videoStreamMode;
	long long _captureSource;
	unsigned long long _screenDisplayID;
	unsigned long long _customWidth;
	unsigned long long _customHeight;
	unsigned long long _tilesPerFrame;
	unsigned _pixelFormat;
	BOOL _ltrpEnabled;
	unsigned long long _hdrMode;
	NSString* _remoteDeviceName;
	BOOL _latencySensitiveModeEnabled;

}

@property (assign,nonatomic) long long txCodecType;                                                              //@synthesize txCodecType=_txCodecType - In the implementation block
@property (assign,nonatomic) long long rxCodecType;                                                              //@synthesize rxCodecType=_rxCodecType - In the implementation block
@property (assign,nonatomic) long long videoResolution;                                                          //@synthesize videoResolution=_videoResolution - In the implementation block
@property (assign,nonatomic) unsigned long long framerate;                                                       //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) unsigned long long txMaxBitrate;                                                    //@synthesize txMaxBitrate=_txMaxBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long txMinBitrate;                                                    //@synthesize txMinBitrate=_txMinBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long rxMaxBitrate;                                                    //@synthesize rxMaxBitrate=_rxMaxBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long rxMinBitrate;                                                    //@synthesize rxMinBitrate=_rxMinBitrate - In the implementation block
@property (nonatomic,retain) NSString * rxCodecFeatureListString;                                                //@synthesize rxCodecFeatureListString=_rxCodecFeatureListString - In the implementation block
@property (nonatomic,retain) NSString * txCodecFeatureListString;                                                //@synthesize txCodecFeatureListString=_txCodecFeatureListString - In the implementation block
@property (assign,nonatomic) unsigned long long keyFrameInterval;                                                //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (assign,nonatomic) int remoteVideoInitialOrientation;                                                  //@synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation - In the implementation block
@property (assign,nonatomic) BOOL enableCVO;                                                                     //@synthesize enableCVO=_enableCVO - In the implementation block
@property (assign,nonatomic) unsigned long long cvoExtensionID;                                                  //@synthesize cvoExtensionID=_cvoExtensionID - In the implementation block
@property (assign,nonatomic) BOOL isVideoProtected;                                                              //@synthesize isVideoProtected=_isVideoProtected - In the implementation block
@property (assign,nonatomic) long long videoStreamMode;                                                          //@synthesize videoStreamMode=_videoStreamMode - In the implementation block
@property (assign,nonatomic) long long captureSource;                                                            //@synthesize captureSource=_captureSource - In the implementation block
@property (assign,nonatomic) unsigned long long screenDisplayID;                                                 //@synthesize screenDisplayID=_screenDisplayID - In the implementation block
@property (assign,nonatomic) unsigned long long customWidth;                                                     //@synthesize customWidth=_customWidth - In the implementation block
@property (assign,nonatomic) unsigned long long customHeight;                                                    //@synthesize customHeight=_customHeight - In the implementation block
@property (assign,nonatomic) unsigned long long tilesPerFrame;                                                   //@synthesize tilesPerFrame=_tilesPerFrame - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                                                               //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,getter=isLTRPEnabled,nonatomic) BOOL ltrpEnabled;                                              //@synthesize ltrpEnabled=_ltrpEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long hdrMode;                                                         //@synthesize hdrMode=_hdrMode - In the implementation block
@property (nonatomic,retain) NSString * remoteDeviceName;                                                        //@synthesize remoteDeviceName=_remoteDeviceName - In the implementation block
@property (assign,getter=isLatencySensitiveModeEnabled,nonatomic) BOOL latencySensitiveModeEnabled;              //@synthesize latencySensitiveModeEnabled=_latencySensitiveModeEnabled - In the implementation block
+(long long)clientCodecTypeWithCodecType:(long long)arg1 ;
+(long long)codecTypeWithClientCodecType:(long long)arg1 ;
+(BOOL)isPixelFormatValid:(unsigned)arg1 hdrMode:(unsigned long long)arg2 ;
+(long long)clientVideoResolutionFromResolution:(long long)arg1 ;
+(long long)clientVideoStreamModeFromVideoStreamType:(long long)arg1 ;
+(long long)clientVideoCaptureSourceFromCaptureSource:(int)arg1 ;
+(long long)videoResolutionFromClientResolution:(long long)arg1 ;
+(long long)videoStreamTypeFromClientVideoStreamMode:(long long)arg1 ;
+(int)videoCaptureSourceFromClientCaptureSource:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)dictionary;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(unsigned long long)hdrMode;
-(void)setHdrMode:(unsigned long long)arg1 ;
-(NSString *)remoteDeviceName;
-(void)setRemoteDeviceName:(NSString *)arg1 ;
-(void)setVideoResolution:(long long)arg1 ;
-(long long)videoResolution;
-(unsigned long long)framerate;
-(unsigned long long)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned long long)arg1 ;
-(unsigned long long)txMaxBitrate;
-(unsigned long long)txMinBitrate;
-(unsigned long long)customWidth;
-(unsigned long long)customHeight;
-(BOOL)enableCVO;
-(unsigned long long)cvoExtensionID;
-(unsigned long long)tilesPerFrame;
-(BOOL)isLatencySensitiveModeEnabled;
-(void)setLtrpEnabled:(BOOL)arg1 ;
-(void)setFramerate:(unsigned long long)arg1 ;
-(void)setRemoteVideoInitialOrientation:(int)arg1 ;
-(void)setRxMinBitrate:(unsigned long long)arg1 ;
-(void)setRxMaxBitrate:(unsigned long long)arg1 ;
-(void)setTxMinBitrate:(unsigned long long)arg1 ;
-(void)setTxMaxBitrate:(unsigned long long)arg1 ;
-(void)setTilesPerFrame:(unsigned long long)arg1 ;
-(void)setCvoExtensionID:(unsigned long long)arg1 ;
-(void)setEnableCVO:(BOOL)arg1 ;
-(void)setCustomWidth:(unsigned long long)arg1 ;
-(void)setCustomHeight:(unsigned long long)arg1 ;
-(void)setLatencySensitiveModeEnabled:(BOOL)arg1 ;
-(unsigned long long)rxMinBitrate;
-(unsigned long long)rxMaxBitrate;
-(int)remoteVideoInitialOrientation;
-(BOOL)isVideoProtected;
-(void)setIsVideoProtected:(BOOL)arg1 ;
-(long long)captureSource;
-(void)setCaptureSource:(long long)arg1 ;
-(unsigned long long)screenDisplayID;
-(void)setScreenDisplayID:(unsigned long long)arg1 ;
-(void)setTxCodecFeatureListString:(NSString *)arg1 ;
-(void)setRxCodecFeatureListString:(NSString *)arg1 ;
-(void)setVideoStreamMode:(long long)arg1 ;
-(void)setTxCodecType:(long long)arg1 ;
-(void)setRxCodecType:(long long)arg1 ;
-(BOOL)isLTRPEnabled;
-(NSString *)txCodecFeatureListString;
-(void)setUpWithDictionary:(id)arg1 ;
-(BOOL)isValidForDirection:(long long)arg1 ;
-(long long)txCodecType;
-(long long)rxCodecType;
-(NSString *)rxCodecFeatureListString;
-(long long)videoStreamMode;
@end

