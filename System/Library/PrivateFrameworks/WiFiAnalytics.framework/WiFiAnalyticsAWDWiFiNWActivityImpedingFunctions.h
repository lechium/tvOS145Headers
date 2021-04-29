/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, WiFiAnalyticsAWDWiFiTDM;

@interface WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions : PBCodable <NSCopying> {

	unsigned _activechains0;
	unsigned _activechains1;
	NSMutableArray* _cTLMIndex1s;
	NSMutableArray* _cTLMIndexs;
	unsigned _ctlmid0;
	unsigned _ctlmid1;
	unsigned _ppm0;
	unsigned _ppm1;
	unsigned _rc1Duration;
	unsigned _rc1Request;
	unsigned _rc1wlanCrit;
	unsigned _rc1wlanCritDuration;
	unsigned _rc2Duration;
	unsigned _rc2Grant;
	unsigned _rc2LongGrant;
	unsigned _rc2Request;
	unsigned _rc2cts2a;
	WiFiAnalyticsAWDWiFiTDM* _sdbtdm;
	unsigned _temp0;
	unsigned _temp1;
	unsigned _tvpmindex0;
	unsigned _tvpmindex1;
	NSMutableArray* _txDutyCyclePct1s;
	NSMutableArray* _txDutyCyclePcts;
	NSMutableArray* _txPowerBackoffDB1s;
	NSMutableArray* _txPowerBackoffDBs;
	unsigned _txduty0;
	unsigned _txduty1;
	unsigned _txpowerbackoff0;
	unsigned _txpowerbackoff1;
	unsigned _voltage0;
	unsigned _voltage1;
	SCD_Struct_Wi3 _has;

}

