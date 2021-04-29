/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWRMFacetimeRecommendation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	long long _wifiRssi;
	long long _wifiSNR;
	unsigned _audioErasure;
	unsigned _bssLoad;
	unsigned _cca;
	int _cellRsrp;
	int _cellRsrq;
	int _cellSnr;
	unsigned _counter;
	unsigned _dataLQM;
	unsigned _facetimeAction;
	unsigned _facetimePacketLoss;
	unsigned _facetimeTimeDelay;
	NSString* _iRATRecommendation;
	NSString* _iRATRecommendationReason;
	unsigned _qbssLoad;
	NSString* _ratType;
	unsigned _signalBar;
	unsigned _stationCount;
	unsigned _videoErasure;
	unsigned _voiceLQM;
	unsigned _wifiEstimatedBandwitdh;
	unsigned _wifiRxPhyRate;
	unsigned _wifiRxRetry;
	unsigned _wifiTxPER;
	unsigned _wifiTxPhyRate;
	BOOL _alertedMode;
	BOOL _captiveNetworks;
	BOOL _cellMode;
	BOOL _isPCDetected;
	BOOL _isStallDetected;
	SCD_Struct_AW44 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRssi; 
@property (assign,nonatomic) long long wifiRssi;                               //@synthesize wifiRssi=_wifiRssi - In the implementation block
@property (assign,nonatomic) BOOL hasWifiTxPER; 
@property (assign,nonatomic) unsigned wifiTxPER;                               //@synthesize wifiTxPER=_wifiTxPER - In the implementation block
@property (assign,nonatomic) BOOL hasWifiSNR; 
@property (assign,nonatomic) long long wifiSNR;                                //@synthesize wifiSNR=_wifiSNR - In the implementation block
@property (assign,nonatomic) BOOL hasCaptiveNetworks; 
@property (assign,nonatomic) BOOL captiveNetworks;                             //@synthesize captiveNetworks=_captiveNetworks - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRxRetry; 
@property (assign,nonatomic) unsigned wifiRxRetry;                             //@synthesize wifiRxRetry=_wifiRxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasWifiEstimatedBandwitdh; 
@property (assign,nonatomic) unsigned wifiEstimatedBandwitdh;                  //@synthesize wifiEstimatedBandwitdh=_wifiEstimatedBandwitdh - In the implementation block
@property (assign,nonatomic) BOOL hasWifiTxPhyRate; 
@property (assign,nonatomic) unsigned wifiTxPhyRate;                           //@synthesize wifiTxPhyRate=_wifiTxPhyRate - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRxPhyRate; 
@property (assign,nonatomic) unsigned wifiRxPhyRate;                           //@synthesize wifiRxPhyRate=_wifiRxPhyRate - In the implementation block
@property (assign,nonatomic) BOOL hasQbssLoad; 
@property (assign,nonatomic) unsigned qbssLoad;                                //@synthesize qbssLoad=_qbssLoad - In the implementation block
@property (assign,nonatomic) BOOL hasCca; 
@property (assign,nonatomic) unsigned cca;                                     //@synthesize cca=_cca - In the implementation block
@property (assign,nonatomic) BOOL hasStationCount; 
@property (assign,nonatomic) unsigned stationCount;                            //@synthesize stationCount=_stationCount - In the implementation block
@property (assign,nonatomic) BOOL hasDataLQM; 
@property (assign,nonatomic) unsigned dataLQM;                                 //@synthesize dataLQM=_dataLQM - In the implementation block
@property (assign,nonatomic) BOOL hasBssLoad; 
@property (assign,nonatomic) unsigned bssLoad;                                 //@synthesize bssLoad=_bssLoad - In the implementation block
@property (assign,nonatomic) BOOL hasVoiceLQM; 
@property (assign,nonatomic) unsigned voiceLQM;                                //@synthesize voiceLQM=_voiceLQM - In the implementation block
@property (assign,nonatomic) BOOL hasSignalBar; 
@property (assign,nonatomic) unsigned signalBar;                               //@synthesize signalBar=_signalBar - In the implementation block
@property (nonatomic,readonly) BOOL hasRatType; 
@property (nonatomic,retain) NSString * ratType;                               //@synthesize ratType=_ratType - In the implementation block
@property (nonatomic,readonly) BOOL hasIRATRecommendation; 
@property (nonatomic,retain) NSString * iRATRecommendation;                    //@synthesize iRATRecommendation=_iRATRecommendation - In the implementation block
@property (nonatomic,readonly) BOOL hasIRATRecommendationReason; 
@property (nonatomic,retain) NSString * iRATRecommendationReason;              //@synthesize iRATRecommendationReason=_iRATRecommendationReason - In the implementation block
@property (assign,nonatomic) BOOL hasFacetimePacketLoss; 
@property (assign,nonatomic) unsigned facetimePacketLoss;                      //@synthesize facetimePacketLoss=_facetimePacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasFacetimeAction; 
@property (assign,nonatomic) unsigned facetimeAction;                          //@synthesize facetimeAction=_facetimeAction - In the implementation block
@property (assign,nonatomic) BOOL hasFacetimeTimeDelay; 
@property (assign,nonatomic) unsigned facetimeTimeDelay;                       //@synthesize facetimeTimeDelay=_facetimeTimeDelay - In the implementation block
@property (assign,nonatomic) BOOL hasCounter; 
@property (assign,nonatomic) unsigned counter;                                 //@synthesize counter=_counter - In the implementation block
@property (assign,nonatomic) BOOL hasAlertedMode; 
@property (assign,nonatomic) BOOL alertedMode;                                 //@synthesize alertedMode=_alertedMode - In the implementation block
@property (assign,nonatomic) BOOL hasIsStallDetected; 
@property (assign,nonatomic) BOOL isStallDetected;                             //@synthesize isStallDetected=_isStallDetected - In the implementation block
@property (assign,nonatomic) BOOL hasIsPCDetected; 
@property (assign,nonatomic) BOOL isPCDetected;                                //@synthesize isPCDetected=_isPCDetected - In the implementation block
@property (assign,nonatomic) BOOL hasVideoErasure; 
@property (assign,nonatomic) unsigned videoErasure;                            //@synthesize videoErasure=_videoErasure - In the implementation block
@property (assign,nonatomic) BOOL hasAudioErasure; 
@property (assign,nonatomic) unsigned audioErasure;                            //@synthesize audioErasure=_audioErasure - In the implementation block
@property (assign,nonatomic) BOOL hasCellRsrp; 
@property (assign,nonatomic) int cellRsrp;                                     //@synthesize cellRsrp=_cellRsrp - In the implementation block
@property (assign,nonatomic) BOOL hasCellRsrq; 
@property (assign,nonatomic) int cellRsrq;                                     //@synthesize cellRsrq=_cellRsrq - In the implementation block
@property (assign,nonatomic) BOOL hasCellSnr; 
@property (assign,nonatomic) int cellSnr;                                      //@synthesize cellSnr=_cellSnr - In the implementation block
@property (assign,nonatomic) BOOL hasCellMode; 
@property (assign,nonatomic) BOOL cellMode;                                    //@synthesize cellMode=_cellMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned)counter;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setWifiRssi:(long long)arg1 ;
-(void)setHasWifiRssi:(BOOL)arg1 ;
-(BOOL)hasWifiRssi;
-(long long)wifiRssi;
-(NSString *)iRATRecommendation;
-(void)setIRATRecommendation:(NSString *)arg1 ;
-(BOOL)hasIRATRecommendation;
-(void)setWifiSNR:(long long)arg1 ;
-(void)setHasWifiSNR:(BOOL)arg1 ;
-(BOOL)hasWifiSNR;
-(long long)wifiSNR;
-(void)setCca:(unsigned)arg1 ;
-(void)setHasCca:(BOOL)arg1 ;
-(BOOL)hasCca;
-(unsigned)cca;
-(void)setRatType:(NSString *)arg1 ;
-(void)setQbssLoad:(unsigned)arg1 ;
-(void)setHasQbssLoad:(BOOL)arg1 ;
-(BOOL)hasQbssLoad;
-(BOOL)hasRatType;
-(void)setCellRsrp:(int)arg1 ;
-(void)setHasCellRsrp:(BOOL)arg1 ;
-(BOOL)hasCellRsrp;
-(unsigned)qbssLoad;
-(NSString *)ratType;
-(int)cellRsrp;
-(void)setIRATRecommendationReason:(NSString *)arg1 ;
-(void)setWifiTxPER:(unsigned)arg1 ;
-(void)setHasWifiTxPER:(BOOL)arg1 ;
-(BOOL)hasWifiTxPER;
-(void)setCaptiveNetworks:(BOOL)arg1 ;
-(void)setHasCaptiveNetworks:(BOOL)arg1 ;
-(BOOL)hasCaptiveNetworks;
-(void)setWifiRxRetry:(unsigned)arg1 ;
-(void)setHasWifiRxRetry:(BOOL)arg1 ;
-(BOOL)hasWifiRxRetry;
-(void)setWifiEstimatedBandwitdh:(unsigned)arg1 ;
-(void)setHasWifiEstimatedBandwitdh:(BOOL)arg1 ;
-(BOOL)hasWifiEstimatedBandwitdh;
-(void)setWifiTxPhyRate:(unsigned)arg1 ;
-(void)setHasWifiTxPhyRate:(BOOL)arg1 ;
-(BOOL)hasWifiTxPhyRate;
-(void)setWifiRxPhyRate:(unsigned)arg1 ;
-(void)setHasWifiRxPhyRate:(BOOL)arg1 ;
-(BOOL)hasWifiRxPhyRate;
-(void)setStationCount:(unsigned)arg1 ;
-(void)setHasStationCount:(BOOL)arg1 ;
-(BOOL)hasStationCount;
-(void)setDataLQM:(unsigned)arg1 ;
-(void)setHasDataLQM:(BOOL)arg1 ;
-(BOOL)hasDataLQM;
-(void)setBssLoad:(unsigned)arg1 ;
-(void)setHasBssLoad:(BOOL)arg1 ;
-(BOOL)hasBssLoad;
-(void)setVoiceLQM:(unsigned)arg1 ;
-(void)setHasVoiceLQM:(BOOL)arg1 ;
-(BOOL)hasVoiceLQM;
-(void)setSignalBar:(unsigned)arg1 ;
-(void)setHasSignalBar:(BOOL)arg1 ;
-(BOOL)hasSignalBar;
-(BOOL)hasIRATRecommendationReason;
-(void)setFacetimePacketLoss:(unsigned)arg1 ;
-(void)setHasFacetimePacketLoss:(BOOL)arg1 ;
-(BOOL)hasFacetimePacketLoss;
-(void)setFacetimeAction:(unsigned)arg1 ;
-(void)setHasFacetimeAction:(BOOL)arg1 ;
-(BOOL)hasFacetimeAction;
-(void)setFacetimeTimeDelay:(unsigned)arg1 ;
-(void)setHasFacetimeTimeDelay:(BOOL)arg1 ;
-(BOOL)hasFacetimeTimeDelay;
-(void)setCounter:(unsigned)arg1 ;
-(void)setHasCounter:(BOOL)arg1 ;
-(BOOL)hasCounter;
-(void)setAlertedMode:(BOOL)arg1 ;
-(void)setHasAlertedMode:(BOOL)arg1 ;
-(BOOL)hasAlertedMode;
-(void)setIsStallDetected:(BOOL)arg1 ;
-(void)setHasIsStallDetected:(BOOL)arg1 ;
-(BOOL)hasIsStallDetected;
-(void)setIsPCDetected:(BOOL)arg1 ;
-(void)setHasIsPCDetected:(BOOL)arg1 ;
-(BOOL)hasIsPCDetected;
-(void)setVideoErasure:(unsigned)arg1 ;
-(void)setHasVideoErasure:(BOOL)arg1 ;
-(BOOL)hasVideoErasure;
-(void)setAudioErasure:(unsigned)arg1 ;
-(void)setHasAudioErasure:(BOOL)arg1 ;
-(BOOL)hasAudioErasure;
-(void)setCellRsrq:(int)arg1 ;
-(void)setHasCellRsrq:(BOOL)arg1 ;
-(BOOL)hasCellRsrq;
-(void)setCellSnr:(int)arg1 ;
-(void)setHasCellSnr:(BOOL)arg1 ;
-(BOOL)hasCellSnr;
-(void)setCellMode:(BOOL)arg1 ;
-(void)setHasCellMode:(BOOL)arg1 ;
-(BOOL)hasCellMode;
-(unsigned)wifiTxPER;
-(BOOL)captiveNetworks;
-(unsigned)wifiRxRetry;
-(unsigned)wifiEstimatedBandwitdh;
-(unsigned)wifiTxPhyRate;
-(unsigned)wifiRxPhyRate;
-(unsigned)stationCount;
-(unsigned)dataLQM;
-(unsigned)bssLoad;
-(unsigned)voiceLQM;
-(unsigned)signalBar;
-(NSString *)iRATRecommendationReason;
-(unsigned)facetimePacketLoss;
-(unsigned)facetimeAction;
-(unsigned)facetimeTimeDelay;
-(BOOL)alertedMode;
-(BOOL)isStallDetected;
-(BOOL)isPCDetected;
-(unsigned)videoErasure;
-(unsigned)audioErasure;
-(int)cellRsrq;
-(int)cellSnr;
-(BOOL)cellMode;
@end

