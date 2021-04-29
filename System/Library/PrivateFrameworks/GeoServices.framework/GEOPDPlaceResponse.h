/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOClientMetrics, GEOPDDatasetABStatus, NSString, NSMutableArray, GEOPDPlaceGlobalResult;

@interface GEOPDPlaceResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOClientMetrics* _clientMetrics;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSString* _debugApiKey;
	unsigned long long _debugLatencyMs;
	NSMutableArray* _displayLanguages;
	NSString* _displayRegion;
	GEOPDPlaceGlobalResult* _globalResult;
	NSMutableArray* _mapsResults;
	NSMutableArray* _legacyPlaceResults;
	NSMutableArray* _spokenLanguages;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _requestType;
	int _status;
	struct {
		unsigned has_debugLatencyMs : 1;
		unsigned has_requestType : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_clientMetrics : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_debugApiKey : 1;
		unsigned read_displayLanguages : 1;
		unsigned read_displayRegion : 1;
		unsigned read_globalResult : 1;
		unsigned read_mapsResults : 1;
		unsigned read_legacyPlaceResults : 1;
		unsigned read_spokenLanguages : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDebugLatencyMs; 
@property (assign,nonatomic) unsigned long long debugLatencyMs; 
@property (nonatomic,readonly) BOOL hasClientMetrics; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType; 
@property (nonatomic,readonly) BOOL hasGlobalResult; 
@property (nonatomic,retain) GEOPDPlaceGlobalResult * globalResult; 
@property (nonatomic,retain) NSMutableArray * legacyPlaceResults; 
@property (nonatomic,retain) NSMutableArray * displayLanguages; 
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion; 
@property (nonatomic,retain) NSMutableArray * spokenLanguages; 
@property (nonatomic,readonly) BOOL hasDebugApiKey; 
@property (nonatomic,retain) NSString * debugApiKey; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,retain) NSMutableArray * mapsResults; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayLanguageType;
+(Class)spokenLanguageType;
+(Class)legacyPlaceResultType;
+(Class)mapsResultType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)requestType;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(NSMutableArray *)displayLanguages;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(BOOL)hasDatasetAbStatus;
-(NSMutableArray *)mapsResults;
-(void)addDisplayLanguage:(id)arg1 ;
-(unsigned long long)displayLanguagesCount;
-(void)clearDisplayLanguages;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(id)_disambiguationLabels;
-(NSMutableArray *)spokenLanguages;
-(NSString *)displayRegion;
-(void)addSpokenLanguage:(id)arg1 ;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(unsigned long long)spokenLanguagesCount;
-(void)clearSpokenLanguages;
-(id)spokenLanguageAtIndex:(unsigned long long)arg1 ;
-(void)setSpokenLanguages:(NSMutableArray *)arg1 ;
-(BOOL)hasDisplayRegion;
-(GEOPDPlaceGlobalResult *)globalResult;
-(NSString *)debugApiKey;
-(GEOClientMetrics *)clientMetrics;
-(void)setGlobalResult:(GEOPDPlaceGlobalResult *)arg1 ;
-(void)addLegacyPlaceResult:(id)arg1 ;
-(void)setDebugApiKey:(NSString *)arg1 ;
-(void)addMapsResult:(id)arg1 ;
-(void)setDebugLatencyMs:(unsigned long long)arg1 ;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(NSMutableArray *)legacyPlaceResults;
-(BOOL)hasGlobalResult;
-(unsigned long long)legacyPlaceResultsCount;
-(void)clearLegacyPlaceResults;
-(id)legacyPlaceResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mapsResultsCount;
-(void)clearMapsResults;
-(id)mapsResultAtIndex:(unsigned long long)arg1 ;
-(void)setLegacyPlaceResults:(NSMutableArray *)arg1 ;
-(BOOL)hasDebugApiKey;
-(void)setMapsResults:(NSMutableArray *)arg1 ;
-(unsigned long long)debugLatencyMs;
-(void)setHasDebugLatencyMs:(BOOL)arg1 ;
-(BOOL)hasDebugLatencyMs;
-(BOOL)hasClientMetrics;
-(id)resultsWithResultType:(int)arg1 ;
-(id)initWithPlace:(id)arg1 forRequestType:(int)arg2 ;
-(unsigned long long)resultsCountWithResultType:(int)arg1 ;
@end