@property (nonatomic,retain) NSMutableArray * cTLMIndexs;                      //@synthesize cTLMIndexs=_cTLMIndexs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txPowerBackoffDBs;               //@synthesize txPowerBackoffDBs=_txPowerBackoffDBs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txDutyCyclePcts;                 //@synthesize txDutyCyclePcts=_txDutyCyclePcts - In the implementation block
@property (nonatomic,retain) NSMutableArray * cTLMIndex1s;                     //@synthesize cTLMIndex1s=_cTLMIndex1s - In the implementation block
@property (nonatomic,retain) NSMutableArray * txPowerBackoffDB1s;              //@synthesize txPowerBackoffDB1s=_txPowerBackoffDB1s - In the implementation block
@property (nonatomic,retain) NSMutableArray * txDutyCyclePct1s;                //@synthesize txDutyCyclePct1s=_txDutyCyclePct1s - In the implementation block
@property (assign,nonatomic) BOOL hasTxduty0; 
@property (assign,nonatomic) unsigned txduty0;                                 //@synthesize txduty0=_txduty0 - In the implementation block
@property (assign,nonatomic) BOOL hasTxduty1; 
@property (assign,nonatomic) unsigned txduty1;                                 //@synthesize txduty1=_txduty1 - In the implementation block
@property (assign,nonatomic) BOOL hasTxpowerbackoff0; 
@property (assign,nonatomic) unsigned txpowerbackoff0;                         //@synthesize txpowerbackoff0=_txpowerbackoff0 - In the implementation block
@property (assign,nonatomic) BOOL hasTxpowerbackoff1; 
@property (assign,nonatomic) unsigned txpowerbackoff1;                         //@synthesize txpowerbackoff1=_txpowerbackoff1 - In the implementation block
@property (assign,nonatomic) BOOL hasActivechains0; 
@property (assign,nonatomic) unsigned activechains0;                           //@synthesize activechains0=_activechains0 - In the implementation block
@property (assign,nonatomic) BOOL hasActivechains1; 
@property (assign,nonatomic) unsigned activechains1;                           //@synthesize activechains1=_activechains1 - In the implementation block
@property (assign,nonatomic) BOOL hasTemp0; 
@property (assign,nonatomic) unsigned temp0;                                   //@synthesize temp0=_temp0 - In the implementation block
@property (assign,nonatomic) BOOL hasTemp1; 
@property (assign,nonatomic) unsigned temp1;                                   //@synthesize temp1=_temp1 - In the implementation block
@property (assign,nonatomic) BOOL hasVoltage0; 
@property (assign,nonatomic) unsigned voltage0;                                //@synthesize voltage0=_voltage0 - In the implementation block
@property (assign,nonatomic) BOOL hasVoltage1; 
@property (assign,nonatomic) unsigned voltage1;                                //@synthesize voltage1=_voltage1 - In the implementation block
@property (assign,nonatomic) BOOL hasPpm0; 
@property (assign,nonatomic) unsigned ppm0;                                    //@synthesize ppm0=_ppm0 - In the implementation block
@property (assign,nonatomic) BOOL hasPpm1; 
@property (assign,nonatomic) unsigned ppm1;                                    //@synthesize ppm1=_ppm1 - In the implementation block
@property (assign,nonatomic) BOOL hasCtlmid0; 
@property (assign,nonatomic) unsigned ctlmid0;                                 //@synthesize ctlmid0=_ctlmid0 - In the implementation block
@property (assign,nonatomic) BOOL hasCtlmid1; 
@property (assign,nonatomic) unsigned ctlmid1;                                 //@synthesize ctlmid1=_ctlmid1 - In the implementation block
@property (assign,nonatomic) BOOL hasTvpmindex0; 
@property (assign,nonatomic) unsigned tvpmindex0;                              //@synthesize tvpmindex0=_tvpmindex0 - In the implementation block
@property (assign,nonatomic) BOOL hasTvpmindex1; 
@property (assign,nonatomic) unsigned tvpmindex1;                              //@synthesize tvpmindex1=_tvpmindex1 - In the implementation block
@property (assign,nonatomic) BOOL hasRc1Request; 
@property (assign,nonatomic) unsigned rc1Request;                              //@synthesize rc1Request=_rc1Request - In the implementation block
@property (assign,nonatomic) BOOL hasRc1Duration; 
@property (assign,nonatomic) unsigned rc1Duration;                             //@synthesize rc1Duration=_rc1Duration - In the implementation block
@property (assign,nonatomic) BOOL hasRc1wlanCrit; 
@property (assign,nonatomic) unsigned rc1wlanCrit;                             //@synthesize rc1wlanCrit=_rc1wlanCrit - In the implementation block
@property (assign,nonatomic) BOOL hasRc1wlanCritDuration; 
@property (assign,nonatomic) unsigned rc1wlanCritDuration;                     //@synthesize rc1wlanCritDuration=_rc1wlanCritDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRc2Request; 
@property (assign,nonatomic) unsigned rc2Request;                              //@synthesize rc2Request=_rc2Request - In the implementation block
@property (assign,nonatomic) BOOL hasRc2Duration; 
@property (assign,nonatomic) unsigned rc2Duration;                             //@synthesize rc2Duration=_rc2Duration - In the implementation block
@property (assign,nonatomic) BOOL hasRc2Grant; 
@property (assign,nonatomic) unsigned rc2Grant;                                //@synthesize rc2Grant=_rc2Grant - In the implementation block
@property (assign,nonatomic) BOOL hasRc2LongGrant; 
@property (assign,nonatomic) unsigned rc2LongGrant;                            //@synthesize rc2LongGrant=_rc2LongGrant - In the implementation block
@property (assign,nonatomic) BOOL hasRc2cts2a; 
@property (assign,nonatomic) unsigned rc2cts2a;                                //@synthesize rc2cts2a=_rc2cts2a - In the implementation block
@property (nonatomic,readonly) BOOL hasSdbtdm; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiTDM * sdbtdm;                 //@synthesize sdbtdm=_sdbtdm - In the implementation block
+(Class)cTLMIndexType;
+(Class)txPowerBackoffDBType;
+(Class)txDutyCyclePctType;
+(Class)cTLMIndex1Type;
+(Class)txPowerBackoffDB1Type;
+(Class)txDutyCyclePct1Type;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCTLMIndexs:(NSMutableArray *)arg1 ;
-(void)setTxPowerBackoffDBs:(NSMutableArray *)arg1 ;
-(void)setTxDutyCyclePcts:(NSMutableArray *)arg1 ;
-(void)setCTLMIndex1s:(NSMutableArray *)arg1 ;
-(void)setTxPowerBackoffDB1s:(NSMutableArray *)arg1 ;
-(void)setTxDutyCyclePct1s:(NSMutableArray *)arg1 ;
-(void)setSdbtdm:(WiFiAnalyticsAWDWiFiTDM *)arg1 ;
-(void)addCTLMIndex:(id)arg1 ;
-(void)addTxPowerBackoffDB:(id)arg1 ;
-(void)addTxDutyCyclePct:(id)arg1 ;
-(void)addCTLMIndex1:(id)arg1 ;
-(void)addTxPowerBackoffDB1:(id)arg1 ;
-(void)addTxDutyCyclePct1:(id)arg1 ;
-(unsigned long long)cTLMIndexsCount;
-(void)clearCTLMIndexs;
-(id)cTLMIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txPowerBackoffDBsCount;
-(void)clearTxPowerBackoffDBs;
-(id)txPowerBackoffDBAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txDutyCyclePctsCount;
-(void)clearTxDutyCyclePcts;
-(id)txDutyCyclePctAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cTLMIndex1sCount;
-(void)clearCTLMIndex1s;
-(id)cTLMIndex1AtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txPowerBackoffDB1sCount;
-(void)clearTxPowerBackoffDB1s;
-(id)txPowerBackoffDB1AtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txDutyCyclePct1sCount;
-(void)clearTxDutyCyclePct1s;
-(id)txDutyCyclePct1AtIndex:(unsigned long long)arg1 ;
-(void)setTxduty0:(unsigned)arg1 ;
-(void)setHasTxduty0:(BOOL)arg1 ;
-(BOOL)hasTxduty0;
-(void)setTxduty1:(unsigned)arg1 ;
-(void)setHasTxduty1:(BOOL)arg1 ;
-(BOOL)hasTxduty1;
-(void)setTxpowerbackoff0:(unsigned)arg1 ;
-(void)setHasTxpowerbackoff0:(BOOL)arg1 ;
-(BOOL)hasTxpowerbackoff0;
-(void)setTxpowerbackoff1:(unsigned)arg1 ;
-(void)setHasTxpowerbackoff1:(BOOL)arg1 ;
-(BOOL)hasTxpowerbackoff1;
-(void)setActivechains0:(unsigned)arg1 ;
-(void)setHasActivechains0:(BOOL)arg1 ;
-(BOOL)hasActivechains0;
-(void)setActivechains1:(unsigned)arg1 ;
-(void)setHasActivechains1:(BOOL)arg1 ;
-(BOOL)hasActivechains1;
-(void)setTemp0:(unsigned)arg1 ;
-(void)setHasTemp0:(BOOL)arg1 ;
-(BOOL)hasTemp0;
-(void)setTemp1:(unsigned)arg1 ;
-(void)setHasTemp1:(BOOL)arg1 ;
-(BOOL)hasTemp1;
-(void)setVoltage0:(unsigned)arg1 ;
-(void)setHasVoltage0:(BOOL)arg1 ;
-(BOOL)hasVoltage0;
-(void)setVoltage1:(unsigned)arg1 ;
-(void)setHasVoltage1:(BOOL)arg1 ;
-(BOOL)hasVoltage1;
-(void)setPpm0:(unsigned)arg1 ;
-(void)setHasPpm0:(BOOL)arg1 ;
-(BOOL)hasPpm0;
-(void)setPpm1:(unsigned)arg1 ;
-(void)setHasPpm1:(BOOL)arg1 ;
-(BOOL)hasPpm1;
-(void)setCtlmid0:(unsigned)arg1 ;
-(void)setHasCtlmid0:(BOOL)arg1 ;
-(BOOL)hasCtlmid0;
-(void)setCtlmid1:(unsigned)arg1 ;
-(void)setHasCtlmid1:(BOOL)arg1 ;
-(BOOL)hasCtlmid1;
-(void)setTvpmindex0:(unsigned)arg1 ;
-(void)setHasTvpmindex0:(BOOL)arg1 ;
-(BOOL)hasTvpmindex0;
-(void)setTvpmindex1:(unsigned)arg1 ;
-(void)setHasTvpmindex1:(BOOL)arg1 ;
-(BOOL)hasTvpmindex1;
-(void)setRc1Request:(unsigned)arg1 ;
-(void)setHasRc1Request:(BOOL)arg1 ;
-(BOOL)hasRc1Request;
-(void)setRc1Duration:(unsigned)arg1 ;
-(void)setHasRc1Duration:(BOOL)arg1 ;
-(BOOL)hasRc1Duration;
-(void)setRc1wlanCrit:(unsigned)arg1 ;
-(void)setHasRc1wlanCrit:(BOOL)arg1 ;
-(BOOL)hasRc1wlanCrit;
-(void)setRc1wlanCritDuration:(unsigned)arg1 ;
-(void)setHasRc1wlanCritDuration:(BOOL)arg1 ;
-(BOOL)hasRc1wlanCritDuration;
-(void)setRc2Request:(unsigned)arg1 ;
-(void)setHasRc2Request:(BOOL)arg1 ;
-(BOOL)hasRc2Request;
-(void)setRc2Duration:(unsigned)arg1 ;
-(void)setHasRc2Duration:(BOOL)arg1 ;
-(BOOL)hasRc2Duration;
-(void)setRc2Grant:(unsigned)arg1 ;
-(void)setHasRc2Grant:(BOOL)arg1 ;
-(BOOL)hasRc2Grant;
-(void)setRc2LongGrant:(unsigned)arg1 ;
-(void)setHasRc2LongGrant:(BOOL)arg1 ;
-(BOOL)hasRc2LongGrant;
-(void)setRc2cts2a:(unsigned)arg1 ;
-(void)setHasRc2cts2a:(BOOL)arg1 ;
-(BOOL)hasRc2cts2a;
-(BOOL)hasSdbtdm;
-(NSMutableArray *)cTLMIndexs;
-(NSMutableArray *)txPowerBackoffDBs;
-(NSMutableArray *)txDutyCyclePcts;
-(NSMutableArray *)cTLMIndex1s;
-(NSMutableArray *)txPowerBackoffDB1s;
-(NSMutableArray *)txDutyCyclePct1s;
-(unsigned)txduty0;
-(unsigned)txduty1;
-(unsigned)txpowerbackoff0;
-(unsigned)txpowerbackoff1;
-(unsigned)activechains0;
-(unsigned)activechains1;
-(unsigned)temp0;
-(unsigned)temp1;
-(unsigned)voltage0;
-(unsigned)voltage1;
-(unsigned)ppm0;
-(unsigned)ppm1;
-(unsigned)ctlmid0;
-(unsigned)ctlmid1;
-(unsigned)tvpmindex0;
-(unsigned)tvpmindex1;
-(unsigned)rc1Request;
-(unsigned)rc1Duration;
-(unsigned)rc1wlanCrit;
-(unsigned)rc1wlanCritDuration;
-(unsigned)rc2Request;
-(unsigned)rc2Duration;
-(unsigned)rc2Grant;
-(unsigned)rc2LongGrant;
-(unsigned)rc2cts2a;
-(WiFiAnalyticsAWDWiFiTDM *)sdbtdm;
@end

