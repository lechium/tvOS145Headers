/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOTransitDepartureSequence.h>

@protocol GEOTransitLine;
@class NSString, NSArray, NSSet, GEOPDDepartureSequence;

@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence> {

	GEOPDDepartureSequence* _sequence;
	id<GEOTransitLine> _line;
	NSSet* _nextStopIDs;
	long long _displayStyle;

}

@property (nonatomic,readonly) NSArray * departures; 
@property (nonatomic,readonly) NSArray * frequencies; 
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) BOOL isLowFrequency; 
@property (nonatomic,readonly) long long displayStyle; 
@property (nonatomic,readonly) NSString * direction; 
@property (nonatomic,readonly) NSString * headsign; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<GEOTransitLine>)line;
-(NSString *)direction;
-(NSString *)headsign;
-(unsigned long long)stopId;
-(NSArray *)departures;
-(NSArray *)operatingHours;
-(long long)displayStyle;
-(NSSet *)nextStopIDs;
-(BOOL)isLowFrequency;
-(id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(BOOL)areOperatingHours:(id)arg1 activeForDate:(id)arg2 ;
-(id)firstDepartureValidForDate:(id)arg1 ;
-(BOOL)hasFrequencyAtDate:(id)arg1 ;
-(id)firstDepartureOnOrAfterDate:(id)arg1 ;
-(NSArray *)frequencies;
-(void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)firstDepartureAfterDate:(id)arg1 ;
-(unsigned long long)numberOfDeparturesAfterDate:(id)arg1 ;
-(id)firstDepartureFrequencyOnOrAfterDate:(id)arg1 ;
-(id)firstOpenOperatingDateOnOrAfterDate:(id)arg1 ;
-(BOOL)isValidForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(id)departuresValidForDate:(id)arg1 ;
-(double)frequencyForSortingAtDate:(id)arg1 ;
-(id)frequencyToDescribeAtDate:(id)arg1 ;
-(BOOL)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2 ;
-(id)initWithSequence:(id)arg1 line:(id)arg2 pbLine:(id)arg3 ;
@end

