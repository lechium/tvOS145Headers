/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCMediaNegotiatorAudioConfiguration, VCVideoRuleCollections, NSDictionary, NSString, NSMutableSet, NSSet, NSMutableOrderedSet;

@interface VCMediaNegotiatorLocalConfiguration : NSObject <NSCopying> {

	unsigned _videoSSRC;
	VCMediaNegotiatorAudioConfiguration* _audioConfiguration;
	VCVideoRuleCollections* _videoRuleCollections;
	VCVideoRuleCollections* _screenRuleCollections;
	NSDictionary* _videoFeatureStrings;
	BOOL _allowRTCPFB;
	BOOL _isCaller;
	NSString* _basebandCodec;
	unsigned _basebandCodecSampleRate;
	NSMutableSet* _bandwidthConfigurations;
	NSSet* _captionsReceiverLanguages;
	NSSet* _captionsSenderLanguages;
	unsigned long long _creationTime;
	NSMutableOrderedSet* _multiwayAudioStreams;
	NSMutableOrderedSet* _multiwayVideoStreams;
	NSSet* _momentsVideoCodecs;
	NSSet* _momentsImageTypes;
	unsigned char _mediaControlInfoVersion;
	BOOL _SIPDisabled;
	BOOL _secureMessagingRequired;
	unsigned _faceTimeSwitches;
	int _preferredAudioCodec;
	int _deviceRole;
	void* _callLogFile;
	unsigned _tilesPerVideoFrame;
	BOOL _oneToOneModeSupported;
	BOOL _ltrpEnabled;
	NSSet* _pixelFormats;
	unsigned char _mediaControlInfoFECFeedbackVersion;
	unsigned char _linkProbingCapabilityVersion;
	BOOL _alwaysOnAudRedEnabled;
	BOOL _alwaysOnAudioRedundancyEnabled;
	BOOL _highFecEnabled;
	BOOL _lowFpsVideoEnabled;
	BOOL _vplrFecEnabled;
	BOOL _rampDownBWDropEnabled;
	BOOL _fastMediaDuplicationEnabled;
	BOOL _iRATRtpEnabled;
	BOOL _preWarmCellEnabled;
	BOOL _duplicateImportantPktsEnabled;
	unsigned _customVideoWidth;
	unsigned _customVideoHeight;

}

