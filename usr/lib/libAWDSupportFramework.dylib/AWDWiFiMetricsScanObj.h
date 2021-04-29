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

@interface AWDWiFiMetricsScanObj : PBCodable <NSCopying> {

	unsigned _durScans;
	unsigned _numScans;
	unsigned _scanType;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasScanType; 
@property (assign,nonatomic) unsigned scanType;              //@synthesize scanType=_scanType - In the implementation block
@property (assign,nonatomic) BOOL hasNumScans; 
@property (assign,nonatomic) unsigned numScans;              //@synthesize numScans=_numScans - In the implementation block
@property (assign,nonatomic) BOOL hasDurScans; 
@property (assign,nonatomic) unsigned durScans;              //@synthesize durScans=_durScans - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScanType:(unsigned)arg1 ;
-(void)setHasScanType:(BOOL)arg1 ;
-(BOOL)hasScanType;
-(void)setNumScans:(unsigned)arg1 ;
-(void)setHasNumScans:(BOOL)arg1 ;
-(BOOL)hasNumScans;
-(void)setDurScans:(unsigned)arg1 ;
-(void)setHasDurScans:(BOOL)arg1 ;
-(BOOL)hasDurScans;
-(unsigned)scanType;
-(unsigned)numScans;
-(unsigned)durScans;
@end

