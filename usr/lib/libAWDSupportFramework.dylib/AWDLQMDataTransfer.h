/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDLQMDataTransfer : PBCodable <NSCopying> {

	NSString* _bundleName;
	int _lQM;
	unsigned _rxBytes;
	unsigned _stateDuration;
	unsigned _txBytes;
	SCD_Struct_AW1 _has;

}

@property (nonatomic,readonly) BOOL hasBundleName; 
@property (nonatomic,retain) NSString * bundleName;               //@synthesize bundleName=_bundleName - In the implementation block
@property (assign,nonatomic) BOOL hasLQM; 
@property (assign,nonatomic) int lQM;                             //@synthesize lQM=_lQM - In the implementation block
@property (assign,nonatomic) BOOL hasTxBytes; 
@property (assign,nonatomic) unsigned txBytes;                    //@synthesize txBytes=_txBytes - In the implementation block
@property (assign,nonatomic) BOOL hasRxBytes; 
@property (assign,nonatomic) unsigned rxBytes;                    //@synthesize rxBytes=_rxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasStateDuration; 
@property (assign,nonatomic) unsigned stateDuration;              //@synthesize stateDuration=_stateDuration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleName;
-(int)lQM;
-(void)setLQM:(int)arg1 ;
-(void)setHasLQM:(BOOL)arg1 ;
-(BOOL)hasLQM;
-(id)lQMAsString:(int)arg1 ;
-(int)StringAsLQM:(id)arg1 ;
-(void)setTxBytes:(unsigned)arg1 ;
-(void)setHasTxBytes:(BOOL)arg1 ;
-(BOOL)hasTxBytes;
-(void)setRxBytes:(unsigned)arg1 ;
-(void)setHasRxBytes:(BOOL)arg1 ;
-(BOOL)hasRxBytes;
-(void)setStateDuration:(unsigned)arg1 ;
-(void)setHasStateDuration:(BOOL)arg1 ;
-(BOOL)hasStateDuration;
-(unsigned)txBytes;
-(unsigned)rxBytes;
-(unsigned)stateDuration;
@end

