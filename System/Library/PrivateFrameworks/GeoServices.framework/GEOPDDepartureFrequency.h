/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitDepartureFrequency.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, PBUnknownFields, NSString;

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _displayDepartureFrequency;
	unsigned _earliestDepartureTime;
	unsigned _latestDepartureTime;
	unsigned _maxDepartureFrequency;
	unsigned _minDepartureFrequency;
	BOOL _isEstimated;
	struct {
		unsigned has_displayDepartureFrequency : 1;
		unsigned has_earliestDepartureTime : 1;
		unsigned has_latestDepartureTime : 1;
		unsigned has_maxDepartureFrequency : 1;
		unsigned has_minDepartureFrequency : 1;
		unsigned has_isEstimated : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSDate * firstTimeInFrequency; 
@property (nonatomic,readonly) NSDate * lastTimeInFrequency; 
@property (nonatomic,readonly) double frequencyForSorting; 
@property (nonatomic,readonly) long long frequencyType; 
@property (nonatomic,readonly) BOOL isEstimate; 
@property (nonatomic,readonly) long long displayFrequency; 
@property (nonatomic,readonly) long long minFrequency; 
@property (nonatomic,readonly) long long maxFrequency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMinDepartureFrequency; 
@property (assign,nonatomic) unsigned minDepartureFrequency; 
@property (assign,nonatomic) BOOL hasMaxDepartureFrequency; 
@property (assign,nonatomic) unsigned maxDepartureFrequency; 
@property (assign,nonatomic) BOOL hasEarliestDepartureTime; 
@property (assign,nonatomic) unsigned earliestDepartureTime; 
@property (assign,nonatomic) BOOL hasLatestDepartureTime; 
@property (assign,nonatomic) unsigned latestDepartureTime; 
@property (assign,nonatomic) BOOL hasIsEstimated; 
@property (assign,nonatomic) BOOL isEstimated; 
@property (assign,nonatomic) BOOL hasDisplayDepartureFrequency; 
@property (assign,nonatomic) unsigned displayDepartureFrequency; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
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
-(void)setMinDepartureFrequency:(unsigned)arg1 ;
-(void)setMaxDepartureFrequency:(unsigned)arg1 ;
-(void)setEarliestDepartureTime:(unsigned)arg1 ;
-(void)setLatestDepartureTime:(unsigned)arg1 ;
-(void)setIsEstimated:(BOOL)arg1 ;
-(void)setDisplayDepartureFrequency:(unsigned)arg1 ;
-(unsigned)minDepartureFrequency;
-(void)setHasMinDepartureFrequency:(BOOL)arg1 ;
-(BOOL)hasMinDepartureFrequency;
-(unsigned)maxDepartureFrequency;
-(void)setHasMaxDepartureFrequency:(BOOL)arg1 ;
-(BOOL)hasMaxDepartureFrequency;
-(unsigned)earliestDepartureTime;
-(void)setHasEarliestDepartureTime:(BOOL)arg1 ;
-(BOOL)hasEarliestDepartureTime;
-(unsigned)latestDepartureTime;
-(void)setHasLatestDepartureTime:(BOOL)arg1 ;
-(BOOL)hasLatestDepartureTime;
-(BOOL)isEstimated;
-(void)setHasIsEstimated:(BOOL)arg1 ;
-(BOOL)hasIsEstimated;
-(unsigned)displayDepartureFrequency;
-(void)setHasDisplayDepartureFrequency:(BOOL)arg1 ;
-(BOOL)hasDisplayDepartureFrequency;
-(NSDate *)firstTimeInFrequency;
-(BOOL)isValidAtDate:(id)arg1 ;
-(double)frequencyForSorting;
-(long long)minFrequency;
-(long long)maxFrequency;
-(long long)frequencyType;
-(NSDate *)lastTimeInFrequency;
-(long long)displayFrequency;
-(BOOL)isEstimate;
@end

