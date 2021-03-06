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

@interface GEOTimeToLeaveHypothesisFeedbackCollection : PBCodable <NSCopying> {

	double _earliestArrivalOffset;
	double _earliestDepartureOffset;
	double _latestArrivalOffset;
	double _latestDepartureOffset;
	int _arrival;
	int _departure;
	unsigned _numberOfReroutes;
	int _uiNotification;
	struct {
		unsigned has_earliestArrivalOffset : 1;
		unsigned has_earliestDepartureOffset : 1;
		unsigned has_latestArrivalOffset : 1;
		unsigned has_latestDepartureOffset : 1;
		unsigned has_arrival : 1;
		unsigned has_departure : 1;
		unsigned has_numberOfReroutes : 1;
		unsigned has_uiNotification : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDeparture; 
@property (assign,nonatomic) int departure; 
@property (assign,nonatomic) BOOL hasArrival; 
@property (assign,nonatomic) int arrival; 
@property (assign,nonatomic) BOOL hasNumberOfReroutes; 
@property (assign,nonatomic) unsigned numberOfReroutes; 
@property (assign,nonatomic) BOOL hasUiNotification; 
@property (assign,nonatomic) int uiNotification; 
@property (assign,nonatomic) BOOL hasEarliestDepartureOffset; 
@property (assign,nonatomic) double earliestDepartureOffset; 
@property (assign,nonatomic) BOOL hasLatestDepartureOffset; 
@property (assign,nonatomic) double latestDepartureOffset; 
@property (assign,nonatomic) BOOL hasEarliestArrivalOffset; 
@property (assign,nonatomic) double earliestArrivalOffset; 
@property (assign,nonatomic) BOOL hasLatestArrivalOffset; 
@property (assign,nonatomic) double latestArrivalOffset; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setDeparture:(int)arg1 ;
-(void)setArrival:(int)arg1 ;
-(void)setNumberOfReroutes:(unsigned)arg1 ;
-(void)setUiNotification:(int)arg1 ;
-(void)setEarliestDepartureOffset:(double)arg1 ;
-(void)setLatestDepartureOffset:(double)arg1 ;
-(void)setEarliestArrivalOffset:(double)arg1 ;
-(void)setLatestArrivalOffset:(double)arg1 ;
-(int)departure;
-(void)setHasDeparture:(BOOL)arg1 ;
-(BOOL)hasDeparture;
-(id)departureAsString:(int)arg1 ;
-(int)StringAsDeparture:(id)arg1 ;
-(int)arrival;
-(void)setHasArrival:(BOOL)arg1 ;
-(BOOL)hasArrival;
-(id)arrivalAsString:(int)arg1 ;
-(int)StringAsArrival:(id)arg1 ;
-(unsigned)numberOfReroutes;
-(void)setHasNumberOfReroutes:(BOOL)arg1 ;
-(BOOL)hasNumberOfReroutes;
-(int)uiNotification;
-(void)setHasUiNotification:(BOOL)arg1 ;
-(BOOL)hasUiNotification;
-(id)uiNotificationAsString:(int)arg1 ;
-(int)StringAsUiNotification:(id)arg1 ;
-(double)earliestDepartureOffset;
-(void)setHasEarliestDepartureOffset:(BOOL)arg1 ;
-(BOOL)hasEarliestDepartureOffset;
-(double)latestDepartureOffset;
-(void)setHasLatestDepartureOffset:(BOOL)arg1 ;
-(BOOL)hasLatestDepartureOffset;
-(double)earliestArrivalOffset;
-(void)setHasEarliestArrivalOffset:(BOOL)arg1 ;
-(BOOL)hasEarliestArrivalOffset;
-(double)latestArrivalOffset;
-(void)setHasLatestArrivalOffset:(BOOL)arg1 ;
-(BOOL)hasLatestArrivalOffset;
@end

