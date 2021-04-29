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

@class PBDataReader, PBUnknownFields, GEOClientMetrics, GEOPDDatasetABStatus, NSString, NSMutableArray, GEOETAResult, GEOETAServiceResponseSummary, GEOPlaceSearchResponse;

@interface GEOETAResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	GEOClientMetrics* _clientMetrics;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSString* _debugData;
	unsigned long long _debugServerLatencyMs;
	NSMutableArray* _etaResultReferencePointDestinations;
	GEOETAResult* _etaResultReferencePointOrigin;
	NSMutableArray* _etaResults;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	GEOPlaceSearchResponse* _originPlaceSearchResponse;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_debugServerLatencyMs : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_problemDetails : 1;
		unsigned read_clientMetrics : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_debugData : 1;
		unsigned read_etaResultReferencePointDestinations : 1;
		unsigned read_etaResultReferencePointOrigin : 1;
		unsigned read_etaResults : 1;
		unsigned read_etaServiceSummary : 1;
		unsigned read_originPlaceSearchResponse : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (assign,nonatomic) BOOL hasDebugServerLatencyMs; 
@property (assign,nonatomic) unsigned long long debugServerLatencyMs; 
@property (nonatomic,readonly) BOOL hasClientMetrics; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * etaResults; 
@property (nonatomic,readonly) BOOL hasOriginPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * originPlaceSearchResponse; 
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) GEOProblemDetail* problemDetails; 
@property (nonatomic,readonly) BOOL hasEtaResultReferencePointOrigin; 
@property (nonatomic,retain) GEOETAResult * etaResultReferencePointOrigin; 
@property (nonatomic,retain) NSMutableArray * etaResultReferencePointDestinations; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,readonly) BOOL hasDebugData; 
@property (nonatomic,retain) NSString * debugData; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)etaResultType;
+(Class)etaResultReferencePointDestinationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(BOOL)hasDatasetAbStatus;
-(GEOProblemDetail*)problemDetails;
-(unsigned long long)problemDetailsCount;
-(GEOClientMetrics *)clientMetrics;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(BOOL)hasClientMetrics;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(void)setDebugServerLatencyMs:(unsigned long long)arg1 ;
-(BOOL)hasEtaServiceSummary;
-(unsigned long long)debugServerLatencyMs;
-(void)setHasDebugServerLatencyMs:(BOOL)arg1 ;
-(BOOL)hasDebugServerLatencyMs;
-(id)etaResultAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)etaResults;
-(unsigned long long)etaResultsCount;
-(void)clearProblemDetails;
-(NSString *)debugData;
-(void)addProblemDetail:(GEOProblemDetail)arg1 ;
-(void)setDebugData:(NSString *)arg1 ;
-(GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1 ;
-(void)setProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasDebugData;
-(GEOPlaceSearchResponse *)originPlaceSearchResponse;
-(GEOETAResult *)etaResultReferencePointOrigin;
-(void)addEtaResult:(id)arg1 ;
-(void)setOriginPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(void)setEtaResultReferencePointOrigin:(GEOETAResult *)arg1 ;
-(void)addEtaResultReferencePointDestination:(id)arg1 ;
-(NSMutableArray *)etaResultReferencePointDestinations;
-(BOOL)hasOriginPlaceSearchResponse;
-(BOOL)hasEtaResultReferencePointOrigin;
-(void)clearEtaResults;
-(unsigned long long)etaResultReferencePointDestinationsCount;
-(void)clearEtaResultReferencePointDestinations;
-(id)etaResultReferencePointDestinationAtIndex:(unsigned long long)arg1 ;
-(void)setEtaResults:(NSMutableArray *)arg1 ;
-(void)setEtaResultReferencePointDestinations:(NSMutableArray *)arg1 ;
@end

