/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WiFiUsageNetworkDetails, NSString, NSDate, WiFiUsageInterfaceCapabilities;

@interface WiFiUsageLQMSample : NSObject {

	WiFiUsageNetworkDetails* _networkDetails;
	NSString* _fgApp;
	double _duration;
	NSDate* _timestamp;
	NSString* _interfaceName;
	long long _rssi;
	long long _noise;
	long long _snr;
	unsigned long long _selfCca;
	unsigned long long _otherCca;
	unsigned long long _interference;
	unsigned long long _totalReportedCca;
	unsigned long long _beaconPer;
	unsigned long long _decodingAttempts;
	unsigned long long _rxStartOverDecodingAttemptsPercentage;
	unsigned long long _rxCrsGlitchOverDecodingAttemptsPercentage;
	unsigned long long _rxBadPlcpOverDecodingAttemptsPercentage;
	unsigned long long _txFrames;
	unsigned long long _rxFrames;
	unsigned long long _txFailsOverTxFrames;
	unsigned long long _txRetriesOverTxFrames;
	unsigned long long _rxRetriesOverRxFrames;
	unsigned long long _txBytesOverTxFrames;
	unsigned long long _rxBytesOverRxFrames;
	unsigned long long _txL3PacketsPerSecond;
	unsigned long long _rxL3PacketsPerSecond;
	unsigned long long _txBytesOverTxL3Packets;
	unsigned long long _rxBytesOverRxL3Packets;
	unsigned long long _linkTheoreticalMaxRate;
	unsigned long long _txRateOverLinkTheoreticalMaxPercentage;
	unsigned long long _rxRateOverLinkTheoreticalMaxPercentage;
	unsigned long long _txRateOverDeviceTheoreticalMaxPercentage;
	unsigned long long _rxRateOverDeviceTheoreticalMaxPercentage;
	unsigned long long _txRTS;
	unsigned long long _txRTSFailOvertxRTS;
	unsigned long long _txMpduDensity;
	WiFiUsageInterfaceCapabilities* _capabilities;

}

