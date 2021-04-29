/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreRCDevice.h>

@class NSDictionary;

@interface CoreCECDevice : CoreRCDevice {

	unsigned char _logicalAddress;
	BOOL _isActiveSource;
	BOOL _systemAudioControlEnabled;
	BOOL _audioReturnChannelControlEnabled;
	BOOL _audioMuteStatus;
	unsigned long long _physicalAddress;
	unsigned long long _deviceType;
	unsigned long long _cecVersion;
	unsigned long long _vendorID;
	unsigned long long _allDeviceTypes;
	NSDictionary* _rcProfile;
	unsigned long long _powerStatus;
	unsigned long long _deckStatus;
	unsigned long long _audioVolumeStatus;
	NSDictionary* _audioFormats;
	unsigned long long _audioFormatsCount;
	unsigned long long _deviceFeatures;
	unsigned long long _knownDeviceFeatures;

}

@property (assign,nonatomic) unsigned char logicalAddress;                        //@synthesize logicalAddress=_logicalAddress - In the implementation block
@property (assign,nonatomic) unsigned long long physicalAddress;                  //@synthesize physicalAddress=_physicalAddress - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;                       //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) unsigned long long cecVersion;                       //@synthesize cecVersion=_cecVersion - In the implementation block
@property (assign,nonatomic) unsigned long long vendorID;                         //@synthesize vendorID=_vendorID - In the implementation block
@property (assign,nonatomic) unsigned long long powerStatus;                      //@synthesize powerStatus=_powerStatus - In the implementation block
@property (assign,nonatomic) unsigned long long deckStatus;                       //@synthesize deckStatus=_deckStatus - In the implementation block
@property (assign,nonatomic) unsigned long long allDeviceTypes;                   //@synthesize allDeviceTypes=_allDeviceTypes - In the implementation block
@property (assign,nonatomic) unsigned long long deviceFeatures;                   //@synthesize deviceFeatures=_deviceFeatures - In the implementation block
@property (assign,nonatomic) unsigned long long knownDeviceFeatures;              //@synthesize knownDeviceFeatures=_knownDeviceFeatures - In the implementation block
@property (nonatomic,copy) NSDictionary * rcProfile;                              //@synthesize rcProfile=_rcProfile - In the implementation block
@property (assign,nonatomic) BOOL audioReturnChannelControlEnabled;               //@synthesize audioReturnChannelControlEnabled=_audioReturnChannelControlEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long audioVolumeStatus;                //@synthesize audioVolumeStatus=_audioVolumeStatus - In the implementation block
@property (assign,nonatomic) BOOL audioMuteStatus;                                //@synthesize audioMuteStatus=_audioMuteStatus - In the implementation block
@property (nonatomic,copy) NSDictionary * audioFormats;                           //@synthesize audioFormats=_audioFormats - In the implementation block
@property (assign,nonatomic) unsigned long long audioFormatsCount;                //@synthesize audioFormatsCount=_audioFormatsCount - In the implementation block
@property (assign,nonatomic) BOOL isActiveSource;                                 //@synthesize isActiveSource=_isActiveSource - In the implementation block
@property (nonatomic,readonly) BOOL isUnregistered; 
@property (nonatomic,readonly) BOOL systemAudioControlEnabled;                    //@synthesize systemAudioControlEnabled=_systemAudioControlEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isCEC2Device; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)deviceType;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(unsigned long long)vendorID;
-(void)setVendorID:(unsigned long long)arg1 ;
-(unsigned long long)deviceFeatures;
-(unsigned long long)powerStatus;
-(NSDictionary *)audioFormats;
-(void)setPowerStatus:(unsigned long long)arg1 ;
-(unsigned long long)allDeviceTypes;
-(unsigned long long)physicalAddress;
-(unsigned char)logicalAddress;
-(BOOL)setPowerStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setSystemAudioControlEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)refreshPropertiesOfDevice:(id)arg1 error:(id*)arg2 ;
-(BOOL)isActiveSource;
-(BOOL)setAudioVolumeStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setAudioMuteStatus:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)makeActiveSourceWithTVMenus:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)systemAudioModeRequest:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)cecVersion;
-(BOOL)resignActiveSource:(id*)arg1 ;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 attributes:(id)arg5 ;
-(void)shouldAssertActiveSource;
-(void)setIsActiveSource:(BOOL)arg1 ;
-(void)deckControlPlayHasBeenReceived:(unsigned long long)arg1 fromDevice:(id)arg2 ;
-(void)deckControlCommandHasBeenReceived:(unsigned long long)arg1 fromDevice:(id)arg2 ;
-(void)deckControlStatusHasBeenUpdated:(unsigned long long)arg1 fromDevice:(id)arg2 ;
-(void)featureAbort:(id)arg1 ;
-(void)standbyRequestHasBeenReceived:(id)arg1 ;
-(void)receivedRequestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 fromDevice:(id)arg2 ;
-(void)requestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 didFinishWithResult:(BOOL)arg2 error:(id)arg3 ;
-(void)receivedRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 fromDevice:(id)arg2 ;
-(void)requestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 didFinishWithResult:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 ;
-(BOOL)isUnregistered;
-(id)mergeProperties;
-(void)setPhysicalAddress:(unsigned long long)arg1 ;
-(void)setLogicalAddress:(unsigned char)arg1 ;
-(NSDictionary *)rcProfile;
-(unsigned long long)deckStatus;
-(BOOL)systemAudioControlEnabled;
-(BOOL)audioReturnChannelControlEnabled;
-(unsigned long long)audioVolumeStatus;
-(BOOL)audioMuteStatus;
-(unsigned long long)audioFormatsCount;
-(void)notifyDelegateActiveSourceStatusHasChanged;
-(BOOL)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(void)willChangePowerStatus:(unsigned long long)arg1 ;
-(void)didChangePowerStatus:(unsigned long long)arg1 ;
-(void)notifyDelegateDeckControlCommandHasBeenReceived:(id)arg1 command:(unsigned long long)arg2 ;
-(void)notifyDelegateDeckControlPlayHasBeenReceived:(id)arg1 playMode:(unsigned long long)arg2 ;
-(void)notifyDelegateDeckControlStatusHasBeenUpdated:(id)arg1 deckInfo:(unsigned long long)arg2 ;
-(void)notifyDelegateFeatureAbort:(id)arg1 ;
-(void)notifyDelegateShouldAssertActiveSource;
-(void)notifyDelegateStandbyRequestHasBeenReceived:(id)arg1 ;
-(void)notifyDelegateReceivedRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 fromDevice:(id)arg2 ;
-(void)notifyDelegateRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 didFinishWithResult:(BOOL)arg2 error:(id)arg3 ;
-(void)notifyDelegateReceivedRequestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 fromDevice:(id)arg2 ;
-(void)notifyDelegateRequestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 didFinishWithResult:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)isCEC2Device;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 deviceType:(unsigned long long)arg5 ;
-(void)setDeckStatus:(unsigned long long)arg1 ;
-(BOOL)deckControlSetDeckStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)deckControlCommandWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlPlayWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlRefreshStatus:(id)arg1 requestType:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)refreshDevices:(id*)arg1 ;
-(BOOL)requestActiveSource:(id*)arg1 ;
-(BOOL)setAudioReturnChannelControlEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)requestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setSupportedAudioFormats:(const CoreCECAudioFormat*)arg1 count:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setSupportedAudioFormats:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)featureSupportStatus:(unsigned long long)arg1 ;
-(void)setFeature:(unsigned long long)arg1 supportStatus:(unsigned long long)arg2 ;
-(void)setCecVersion:(unsigned long long)arg1 ;
-(void)setAllDeviceTypes:(unsigned long long)arg1 ;
-(void)setRcProfile:(NSDictionary *)arg1 ;
-(void)setAudioReturnChannelControlEnabled:(BOOL)arg1 ;
-(void)setAudioVolumeStatus:(unsigned long long)arg1 ;
-(void)setAudioMuteStatus:(BOOL)arg1 ;
-(void)setAudioFormats:(NSDictionary *)arg1 ;
-(void)setAudioFormatsCount:(unsigned long long)arg1 ;
-(void)setDeviceFeatures:(unsigned long long)arg1 ;
-(unsigned long long)knownDeviceFeatures;
-(void)setKnownDeviceFeatures:(unsigned long long)arg1 ;
@end

