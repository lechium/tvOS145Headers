/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol VCHardwareSettingsMacProtocol <NSObject>
@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) NSString * machineName; 
@property (nonatomic,readonly) int hardwareScore; 
@property (nonatomic,readonly) BOOL canDoHiDefEncoding; 
@property (nonatomic,readonly) BOOL canDoHiDefDecoding; 
@property (nonatomic,readonly) BOOL supports1080pEncoding; 
@property (nonatomic,readonly) BOOL supports1080pDecoding; 
@property (nonatomic,readonly) BOOL canDoHEVC; 
@property (nonatomic,readonly) BOOL isMacBookWVGA; 
@property (nonatomic,readonly) BOOL isMacPro; 
@property (nonatomic,readonly) BOOL isIMac; 
@property (nonatomic,readonly) BOOL useSoftFramerateSwitching; 
@property (nonatomic,readonly) unsigned hwEncoderExitBitrate; 
@property (nonatomic,readonly) unsigned hwEncoderEnterBitrate; 
@property (nonatomic,readonly) unsigned maxDisplayRefreshRate; 
@property (nonatomic,readonly) unsigned maxActiveVideoEncoders; 
@property (nonatomic,readonly) unsigned maxActiveVideoDecoders; 
@property (nonatomic,readonly) unsigned maxMultiwayFramerateSupported; 
@property (nonatomic,readonly) BOOL supportsMultiway720pStream; 
@property (nonatomic,readonly) BOOL isDeviceLargeScreen; 
@property (nonatomic,readonly) BOOL supportsHEIFEncoding; 
@property (nonatomic,readonly) BOOL isPixelFormatAvailable; 
@required
-(BOOL)supportsHEIFEncoding;
-(NSString *)machineName;
-(BOOL)canDoHiDefEncoding;
-(BOOL)isMacBookWVGA;
-(BOOL)isMacPro;
-(BOOL)isIMac;
-(unsigned)hwEncoderExitBitrate;
-(unsigned)hwEncoderEnterBitrate;
-(BOOL)supportHEVC;
-(BOOL)vcpSupportsHEVCEncoder;
-(int)hardwareScore;
-(BOOL)canDoHiDefDecoding;
-(BOOL)supports1080pEncoding;
-(BOOL)supports1080pDecoding;
-(BOOL)canDoHEVC;
-(BOOL)useSoftFramerateSwitching;
-(unsigned)maxDisplayRefreshRate;
-(unsigned)maxActiveVideoEncoders;
-(unsigned)maxActiveVideoDecoders;
-(unsigned)maxMultiwayFramerateSupported;
-(BOOL)supportsMultiway720pStream;
-(BOOL)isDeviceLargeScreen;
-(BOOL)isPixelFormatAvailable;

@end

