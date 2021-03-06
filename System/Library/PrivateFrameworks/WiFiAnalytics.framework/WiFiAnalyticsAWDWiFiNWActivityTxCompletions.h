/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityTxCompletions : PBCodable <NSCopying> {

	unsigned _chipmodeerror;
	unsigned _expired;
	unsigned _internalerror;
	unsigned _ioerror;
	unsigned _mbfree;
	unsigned _noack;
	unsigned _nobuf;
	unsigned _noremotepeer;
	unsigned _noresources;
	unsigned _success;
	unsigned _txfailure;
	SCD_Struct_Wi10 _has;

}

@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) unsigned success;                    //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasExpired; 
@property (assign,nonatomic) unsigned expired;                    //@synthesize expired=_expired - In the implementation block
@property (assign,nonatomic) BOOL hasNobuf; 
@property (assign,nonatomic) unsigned nobuf;                      //@synthesize nobuf=_nobuf - In the implementation block
@property (assign,nonatomic) BOOL hasNoack; 
@property (assign,nonatomic) unsigned noack;                      //@synthesize noack=_noack - In the implementation block
@property (assign,nonatomic) BOOL hasTxfailure; 
@property (assign,nonatomic) unsigned txfailure;                  //@synthesize txfailure=_txfailure - In the implementation block
@property (assign,nonatomic) BOOL hasNoresources; 
@property (assign,nonatomic) unsigned noresources;                //@synthesize noresources=_noresources - In the implementation block
@property (assign,nonatomic) BOOL hasIoerror; 
@property (assign,nonatomic) unsigned ioerror;                    //@synthesize ioerror=_ioerror - In the implementation block
@property (assign,nonatomic) BOOL hasMbfree; 
@property (assign,nonatomic) unsigned mbfree;                     //@synthesize mbfree=_mbfree - In the implementation block
@property (assign,nonatomic) BOOL hasChipmodeerror; 
@property (assign,nonatomic) unsigned chipmodeerror;              //@synthesize chipmodeerror=_chipmodeerror - In the implementation block
@property (assign,nonatomic) BOOL hasNoremotepeer; 
@property (assign,nonatomic) unsigned noremotepeer;               //@synthesize noremotepeer=_noremotepeer - In the implementation block
@property (assign,nonatomic) BOOL hasInternalerror; 
@property (assign,nonatomic) unsigned internalerror;              //@synthesize internalerror=_internalerror - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setExpired:(unsigned)arg1 ;
-(unsigned)expired;
-(unsigned)success;
-(void)setSuccess:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(void)setHasExpired:(BOOL)arg1 ;
-(BOOL)hasExpired;
-(void)setNobuf:(unsigned)arg1 ;
-(void)setHasNobuf:(BOOL)arg1 ;
-(BOOL)hasNobuf;
-(void)setNoack:(unsigned)arg1 ;
-(void)setHasNoack:(BOOL)arg1 ;
-(BOOL)hasNoack;
-(void)setTxfailure:(unsigned)arg1 ;
-(void)setHasTxfailure:(BOOL)arg1 ;
-(BOOL)hasTxfailure;
-(void)setNoresources:(unsigned)arg1 ;
-(void)setHasNoresources:(BOOL)arg1 ;
-(BOOL)hasNoresources;
-(void)setIoerror:(unsigned)arg1 ;
-(void)setHasIoerror:(BOOL)arg1 ;
-(BOOL)hasIoerror;
-(void)setMbfree:(unsigned)arg1 ;
-(void)setHasMbfree:(BOOL)arg1 ;
-(BOOL)hasMbfree;
-(void)setChipmodeerror:(unsigned)arg1 ;
-(void)setHasChipmodeerror:(BOOL)arg1 ;
-(BOOL)hasChipmodeerror;
-(void)setNoremotepeer:(unsigned)arg1 ;
-(void)setHasNoremotepeer:(BOOL)arg1 ;
-(BOOL)hasNoremotepeer;
-(void)setInternalerror:(unsigned)arg1 ;
-(void)setHasInternalerror:(BOOL)arg1 ;
-(BOOL)hasInternalerror;
-(unsigned)nobuf;
-(unsigned)noack;
-(unsigned)txfailure;
-(unsigned)noresources;
-(unsigned)ioerror;
-(unsigned)mbfree;
-(unsigned)chipmodeerror;
-(unsigned)noremotepeer;
-(unsigned)internalerror;
@end

