/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPAddressCorrections, GEORPPersonalizedMapsContext, GEOPDPlaceRequest, GEOPDPlace;

@interface GEORPAddressFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAddressCorrections* _address;
	GEORPPersonalizedMapsContext* _personalizedMaps;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlace* _place;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_personalizedMaps : 1;
		unsigned read_placeRequest : 1;
		unsigned read_place : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEORPAddressCorrections * address; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasPersonalizedMaps; 
@property (nonatomic,retain) GEORPPersonalizedMapsContext * personalizedMaps; 
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(GEORPAddressCorrections *)address;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAddress:(GEORPAddressCorrections *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasAddress;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasPlace;
-(GEOPDPlace *)place;
-(GEORPPersonalizedMapsContext *)personalizedMaps;
-(GEOPDPlaceRequest *)placeRequest;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(void)setPersonalizedMaps:(GEORPPersonalizedMapsContext *)arg1 ;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(BOOL)hasPersonalizedMaps;
-(BOOL)hasPlaceRequest;
@end

