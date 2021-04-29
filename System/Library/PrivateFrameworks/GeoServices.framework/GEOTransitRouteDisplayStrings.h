/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOComposedRouteTransitDisplayStrings.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PBDataReader, PBUnknownFields, NSMutableArray, GEOFormattedString, NSString;

@interface GEOTransitRouteDisplayStrings : PBCodable <GEOComposedRouteTransitDisplayStrings, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _advisorys;
	GEOFormattedString* _badge;
	GEOFormattedString* _durationList;
	GEOFormattedString* _duration;
	GEOFormattedString* _planningDescription;
	GEOFormattedString* _travelDescription;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_advisorys : 1;
		unsigned read_badge : 1;
		unsigned read_durationList : 1;
		unsigned read_duration : 1;
		unsigned read_planningDescription : 1;
		unsigned read_travelDescription : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) id<GEOServerFormattedString> previewDurationFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> pickingDurationFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> planningDescriptionFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> transitDescriptionFormatString; 
@property (nonatomic,readonly) NSArray * transitAdvisories; 
@property (nonatomic,readonly) id<GEOServerFormattedString> transitRouteBadge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPlanningDescription; 
@property (nonatomic,retain) GEOFormattedString * planningDescription; 
@property (nonatomic,readonly) BOOL hasDuration; 
@property (nonatomic,retain) GEOFormattedString * duration; 
@property (nonatomic,readonly) BOOL hasDurationList; 
@property (nonatomic,retain) GEOFormattedString * durationList; 
@property (nonatomic,readonly) BOOL hasTravelDescription; 
@property (nonatomic,retain) GEOFormattedString * travelDescription; 
@property (nonatomic,retain) NSMutableArray * advisorys; 
@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,retain) GEOFormattedString * badge; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)advisoryType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOFormattedString *)duration;
-(void)setDuration:(GEOFormattedString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDuration;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOFormattedString *)planningDescription;
-(GEOFormattedString *)durationList;
-(GEOFormattedString *)travelDescription;
-(GEOFormattedString *)badge;
-(void)setPlanningDescription:(GEOFormattedString *)arg1 ;
-(void)setDurationList:(GEOFormattedString *)arg1 ;
-(void)setTravelDescription:(GEOFormattedString *)arg1 ;
-(void)addAdvisory:(id)arg1 ;
-(void)setBadge:(GEOFormattedString *)arg1 ;
-(unsigned long long)advisorysCount;
-(void)clearAdvisorys;
-(id)advisoryAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPlanningDescription;
-(BOOL)hasDurationList;
-(BOOL)hasTravelDescription;
-(NSMutableArray *)advisorys;
-(void)setAdvisorys:(NSMutableArray *)arg1 ;
-(BOOL)hasBadge;
-(id<GEOServerFormattedString>)previewDurationFormatString;
-(id<GEOServerFormattedString>)pickingDurationFormatString;
-(id<GEOServerFormattedString>)planningDescriptionFormatString;
-(id<GEOServerFormattedString>)transitDescriptionFormatString;
-(NSArray *)transitAdvisories;
-(id<GEOServerFormattedString>)transitRouteBadge;
@end

