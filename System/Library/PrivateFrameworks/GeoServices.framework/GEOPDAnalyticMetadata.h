/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAbAssignInfo, NSString, GEOLocalTime, NSMutableArray;

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOSessionID _sessionId;
	GEOAbAssignInfo* _abAssignInfo;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	NSString* _hardwareModel;
	NSString* _loggedAbExperiment;
	NSString* _osVersion;
	NSString* _productName;
	double _relativeTimestamp;
	GEOLocalTime* _requestTime;
	NSMutableArray* _serviceTags;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _requestSource;
	unsigned _sequenceNumber;
	BOOL _isFromApi;
	BOOL _isInternalInstall;
	BOOL _isInternalTool;
	BOOL _isSiriOriginalRequest;
	struct {
		unsigned has_sessionId : 1;
		unsigned has_relativeTimestamp : 1;
		unsigned has_requestSource : 1;
		unsigned has_sequenceNumber : 1;
		unsigned has_isFromApi : 1;
		unsigned has_isInternalInstall : 1;
		unsigned has_isInternalTool : 1;
		unsigned has_isSiriOriginalRequest : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abAssignInfo : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_appMajorVersion : 1;
		unsigned read_appMinorVersion : 1;
		unsigned read_hardwareModel : 1;
		unsigned read_loggedAbExperiment : 1;
		unsigned read_osVersion : 1;
		unsigned read_productName : 1;
		unsigned read_requestTime : 1;
		unsigned read_serviceTags : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion; 
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion; 
@property (nonatomic,readonly) BOOL hasHardwareModel; 
@property (nonatomic,retain) NSString * hardwareModel; 
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion; 
@property (assign,nonatomic) BOOL hasIsInternalTool; 
@property (assign,nonatomic) BOOL isInternalTool; 
@property (assign,nonatomic) BOOL hasIsInternalInstall; 
@property (assign,nonatomic) BOOL isInternalInstall; 
@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) BOOL hasRequestSource; 
@property (assign,nonatomic) int requestSource; 
@property (assign,nonatomic) BOOL hasIsFromApi; 
@property (assign,nonatomic) BOOL isFromApi; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,readonly) BOOL hasProductName; 
@property (nonatomic,retain) NSString * productName; 
@property (nonatomic,readonly) BOOL hasLoggedAbExperiment; 
@property (nonatomic,retain) NSString * loggedAbExperiment; 
@property (nonatomic,readonly) BOOL hasAbAssignInfo; 
@property (nonatomic,retain) GEOAbAssignInfo * abAssignInfo; 
@property (nonatomic,readonly) BOOL hasRequestTime; 
@property (nonatomic,retain) GEOLocalTime * requestTime; 
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) double relativeTimestamp; 
@property (assign,nonatomic) BOOL hasIsSiriOriginalRequest; 
@property (assign,nonatomic) BOOL isSiriOriginalRequest; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)sequenceNumber;
-(NSString *)productName;
-(BOOL)isInternalInstall;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(BOOL)hasSessionId;
-(GEOSessionID)sessionId;
-(void)setHasSessionId:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(void)setRequestTime:(GEOLocalTime *)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)appMajorVersion;
-(NSString *)appMinorVersion;
-(NSString *)hardwareModel;
-(NSString *)loggedAbExperiment;
-(GEOAbAssignInfo *)abAssignInfo;
-(GEOLocalTime *)requestTime;
-(void)setHardwareModel:(NSString *)arg1 ;
-(void)setIsInternalTool:(BOOL)arg1 ;
-(void)setIsInternalInstall:(BOOL)arg1 ;
-(void)setRequestSource:(int)arg1 ;
-(void)setIsFromApi:(BOOL)arg1 ;
-(void)setProductName:(NSString *)arg1 ;
-(void)setLoggedAbExperiment:(NSString *)arg1 ;
-(void)setAbAssignInfo:(GEOAbAssignInfo *)arg1 ;
-(void)setRelativeTimestamp:(double)arg1 ;
-(void)setIsSiriOriginalRequest:(BOOL)arg1 ;
-(BOOL)hasAppMajorVersion;
-(BOOL)hasAppMinorVersion;
-(BOOL)hasHardwareModel;
-(BOOL)hasOsVersion;
-(BOOL)isInternalTool;
-(void)setHasIsInternalTool:(BOOL)arg1 ;
-(BOOL)hasIsInternalTool;
-(void)setHasIsInternalInstall:(BOOL)arg1 ;
-(BOOL)hasIsInternalInstall;
-(int)requestSource;
-(void)setHasRequestSource:(BOOL)arg1 ;
-(BOOL)hasRequestSource;
-(id)requestSourceAsString:(int)arg1 ;
-(int)StringAsRequestSource:(id)arg1 ;
-(BOOL)isFromApi;
-(void)setHasIsFromApi:(BOOL)arg1 ;
-(BOOL)hasIsFromApi;
-(BOOL)hasProductName;
-(BOOL)hasLoggedAbExperiment;
-(BOOL)hasAbAssignInfo;
-(BOOL)hasRequestTime;
-(double)relativeTimestamp;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasRelativeTimestamp;
-(BOOL)isSiriOriginalRequest;
-(void)setHasIsSiriOriginalRequest:(BOOL)arg1 ;
-(BOOL)hasIsSiriOriginalRequest;
@end