@property (assign,nonatomic) unsigned videoSSRC;                                                    //@synthesize videoSSRC=_videoSSRC - In the implementation block
@property (nonatomic,retain) VCMediaNegotiatorAudioConfiguration * audioConfiguration;              //@synthesize audioConfiguration=_audioConfiguration - In the implementation block
@property (nonatomic,retain) VCVideoRuleCollections * videoRuleCollections;                         //@synthesize videoRuleCollections=_videoRuleCollections - In the implementation block
@property (nonatomic,retain) VCVideoRuleCollections * screenRuleCollections;                        //@synthesize screenRuleCollections=_screenRuleCollections - In the implementation block
@property (assign,nonatomic) int preferredAudioCodec;                                               //@synthesize preferredAudioCodec=_preferredAudioCodec - In the implementation block
@property (assign,nonatomic) int deviceRole;                                                        //@synthesize deviceRole=_deviceRole - In the implementation block
@property (nonatomic,retain) NSDictionary * videoFeatureStrings;                                    //@synthesize videoFeatureStrings=_videoFeatureStrings - In the implementation block
@property (assign,nonatomic) BOOL allowRTCPFB;                                                      //@synthesize allowRTCPFB=_allowRTCPFB - In the implementation block
@property (assign,nonatomic) BOOL isCaller;                                                         //@synthesize isCaller=_isCaller - In the implementation block
@property (nonatomic,retain) NSString * basebandCodec;                                              //@synthesize basebandCodec=_basebandCodec - In the implementation block
@property (assign,nonatomic) unsigned basebandCodecSampleRate;                                      //@synthesize basebandCodecSampleRate=_basebandCodecSampleRate - In the implementation block
@property (nonatomic,retain) NSSet * bandwidthConfigurations;                                       //@synthesize bandwidthConfigurations=_bandwidthConfigurations - In the implementation block
@property (nonatomic,retain) NSSet * captionsSenderLanguages;                                       //@synthesize captionsSenderLanguages=_captionsSenderLanguages - In the implementation block
@property (nonatomic,retain) NSSet * captionsReceiverLanguages;                                     //@synthesize captionsReceiverLanguages=_captionsReceiverLanguages - In the implementation block
@property (assign,nonatomic) void* callLogFile;                                                     //@synthesize callLogFile=_callLogFile - In the implementation block
@property (assign,nonatomic) unsigned long long creationTime;                                       //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoVersion;                                 //@synthesize mediaControlInfoVersion=_mediaControlInfoVersion - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * multiwayAudioStreams;                            //@synthesize multiwayAudioStreams=_multiwayAudioStreams - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * multiwayVideoStreams;                            //@synthesize multiwayVideoStreams=_multiwayVideoStreams - In the implementation block
@property (nonatomic,retain) NSSet * momentsVideoCodecs;                                            //@synthesize momentsVideoCodecs=_momentsVideoCodecs - In the implementation block
@property (nonatomic,retain) NSSet * momentsImageTypes;                                             //@synthesize momentsImageTypes=_momentsImageTypes - In the implementation block
@property (assign,setter=IPDisabled,nonatomic) BOOL SIPDisabled;                                    //@synthesize SIPDisabled=_SIPDisabled - In the implementation block
@property (assign,nonatomic) BOOL secureMessagingRequired;                                          //@synthesize secureMessagingRequired=_secureMessagingRequired - In the implementation block
@property (assign,nonatomic) unsigned faceTimeSwitches;                                             //@synthesize faceTimeSwitches=_faceTimeSwitches - In the implementation block
@property (assign,nonatomic) unsigned customVideoWidth;                                             //@synthesize customVideoWidth=_customVideoWidth - In the implementation block
@property (assign,nonatomic) unsigned customVideoHeight;                                            //@synthesize customVideoHeight=_customVideoHeight - In the implementation block
@property (assign,nonatomic) BOOL alwaysOnAudRedEnabled;                                            //@synthesize alwaysOnAudRedEnabled=_alwaysOnAudRedEnabled - In the implementation block
@property (assign,nonatomic) BOOL alwaysOnAudioRedundancyEnabled;                                   //@synthesize alwaysOnAudioRedundancyEnabled=_alwaysOnAudioRedundancyEnabled - In the implementation block
@property (assign,nonatomic) BOOL highFecEnabled;                                                   //@synthesize highFecEnabled=_highFecEnabled - In the implementation block
@property (assign,nonatomic) BOOL lowFpsVideoEnabled;                                               //@synthesize lowFpsVideoEnabled=_lowFpsVideoEnabled - In the implementation block
@property (assign,nonatomic) BOOL vplrFecEnabled;                                                   //@synthesize vplrFecEnabled=_vplrFecEnabled - In the implementation block
@property (assign,nonatomic) BOOL rampDownBWDropEnabled;                                            //@synthesize rampDownBWDropEnabled=_rampDownBWDropEnabled - In the implementation block
@property (assign,nonatomic) BOOL fastMediaDuplicationEnabled;                                      //@synthesize fastMediaDuplicationEnabled=_fastMediaDuplicationEnabled - In the implementation block
@property (assign,nonatomic) BOOL iRATRtpEnabled;                                                   //@synthesize iRATRtpEnabled=_iRATRtpEnabled - In the implementation block
@property (assign,nonatomic) BOOL preWarmCellEnabled;                                               //@synthesize preWarmCellEnabled=_preWarmCellEnabled - In the implementation block
@property (assign,nonatomic) BOOL duplicateImportantPktsEnabled;                                    //@synthesize duplicateImportantPktsEnabled=_duplicateImportantPktsEnabled - In the implementation block
@property (assign,nonatomic) unsigned tilesPerVideoFrame;                                           //@synthesize tilesPerVideoFrame=_tilesPerVideoFrame - In the implementation block
@property (assign,nonatomic) BOOL oneToOneModeSupported;                                            //@synthesize oneToOneModeSupported=_oneToOneModeSupported - In the implementation block
@property (assign,nonatomic) BOOL ltrpEnabled;                                                      //@synthesize ltrpEnabled=_ltrpEnabled - In the implementation block
@property (nonatomic,retain) NSSet * pixelFormats;                                                  //@synthesize pixelFormats=_pixelFormats - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;                      //@synthesize mediaControlInfoFECFeedbackVersion=_mediaControlInfoFECFeedbackVersion - In the implementation block
@property (assign,nonatomic) unsigned char linkProbingCapabilityVersion;                            //@synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)creationTime;
-(void)setCreationTime:(unsigned long long)arg1 ;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(unsigned char)mediaControlInfoFECFeedbackVersion;
-(void)setMediaControlInfoFECFeedbackVersion:(unsigned char)arg1 ;
-(void)setAlwaysOnAudioRedundancyEnabled:(BOOL)arg1 ;
-(int)preferredAudioCodec;
-(BOOL)allowRTCPFB;
-(void)setAllowRTCPFB:(BOOL)arg1 ;
-(unsigned)basebandCodecSampleRate;
-(BOOL)setupBandwidthConfigurationsWithArbiter:(id)arg1 ;
-(BOOL)setupBandwidthExtensionConfiguration:(id)arg1 ;
-(void)setVideoSSRC:(unsigned)arg1 ;
-(void)setAudioConfiguration:(VCMediaNegotiatorAudioConfiguration *)arg1 ;
-(void)setVideoRuleCollections:(VCVideoRuleCollections *)arg1 ;
-(void)setScreenRuleCollections:(VCVideoRuleCollections *)arg1 ;
-(void)setPreferredAudioCodec:(int)arg1 ;
-(void)setVideoFeatureStrings:(NSDictionary *)arg1 ;
-(void)setIsCaller:(BOOL)arg1 ;
-(void)setBasebandCodec:(NSString *)arg1 ;
-(void)setBasebandCodecSampleRate:(unsigned)arg1 ;
-(void)setBandwidthConfigurations:(NSSet *)arg1 ;
-(void)setCaptionsSenderLanguages:(NSSet *)arg1 ;
-(void)setCaptionsReceiverLanguages:(NSSet *)arg1 ;
-(void)setCallLogFile:(void*)arg1 ;
-(void)setMediaControlInfoVersion:(unsigned char)arg1 ;
-(void)setMultiwayAudioStreams:(NSMutableOrderedSet *)arg1 ;
-(void)setMultiwayVideoStreams:(NSMutableOrderedSet *)arg1 ;
-(void)setMomentsVideoCodecs:(NSSet *)arg1 ;
-(void)setMomentsImageTypes:(NSSet *)arg1 ;
-(void)setSIPDisabled:(BOOL)arg1 ;
-(void)setSecureMessagingRequired:(BOOL)arg1 ;
-(void)setFaceTimeSwitches:(unsigned)arg1 ;
-(void)setOneToOneModeSupported:(BOOL)arg1 ;
-(void)setPixelFormats:(NSSet *)arg1 ;
-(void)setLinkProbingCapabilityVersion:(unsigned char)arg1 ;
-(VCVideoRuleCollections *)videoRuleCollections;
-(VCVideoRuleCollections *)screenRuleCollections;
-(NSDictionary *)videoFeatureStrings;
-(NSSet *)momentsImageTypes;
-(NSSet *)momentsVideoCodecs;
-(BOOL)SIPDisabled;
-(BOOL)secureMessagingRequired;
-(unsigned)faceTimeSwitches;
-(BOOL)oneToOneModeSupported;
-(unsigned char)linkProbingCapabilityVersion;
-(unsigned)videoSSRC;
-(unsigned char)mediaControlInfoVersion;
-(NSString *)basebandCodec;
-(NSSet *)bandwidthConfigurations;
-(BOOL)isCaller;
-(VCMediaNegotiatorAudioConfiguration *)audioConfiguration;
-(BOOL)isEqualBandwidthConfigurations:(id)arg1 ;
-(NSMutableOrderedSet *)multiwayAudioStreams;
-(BOOL)isEqualMultiwayAudioStreamSet:(id)arg1 ;
-(NSMutableOrderedSet *)multiwayVideoStreams;
-(BOOL)isEqualMultiwayVideoStreamSet:(id)arg1 ;
-(BOOL)isEqualFeatureStrings:(id)arg1 ;
-(BOOL)isEqualMomentsImageTypes:(id)arg1 ;
-(BOOL)isEqualMomentsVideoCodecs:(id)arg1 ;
-(BOOL)isEqualFaceTimeSettings:(id)arg1 ;
-(id)initWithBitrateArbiter:(id)arg1 ;
-(void)addBandwidthConfiguration:(id)arg1 ;
-(void)addMultiwayAudioStream:(id)arg1 ;
-(void)addMultiwayVideoStream:(id)arg1 ;
-(NSSet *)captionsSenderLanguages;
-(NSSet *)captionsReceiverLanguages;
-(void*)callLogFile;
-(unsigned)customVideoWidth;
-(void)setCustomVideoWidth:(unsigned)arg1 ;
-(unsigned)customVideoHeight;
-(void)setCustomVideoHeight:(unsigned)arg1 ;
-(unsigned)tilesPerVideoFrame;
-(void)setTilesPerVideoFrame:(unsigned)arg1 ;
-(BOOL)ltrpEnabled;
-(void)setLtrpEnabled:(BOOL)arg1 ;
-(NSSet *)pixelFormats;
-(BOOL)alwaysOnAudRedEnabled;
-(void)setAlwaysOnAudRedEnabled:(BOOL)arg1 ;
-(BOOL)alwaysOnAudioRedundancyEnabled;
-(BOOL)highFecEnabled;
-(void)setHighFecEnabled:(BOOL)arg1 ;
-(BOOL)lowFpsVideoEnabled;
-(void)setLowFpsVideoEnabled:(BOOL)arg1 ;
-(BOOL)vplrFecEnabled;
-(void)setVplrFecEnabled:(BOOL)arg1 ;
-(BOOL)rampDownBWDropEnabled;
-(void)setRampDownBWDropEnabled:(BOOL)arg1 ;
-(BOOL)fastMediaDuplicationEnabled;
-(void)setFastMediaDuplicationEnabled:(BOOL)arg1 ;
-(BOOL)iRATRtpEnabled;
-(void)setIRATRtpEnabled:(BOOL)arg1 ;
-(BOOL)preWarmCellEnabled;
-(void)setPreWarmCellEnabled:(BOOL)arg1 ;
-(BOOL)duplicateImportantPktsEnabled;
-(void)setDuplicateImportantPktsEnabled:(BOOL)arg1 ;
@end
