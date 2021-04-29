/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapRegion;

@interface GEORestrictedZoneId : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _boundingBox;
	unsigned long long _identifier;
	int _type;
	unsigned _version;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasBoundingBox; 
@property (nonatomic,retain) GEOMapRegion * boundingBox; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)identifier;
-(unsigned)version;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(GEOMapRegion *)boundingBox;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)setBoundingBox:(GEOMapRegion *)arg1 ;
-(BOOL)hasBoundingBox;
@end

