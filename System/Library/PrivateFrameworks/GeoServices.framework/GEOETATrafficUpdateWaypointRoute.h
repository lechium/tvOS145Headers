/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEONavigabilityInfo, GEOTrafficBannerText, GEOTraversalTimes;

@interface GEOETATrafficUpdateWaypointRoute : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _incidentsOnUserWaypointRoutes;
	GEONavigabilityInfo* _navigabilityInfo;
	NSMutableArray* _newWaypointRoutes;
	NSMutableArray* _routeLegs;
	GEOTrafficBannerText* _trafficBannerText;
	GEOTraversalTimes* _traversalTimes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _identifier;
	struct {
		unsigned has_identifier : 1;
		unsigned read_unknownFields : 1;
		unsigned read_incidentsOnUserWaypointRoutes : 1;
		unsigned read_navigabilityInfo : 1;
		unsigned read_newWaypointRoutes : 1;
		unsigned read_routeLegs : 1;
		unsigned read_trafficBannerText : 1;
		unsigned read_traversalTimes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,retain) NSMutableArray * routeLegs; 
@property (nonatomic,readonly) BOOL hasTraversalTimes; 
@property (nonatomic,retain) GEOTraversalTimes * traversalTimes; 
@property (nonatomic,retain) NSMutableArray * incidentsOnUserWaypointRoutes; 
@property (nonatomic,readonly) BOOL hasTrafficBannerText; 
@property (nonatomic,retain) GEOTrafficBannerText * trafficBannerText; 
@property (nonatomic,retain) NSMutableArray * newWaypointRoutes; 
@property (nonatomic,readonly) BOOL hasNavigabilityInfo; 
@property (nonatomic,retain) GEONavigabilityInfo * navigabilityInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)routeLegType;
+(Class)incidentsOnUserWaypointRouteType;
+(Class)newWaypointRoutesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
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
-(BOOL)hasIdentifier;
-(NSMutableArray *)newWaypointRoutes;
-(GEOTraversalTimes *)traversalTimes;
-(NSMutableArray *)routeLegs;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)addRouteLeg:(id)arg1 ;
-(unsigned long long)routeLegsCount;
-(void)clearRouteLegs;
-(id)routeLegAtIndex:(unsigned long long)arg1 ;
-(void)setRouteLegs:(NSMutableArray *)arg1 ;
-(void)setTraversalTimes:(GEOTraversalTimes *)arg1 ;
-(BOOL)hasTraversalTimes;
-(NSMutableArray *)incidentsOnUserWaypointRoutes;
-(GEOTrafficBannerText *)trafficBannerText;
-(GEONavigabilityInfo *)navigabilityInfo;
-(void)setTrafficBannerText:(GEOTrafficBannerText *)arg1 ;
-(void)setNavigabilityInfo:(GEONavigabilityInfo *)arg1 ;
-(BOOL)hasTrafficBannerText;
-(BOOL)hasNavigabilityInfo;
-(void)addIncidentsOnUserWaypointRoute:(id)arg1 ;
-(void)addNewWaypointRoutes:(id)arg1 ;
-(unsigned long long)incidentsOnUserWaypointRoutesCount;
-(void)clearIncidentsOnUserWaypointRoutes;
-(id)incidentsOnUserWaypointRouteAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)newWaypointRoutesCount;
-(void)clearNewWaypointRoutes;
-(id)newWaypointRoutesAtIndex:(unsigned long long)arg1 ;
-(void)setIncidentsOnUserWaypointRoutes:(NSMutableArray *)arg1 ;
-(void)setNewWaypointRoutes:(NSMutableArray *)arg1 ;
@end

