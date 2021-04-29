/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreTCPTFOStatsReport : PBCodable <NSCopying> {

	unsigned long long _numTfoBlackholed;
	unsigned long long _numTfoCookieInvalid;
	unsigned long long _numTfoCookieRcv;
	unsigned long long _numTfoCookieReq;
	unsigned long long _numTfoCookieReqRcv;
	unsigned long long _numTfoCookieSent;
	unsigned long long _numTfoFallback;
	unsigned long long _numTfoSynDataAcked;
	unsigned long long _numTfoSynDataRcv;
	unsigned long long _numTfoSynDataSent;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasNumTfoCookieReq; 
@property (assign,nonatomic) unsigned long long numTfoCookieReq;                  //@synthesize numTfoCookieReq=_numTfoCookieReq - In the implementation block
@property (assign,nonatomic) BOOL hasNumTfoCookieRcv; 
@property (assign,nonatomic) unsigned long long numTfoCookieRcv;                  //@synthesize numTfoCookieRcv=_numTfoCookieRcv - In the implementation block
@property (assign,nonatomic) BOOL hasNumTfoFallback; 
@property (assign,nonatomic) unsigned long long numTfoFallback;                   //@synthesize numTfoFallback=_numTfoFallback - In the implementation block
@property (assign,nonatomic) BOOL hasNumTfoSynDataSent; 
@property (assign,nonatomic) unsigned long long numTfoSynDataSent;                //@synthesize numTfoSynDataSent=_numTfoSynDataSent - In the implementation block
@property (assign,nonatomic) BOOL hasNumTfoSynDataAcked; 
@property (assign,nonatomic) unsigned long long numTfoSynDataAcked;               //@synthesize numTfoSynDataAcked=_numTfoSynDataAcked - In the implementation block
@property (assign,nonatomic) BOOL hasNumTfoSynDataRcv; 
@property (assign,nonatomic) unsigned long long numTfoSynDataRcv;                 //@synthesize numTfoSynDataRcv=_numTfoSynDataRcv - In the implementation block
@property (assign,nonatomic) BOOL hasNumTfoCookieReqRcv; 
@property (assign,nonatomic) unsigned long long numTfoCookieReqRcv;               //@synthesize numTfoCookieReqRcv=_numTfoCookieReqRcv - In the implementation block
@property (assign,nonatomic) BOOL hasNumTfoCookieSent; 
@property (assign,nonatomic) unsigned long long numTfoCookieSent;                 //@synthesize numTfoCookieSent=_numTfoCookieSent - In the implementation block
@property (assign,nonatomic) BOOL hasNumTfoCookieInvalid; 
@property (assign,nonatomic) unsigned long long numTfoCookieInvalid;              //@synthesize numTfoCookieInvalid=_numTfoCookieInvalid - In the implementation block
@property (assign,nonatomic) BOOL hasNumTfoBlackholed; 
@property (assign,nonatomic) unsigned long long numTfoBlackholed;                 //@synthesize numTfoBlackholed=_numTfoBlackholed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNumTfoCookieReq:(unsigned long long)arg1 ;
-(void)setHasNumTfoCookieReq:(BOOL)arg1 ;
-(BOOL)hasNumTfoCookieReq;
-(void)setNumTfoCookieRcv:(unsigned long long)arg1 ;
-(void)setHasNumTfoCookieRcv:(BOOL)arg1 ;
-(BOOL)hasNumTfoCookieRcv;
-(void)setNumTfoFallback:(unsigned long long)arg1 ;
-(void)setHasNumTfoFallback:(BOOL)arg1 ;
-(BOOL)hasNumTfoFallback;
-(void)setNumTfoSynDataSent:(unsigned long long)arg1 ;
-(void)setHasNumTfoSynDataSent:(BOOL)arg1 ;
-(BOOL)hasNumTfoSynDataSent;
-(void)setNumTfoSynDataAcked:(unsigned long long)arg1 ;
-(void)setHasNumTfoSynDataAcked:(BOOL)arg1 ;
-(BOOL)hasNumTfoSynDataAcked;
-(void)setNumTfoSynDataRcv:(unsigned long long)arg1 ;
-(void)setHasNumTfoSynDataRcv:(BOOL)arg1 ;
-(BOOL)hasNumTfoSynDataRcv;
-(void)setNumTfoCookieReqRcv:(unsigned long long)arg1 ;
-(void)setHasNumTfoCookieReqRcv:(BOOL)arg1 ;
-(BOOL)hasNumTfoCookieReqRcv;
-(void)setNumTfoCookieSent:(unsigned long long)arg1 ;
-(void)setHasNumTfoCookieSent:(BOOL)arg1 ;
-(BOOL)hasNumTfoCookieSent;
-(void)setNumTfoCookieInvalid:(unsigned long long)arg1 ;
-(void)setHasNumTfoCookieInvalid:(BOOL)arg1 ;
-(BOOL)hasNumTfoCookieInvalid;
-(void)setNumTfoBlackholed:(unsigned long long)arg1 ;
-(void)setHasNumTfoBlackholed:(BOOL)arg1 ;
-(BOOL)hasNumTfoBlackholed;
-(unsigned long long)numTfoCookieReq;
-(unsigned long long)numTfoCookieRcv;
-(unsigned long long)numTfoFallback;
-(unsigned long long)numTfoSynDataSent;
-(unsigned long long)numTfoSynDataAcked;
-(unsigned long long)numTfoSynDataRcv;
-(unsigned long long)numTfoCookieReqRcv;
-(unsigned long long)numTfoCookieSent;
-(unsigned long long)numTfoCookieInvalid;
-(unsigned long long)numTfoBlackholed;
@end

