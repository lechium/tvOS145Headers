/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, GEOComposedWaypoint, NSDate;

@interface MNCommuteDestinationSuggestion : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allDay;
	BOOL _isResumeEVRoute;
	BOOL _evHasReachedSufficientCharge;
	NSData* _rawSuggestion;
	NSString* _uniqueIdentifier;
	unsigned long long _type;
	NSString* _name;
	GEOComposedWaypoint* _waypoint;
	double _weight;
	NSDate* _expires;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _vehicleIdentifier;
	NSString* _evSufficientChargeTitle;
	double _evSufficientChargeLevel;

}

@property (nonatomic,retain) NSData * rawSuggestion;                          //@synthesize rawSuggestion=_rawSuggestion - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * waypoint;                  //@synthesize waypoint=_waypoint - In the implementation block
@property (assign,nonatomic) double weight;                                   //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy) NSDate * expires;                                  //@synthesize expires=_expires - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                  //@synthesize endDate=_endDate - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                     //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) BOOL isResumeEVRoute;                            //@synthesize isResumeEVRoute=_isResumeEVRoute - In the implementation block
@property (assign,nonatomic) BOOL evHasReachedSufficientCharge;               //@synthesize evHasReachedSufficientCharge=_evHasReachedSufficientCharge - In the implementation block
@property (nonatomic,retain) NSString * vehicleIdentifier;                    //@synthesize vehicleIdentifier=_vehicleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * evSufficientChargeTitle;              //@synthesize evSufficientChargeTitle=_evSufficientChargeTitle - In the implementation block
@property (assign,nonatomic) double evSufficientChargeLevel;                  //@synthesize evSufficientChargeLevel=_evSufficientChargeLevel - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)_setupFakes;
+(id)_fakeBitsAndPiecesForSuggestion:(id)arg1 ;
+(id)fakeDestinationSuggestion:(id)arg1 ;
+(void)fakeDestinationSuggestion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)fakeDestinationSuggestions;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)vehicleIdentifier;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
-(GEOComposedWaypoint *)waypoint;
-(void)setWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(NSDate *)expires;
-(void)setExpires:(NSDate *)arg1 ;
-(NSData *)rawSuggestion;
-(void)setRawSuggestion:(NSData *)arg1 ;
-(BOOL)isResumeEVRoute;
-(void)setIsResumeEVRoute:(BOOL)arg1 ;
-(BOOL)evHasReachedSufficientCharge;
-(void)setEvHasReachedSufficientCharge:(BOOL)arg1 ;
-(NSString *)evSufficientChargeTitle;
-(void)setEvSufficientChargeTitle:(NSString *)arg1 ;
-(double)evSufficientChargeLevel;
-(void)setEvSufficientChargeLevel:(double)arg1 ;
@end