@property (nonatomic,copy) NSDate * timestamp;                                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                                    //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) WiFiUsageInterfaceCapabilities * capabilities;                             //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) WiFiUsageNetworkDetails * networkDetails;                                  //@synthesize networkDetails=_networkDetails - In the implementation block
@property (nonatomic,retain) NSString * fgApp;                                                          //@synthesize fgApp=_fgApp - In the implementation block
@property (assign,nonatomic) double duration;                                                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long rssi;                                                            //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) long long noise;                                                           //@synthesize noise=_noise - In the implementation block
@property (assign,nonatomic) long long snr;                                                             //@synthesize snr=_snr - In the implementation block
@property (assign,nonatomic) unsigned long long selfCca;                                                //@synthesize selfCca=_selfCca - In the implementation block
@property (assign,nonatomic) unsigned long long otherCca;                                               //@synthesize otherCca=_otherCca - In the implementation block
@property (assign,nonatomic) unsigned long long interference;                                           //@synthesize interference=_interference - In the implementation block
@property (assign,nonatomic) unsigned long long totalReportedCca;                                       //@synthesize totalReportedCca=_totalReportedCca - In the implementation block
@property (assign,nonatomic) unsigned long long beaconPer;                                              //@synthesize beaconPer=_beaconPer - In the implementation block
@property (assign,nonatomic) unsigned long long decodingAttempts;                                       //@synthesize decodingAttempts=_decodingAttempts - In the implementation block
@property (assign,nonatomic) unsigned long long rxStartOverDecodingAttemptsPercentage;                  //@synthesize rxStartOverDecodingAttemptsPercentage=_rxStartOverDecodingAttemptsPercentage - In the implementation block
@property (assign,nonatomic) unsigned long long rxCrsGlitchOverDecodingAttemptsPercentage;              //@synthesize rxCrsGlitchOverDecodingAttemptsPercentage=_rxCrsGlitchOverDecodingAttemptsPercentage - In the implementation block
@property (assign,nonatomic) unsigned long long rxBadPlcpOverDecodingAttemptsPercentage;                //@synthesize rxBadPlcpOverDecodingAttemptsPercentage=_rxBadPlcpOverDecodingAttemptsPercentage - In the implementation block
@property (assign,nonatomic) unsigned long long txFrames;                                               //@synthesize txFrames=_txFrames - In the implementation block
@property (assign,nonatomic) unsigned long long rxFrames;                                               //@synthesize rxFrames=_rxFrames - In the implementation block
@property (assign,nonatomic) unsigned long long txFailsOverTxFrames;                                    //@synthesize txFailsOverTxFrames=_txFailsOverTxFrames - In the implementation block
@property (assign,nonatomic) unsigned long long txRetriesOverTxFrames;                                  //@synthesize txRetriesOverTxFrames=_txRetriesOverTxFrames - In the implementation block
@property (assign,nonatomic) unsigned long long rxRetriesOverRxFrames;                                  //@synthesize rxRetriesOverRxFrames=_rxRetriesOverRxFrames - In the implementation block
@property (assign,nonatomic) unsigned long long txBytesOverTxFrames;                                    //@synthesize txBytesOverTxFrames=_txBytesOverTxFrames - In the implementation block
@property (assign,nonatomic) unsigned long long rxBytesOverRxFrames;                                    //@synthesize rxBytesOverRxFrames=_rxBytesOverRxFrames - In the implementation block
@property (assign,nonatomic) unsigned long long txL3PacketsPerSecond;                                   //@synthesize txL3PacketsPerSecond=_txL3PacketsPerSecond - In the implementation block
@property (assign,nonatomic) unsigned long long rxL3PacketsPerSecond;                                   //@synthesize rxL3PacketsPerSecond=_rxL3PacketsPerSecond - In the implementation block
@property (assign,nonatomic) unsigned long long txBytesOverTxL3Packets;                                 //@synthesize txBytesOverTxL3Packets=_txBytesOverTxL3Packets - In the implementation block
@property (assign,nonatomic) unsigned long long rxBytesOverRxL3Packets;                                 //@synthesize rxBytesOverRxL3Packets=_rxBytesOverRxL3Packets - In the implementation block
@property (assign,nonatomic) unsigned long long linkTheoreticalMaxRate;                                 //@synthesize linkTheoreticalMaxRate=_linkTheoreticalMaxRate - In the implementation block
@property (assign,nonatomic) unsigned long long txRateOverLinkTheoreticalMaxPercentage;                 //@synthesize txRateOverLinkTheoreticalMaxPercentage=_txRateOverLinkTheoreticalMaxPercentage - In the implementation block
@property (assign,nonatomic) unsigned long long rxRateOverLinkTheoreticalMaxPercentage;                 //@synthesize rxRateOverLinkTheoreticalMaxPercentage=_rxRateOverLinkTheoreticalMaxPercentage - In the implementation block
@property (assign,nonatomic) unsigned long long txRateOverDeviceTheoreticalMaxPercentage;               //@synthesize txRateOverDeviceTheoreticalMaxPercentage=_txRateOverDeviceTheoreticalMaxPercentage - In the implementation block
@property (assign,nonatomic) unsigned long long rxRateOverDeviceTheoreticalMaxPercentage;               //@synthesize rxRateOverDeviceTheoreticalMaxPercentage=_rxRateOverDeviceTheoreticalMaxPercentage - In the implementation block
@property (assign,nonatomic) unsigned long long txRTS;                                                  //@synthesize txRTS=_txRTS - In the implementation block
@property (assign,nonatomic) unsigned long long txRTSFailOvertxRTS;                                     //@synthesize txRTSFailOvertxRTS=_txRTSFailOvertxRTS - In the implementation block
@property (assign,nonatomic) unsigned long long txMpduDensity;                                          //@synthesize txMpduDensity=_txMpduDensity - In the implementation block
+(void)initialize;
+(BOOL)isPerSecond:(id)arg1 ;
+(id)allLQMProperties;
+(id)binLabelfromFieldName:(id)arg1 value:(long long)arg2 ;
-(id)description;
-(NSString *)interfaceName;
-(NSDate *)timestamp;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(WiFiUsageInterfaceCapabilities *)capabilities;
-(void)setInterfaceName:(NSString *)arg1 ;
-(long long)rssi;
-(long long)snr;
-(void)setRssi:(long long)arg1 ;
-(void)setSnr:(long long)arg1 ;
-(void)setBeaconPer:(unsigned long long)arg1 ;
-(unsigned long long)beaconPer;
-(void)setTxFrames:(unsigned long long)arg1 ;
-(void)setRxFrames:(unsigned long long)arg1 ;
-(unsigned long long)txFrames;
-(unsigned long long)rxFrames;
-(void)setCapabilities:(WiFiUsageInterfaceCapabilities *)arg1 ;
-(void)setNoise:(long long)arg1 ;
-(long long)noise;
-(id)initWithInterfaceName:(id)arg1 ;
-(void)updateWithTxBytes:(unsigned long long)arg1 RxBytes:(unsigned long long)arg2 TxL3Packets:(unsigned long long)arg3 RxL3Packets:(unsigned long long)arg4 ;
-(WiFiUsageNetworkDetails *)networkDetails;
-(void)updateWithInterfaceCapabilities:(id)arg1 AndNetworkDetails:(id)arg2 ;
-(unsigned long long)selfCca;
-(unsigned long long)otherCca;
-(unsigned long long)interference;
-(unsigned long long)totalReportedCca;
-(unsigned long long)txBytesOverTxFrames;
-(unsigned long long)rxBytesOverRxFrames;
-(unsigned long long)txFailsOverTxFrames;
-(unsigned long long)txRetriesOverTxFrames;
-(unsigned long long)rxRetriesOverRxFrames;
-(unsigned long long)decodingAttempts;
-(unsigned long long)rxStartOverDecodingAttemptsPercentage;
-(unsigned long long)txRateOverLinkTheoreticalMaxPercentage;
-(unsigned long long)rxRateOverLinkTheoreticalMaxPercentage;
-(void)setFgApp:(NSString *)arg1 ;
-(id)numberForKeyPath:(id)arg1 ;
-(NSString *)fgApp;
-(void)setNetworkDetails:(WiFiUsageNetworkDetails *)arg1 ;
-(void)setSelfCca:(unsigned long long)arg1 ;
-(void)setOtherCca:(unsigned long long)arg1 ;
-(void)setInterference:(unsigned long long)arg1 ;
-(void)setTotalReportedCca:(unsigned long long)arg1 ;
-(void)setDecodingAttempts:(unsigned long long)arg1 ;
-(void)setRxStartOverDecodingAttemptsPercentage:(unsigned long long)arg1 ;
-(void)setRxBadPlcpOverDecodingAttemptsPercentage:(unsigned long long)arg1 ;
-(void)setRxCrsGlitchOverDecodingAttemptsPercentage:(unsigned long long)arg1 ;
-(void)populateWithRssi:(long long)arg1 noise:(long long)arg2 snr:(long long)arg3 selfCca:(unsigned long long)arg4 otherCca:(unsigned long long)arg5 interference:(unsigned long long)arg6 totalReportedCca:(unsigned long long)arg7 beaconPer:(unsigned long long)arg8 rxCrsGlitch:(unsigned long long)arg9 rxBadPLCP:(unsigned long long)arg10 rxStart:(unsigned long long)arg11 ;
-(void)setTxRetriesOverTxFrames:(unsigned long long)arg1 ;
-(void)setRxRetriesOverRxFrames:(unsigned long long)arg1 ;
-(void)setTxFailsOverTxFrames:(unsigned long long)arg1 ;
-(void)setTxRateOverLinkTheoreticalMaxPercentage:(unsigned long long)arg1 ;
-(void)setRxRateOverLinkTheoreticalMaxPercentage:(unsigned long long)arg1 ;
-(void)setTxRTS:(unsigned long long)arg1 ;
-(void)setTxRTSFailOvertxRTS:(unsigned long long)arg1 ;
-(void)setTxMpduDensity:(unsigned long long)arg1 ;
-(void)setTxBytesOverTxFrames:(unsigned long long)arg1 ;
-(void)setRxBytesOverRxFrames:(unsigned long long)arg1 ;
-(void)setTxBytesOverTxL3Packets:(unsigned long long)arg1 ;
-(void)setRxBytesOverRxL3Packets:(unsigned long long)arg1 ;
-(void)setTxL3PacketsPerSecond:(unsigned long long)arg1 ;
-(void)setRxL3PacketsPerSecond:(unsigned long long)arg1 ;
-(void)populateWithRssi:(long long)arg1 rssi1:(long long)arg2 rssi2:(long long)arg3 noise:(long long)arg4 snr:(long long)arg5 selfCca:(unsigned long long)arg6 otherCca:(unsigned long long)arg7 interference:(unsigned long long)arg8 totalReportedCca:(unsigned long long)arg9 beaconPer:(unsigned long long)arg10 beaconTbtt:(unsigned long long)arg11 rxCrsGlitch:(unsigned long long)arg12 rxBadPLCP:(unsigned long long)arg13 rxStart:(unsigned long long)arg14 rxBphyCrsGlitch:(unsigned long long)arg15 rxBphyBadPLCP:(unsigned long long)arg16 sampleDuration:(unsigned long long)arg17 ;
-(void)populateWithTxFrames:(unsigned long long)arg1 RxFrames:(unsigned long long)arg2 TxFails:(unsigned long long)arg3 TxRetries:(unsigned long long)arg4 RxRetries:(unsigned long long)arg5 TxRate:(unsigned long long)arg6 RxRate:(unsigned long long)arg7 txRTS:(unsigned long long)arg8 txRTSFail:(unsigned long long)arg9 txMpdu:(unsigned long long)arg10 txAMPDU:(unsigned long long)arg11 ;
-(unsigned long long)rxCrsGlitchOverDecodingAttemptsPercentage;
-(unsigned long long)rxBadPlcpOverDecodingAttemptsPercentage;
-(unsigned long long)txL3PacketsPerSecond;
-(unsigned long long)rxL3PacketsPerSecond;
-(unsigned long long)txBytesOverTxL3Packets;
-(unsigned long long)rxBytesOverRxL3Packets;
-(unsigned long long)linkTheoreticalMaxRate;
-(void)setLinkTheoreticalMaxRate:(unsigned long long)arg1 ;
-(unsigned long long)txRateOverDeviceTheoreticalMaxPercentage;
-(void)setTxRateOverDeviceTheoreticalMaxPercentage:(unsigned long long)arg1 ;
-(unsigned long long)rxRateOverDeviceTheoreticalMaxPercentage;
-(void)setRxRateOverDeviceTheoreticalMaxPercentage:(unsigned long long)arg1 ;
-(unsigned long long)txRTS;
-(unsigned long long)txRTSFailOvertxRTS;
-(unsigned long long)txMpduDensity;
@end

