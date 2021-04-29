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

@class PBDataReader, NSString;

@interface GEOUsageCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOTileUsage* _tileUsages;
	unsigned long long _tileUsagesCount;
	unsigned long long _tileUsagesSpace;
	GEOSessionID _sessionID;
	NSString* _countryCode;
	NSString* _hwMachine;
	long long _requestErrorCode;
	NSString* _requestErrorDescription;
	NSString* _requestErrorDomain;
	double _timestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _cellWifi;
	int _geoService;
	int _placeRequestType;
	int _requestDataSize;
	int _responseDataSize;
	int _responseTime;
	BOOL _sessionIDIsPersistent;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_requestErrorCode : 1;
		unsigned has_timestamp : 1;
		unsigned has_cellWifi : 1;
		unsigned has_geoService : 1;
		unsigned has_placeRequestType : 1;
		unsigned has_requestDataSize : 1;
		unsigned has_responseDataSize : 1;
		unsigned has_responseTime : 1;
		unsigned has_sessionIDIsPersistent : 1;
		unsigned read_tileUsages : 1;
		unsigned read_countryCode : 1;
		unsigned read_hwMachine : 1;
		unsigned read_requestErrorDescription : 1;
		unsigned read_requestErrorDomain : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasGeoService; 
@property (assign,nonatomic) int geoService; 
@property (assign,nonatomic) BOOL hasRequestDataSize; 
@property (assign,nonatomic) int requestDataSize; 
@property (assign,nonatomic) BOOL hasResponseDataSize; 
@property (assign,nonatomic) int responseDataSize; 
@property (assign,nonatomic) BOOL hasResponseTime; 
@property (assign,nonatomic) int responseTime; 
@property (assign,nonatomic) BOOL hasCellWifi; 
@property (assign,nonatomic) int cellWifi; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) unsigned long long tileUsagesCount; 
@property (nonatomic,readonly) GEOTileUsage* tileUsages; 
@property (nonatomic,readonly) BOOL hasHwMachine; 
@property (nonatomic,retain) NSString * hwMachine; 
@property (assign,nonatomic) BOOL hasSessionIDIsPersistent; 
@property (assign,nonatomic) BOOL sessionIDIsPersistent; 
@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType; 
@property (nonatomic,readonly) BOOL hasRequestErrorDomain; 
@property (nonatomic,retain) NSString * requestErrorDomain; 
@property (assign,nonatomic) BOOL hasRequestErrorCode; 
@property (assign,nonatomic) long long requestErrorCode; 
@property (nonatomic,readonly) BOOL hasRequestErrorDescription; 
@property (nonatomic,retain) NSString * requestErrorDescription; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setRequestErrorDomain:(NSString *)arg1 ;
-(BOOL)hasRequestErrorDomain;
-(void)setRequestErrorCode:(long long)arg1 ;
-(void)setHasRequestErrorCode:(BOOL)arg1 ;
-(BOOL)hasRequestErrorCode;
-(NSString *)requestErrorDomain;
-(long long)requestErrorCode;
-(BOOL)hasCountryCode;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)clearTileUsages;
-(NSString *)hwMachine;
-(NSString *)requestErrorDescription;
-(void)setGeoService:(int)arg1 ;
-(void)setRequestDataSize:(int)arg1 ;
-(void)setResponseDataSize:(int)arg1 ;
-(void)setResponseTime:(int)arg1 ;
-(void)setCellWifi:(int)arg1 ;
-(void)addTileUsage:(GEOTileUsage)arg1 ;
-(void)setHwMachine:(NSString *)arg1 ;
-(void)setSessionIDIsPersistent:(BOOL)arg1 ;
-(void)setPlaceRequestType:(int)arg1 ;
-(void)setRequestErrorDescription:(NSString *)arg1 ;
-(unsigned long long)tileUsagesCount;
-(GEOTileUsage)tileUsageAtIndex:(unsigned long long)arg1 ;
-(int)geoService;
-(void)setHasGeoService:(BOOL)arg1 ;
-(BOOL)hasGeoService;
-(id)geoServiceAsString:(int)arg1 ;
-(int)StringAsGeoService:(id)arg1 ;
-(int)requestDataSize;
-(void)setHasRequestDataSize:(BOOL)arg1 ;
-(BOOL)hasRequestDataSize;
-(int)responseDataSize;
-(void)setHasResponseDataSize:(BOOL)arg1 ;
-(BOOL)hasResponseDataSize;
-(int)responseTime;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(BOOL)hasResponseTime;
-(int)cellWifi;
-(void)setHasCellWifi:(BOOL)arg1 ;
-(BOOL)hasCellWifi;
-(id)cellWifiAsString:(int)arg1 ;
-(int)StringAsCellWifi:(id)arg1 ;
-(GEOTileUsage*)tileUsages;
-(void)setTileUsages:(GEOTileUsage*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasHwMachine;
-(BOOL)sessionIDIsPersistent;
-(void)setHasSessionIDIsPersistent:(BOOL)arg1 ;
-(BOOL)hasSessionIDIsPersistent;
-(int)placeRequestType;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(BOOL)hasPlaceRequestType;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(BOOL)hasRequestErrorDescription;
@end

