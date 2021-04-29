/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORPIncidentAnnotationDetails, GEORPNewIncidentDetails, GEORPSiriContext;

@interface GEORPIncidentFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEORPIncidentAnnotationDetails* _incidentAnnotationDetails;
	GEORPNewIncidentDetails* _newIncidentDetails;
	GEORPSiriContext* _siriContext;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_incidentAnnotationDetails : 1;
		unsigned read_newIncidentDetails : 1;
		unsigned read_siriContext : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasNewIncidentDetails; 
@property (nonatomic,retain) GEORPNewIncidentDetails * newIncidentDetails; 
@property (nonatomic,readonly) BOOL hasIncidentAnnotationDetails; 
@property (nonatomic,retain) GEORPIncidentAnnotationDetails * incidentAnnotationDetails; 
@property (nonatomic,readonly) BOOL hasSiriContext; 
@property (nonatomic,retain) GEORPSiriContext * siriContext; 
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
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEORPNewIncidentDetails *)newIncidentDetails;
-(GEORPIncidentAnnotationDetails *)incidentAnnotationDetails;
-(GEORPSiriContext *)siriContext;
-(void)setNewIncidentDetails:(GEORPNewIncidentDetails *)arg1 ;
-(void)setIncidentAnnotationDetails:(GEORPIncidentAnnotationDetails *)arg1 ;
-(void)setSiriContext:(GEORPSiriContext *)arg1 ;
-(BOOL)hasNewIncidentDetails;
-(BOOL)hasIncidentAnnotationDetails;
-(BOOL)hasSiriContext;
@end

