/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerBTCoexModeChange : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _a2dpConnectionCount;
	unsigned _clamshellClosed;
	unsigned _coexMode;
	unsigned _hidConnectionCount;
	int _rssi;
	unsigned _scoConnectionCount;
	unsigned _wifiInfraChainConfig;
	unsigned _wifiInfraChannel;
	unsigned _wifiInfraPhyMode;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCoexMode; 
@property (assign,nonatomic) unsigned coexMode;                          //@synthesize coexMode=_coexMode - In the implementation block
@property (assign,nonatomic) BOOL hasA2dpConnectionCount; 
@property (assign,nonatomic) unsigned a2dpConnectionCount;               //@synthesize a2dpConnectionCount=_a2dpConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasHidConnectionCount; 
@property (assign,nonatomic) unsigned hidConnectionCount;                //@synthesize hidConnectionCount=_hidConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasScoConnectionCount; 
@property (assign,nonatomic) unsigned scoConnectionCount;                //@synthesize scoConnectionCount=_scoConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasWifiInfraChannel; 
@property (assign,nonatomic) unsigned wifiInfraChannel;                  //@synthesize wifiInfraChannel=_wifiInfraChannel - In the implementation block
@property (assign,nonatomic) BOOL hasWifiInfraChainConfig; 
@property (assign,nonatomic) unsigned wifiInfraChainConfig;              //@synthesize wifiInfraChainConfig=_wifiInfraChainConfig - In the implementation block
@property (assign,nonatomic) BOOL hasWifiInfraPhyMode; 
@property (assign,nonatomic) unsigned wifiInfraPhyMode;                  //@synthesize wifiInfraPhyMode=_wifiInfraPhyMode - In the implementation block
@property (assign,nonatomic) BOOL hasClamshellClosed; 
@property (assign,nonatomic) unsigned clamshellClosed;                   //@synthesize clamshellClosed=_clamshellClosed - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                   //@synthesize rssi=_rssi - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setCoexMode:(unsigned)arg1 ;
-(void)setHasCoexMode:(BOOL)arg1 ;
-(BOOL)hasCoexMode;
-(void)setA2dpConnectionCount:(unsigned)arg1 ;
-(void)setHasA2dpConnectionCount:(BOOL)arg1 ;
-(BOOL)hasA2dpConnectionCount;
-(void)setHidConnectionCount:(unsigned)arg1 ;
-(void)setHasHidConnectionCount:(BOOL)arg1 ;
-(BOOL)hasHidConnectionCount;
-(void)setScoConnectionCount:(unsigned)arg1 ;
-(void)setHasScoConnectionCount:(BOOL)arg1 ;
-(BOOL)hasScoConnectionCount;
-(void)setWifiInfraChannel:(unsigned)arg1 ;
-(void)setHasWifiInfraChannel:(BOOL)arg1 ;
-(BOOL)hasWifiInfraChannel;
-(void)setWifiInfraChainConfig:(unsigned)arg1 ;
-(void)setHasWifiInfraChainConfig:(BOOL)arg1 ;
-(BOOL)hasWifiInfraChainConfig;
-(void)setWifiInfraPhyMode:(unsigned)arg1 ;
-(void)setHasWifiInfraPhyMode:(BOOL)arg1 ;
-(BOOL)hasWifiInfraPhyMode;
-(void)setClamshellClosed:(unsigned)arg1 ;
-(void)setHasClamshellClosed:(BOOL)arg1 ;
-(BOOL)hasClamshellClosed;
-(unsigned)coexMode;
-(unsigned)a2dpConnectionCount;
-(unsigned)hidConnectionCount;
-(unsigned)scoConnectionCount;
-(unsigned)wifiInfraChannel;
-(unsigned)wifiInfraChainConfig;
-(unsigned)wifiInfraPhyMode;
-(unsigned)clamshellClosed;
@end

