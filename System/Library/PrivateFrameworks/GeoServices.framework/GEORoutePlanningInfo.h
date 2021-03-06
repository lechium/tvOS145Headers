/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAdvisoriesInfo, GEOFormattedString, GEORouteInformation;

@interface GEORoutePlanningInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOAdvisoriesInfo* _advisoriesInfo;
	GEOFormattedString* _infrastructureDescription;
	GEOFormattedString* _labelDetailText;
	GEORouteInformation* _routePlanningDescription;
	GEOFormattedString* _trafficDescriptionText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_advisoriesInfo : 1;
		unsigned read_infrastructureDescription : 1;
		unsigned read_labelDetailText : 1;
		unsigned read_routePlanningDescription : 1;
		unsigned read_trafficDescriptionText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasRoutePlanningDescription; 
@property (nonatomic,retain) GEORouteInformation * routePlanningDescription; 
@property (nonatomic,readonly) BOOL hasLabelDetailText; 
@property (nonatomic,retain) GEOFormattedString * labelDetailText; 
@property (nonatomic,readonly) BOOL hasInfrastructureDescription; 
@property (nonatomic,retain) GEOFormattedString * infrastructureDescription; 
@property (nonatomic,readonly) BOOL hasAdvisoriesInfo; 
@property (nonatomic,retain) GEOAdvisoriesInfo * advisoriesInfo; 
@property (nonatomic,readonly) BOOL hasTrafficDescriptionText; 
@property (nonatomic,retain) GEOFormattedString * trafficDescriptionText; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOFormattedString *)trafficDescriptionText;
-(GEOFormattedString *)labelDetailText;
-(GEOFormattedString *)infrastructureDescription;
-(GEORouteInformation *)routePlanningDescription;
-(GEOAdvisoriesInfo *)advisoriesInfo;
-(void)setInfrastructureDescription:(GEOFormattedString *)arg1 ;
-(void)setRoutePlanningDescription:(GEORouteInformation *)arg1 ;
-(BOOL)hasInfrastructureDescription;
-(BOOL)hasRoutePlanningDescription;
-(void)setLabelDetailText:(GEOFormattedString *)arg1 ;
-(void)setAdvisoriesInfo:(GEOAdvisoriesInfo *)arg1 ;
-(void)setTrafficDescriptionText:(GEOFormattedString *)arg1 ;
-(BOOL)hasLabelDetailText;
-(BOOL)hasAdvisoriesInfo;
-(BOOL)hasTrafficDescriptionText;
@end

