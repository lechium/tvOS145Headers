/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiDPSNotification : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _problemAC;
	int _symptom;
	BOOL _facetimeCallInProgress;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSymptom; 
@property (assign,nonatomic) int symptom;                                 //@synthesize symptom=_symptom - In the implementation block
@property (assign,nonatomic) BOOL hasProblemAC; 
@property (assign,nonatomic) unsigned problemAC;                          //@synthesize problemAC=_problemAC - In the implementation block
@property (assign,nonatomic) BOOL hasFacetimeCallInProgress; 
@property (assign,nonatomic) BOOL facetimeCallInProgress;                 //@synthesize facetimeCallInProgress=_facetimeCallInProgress - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setFacetimeCallInProgress:(BOOL)arg1 ;
-(void)setHasFacetimeCallInProgress:(BOOL)arg1 ;
-(BOOL)hasFacetimeCallInProgress;
-(BOOL)facetimeCallInProgress;
-(int)symptom;
-(void)setSymptom:(int)arg1 ;
-(void)setHasSymptom:(BOOL)arg1 ;
-(BOOL)hasSymptom;
-(id)symptomAsString:(int)arg1 ;
-(int)StringAsSymptom:(id)arg1 ;
-(void)setProblemAC:(unsigned)arg1 ;
-(void)setHasProblemAC:(BOOL)arg1 ;
-(BOOL)hasProblemAC;
-(unsigned)problemAC;
@end

