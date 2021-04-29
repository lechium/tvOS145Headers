/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RTCoreDataReadable.h>
#import <libobjc.A.dylib/RTCoreDataWritable.h>

@class NSUUID, RTLearnedLocation, RTLearnedPlace, NSArray, NSString;

@interface RTLearnedLocationOfInterest : NSObject <RTCoreDataReadable, RTCoreDataWritable> {

	NSUUID* _identifier;
	RTLearnedLocation* _location;
	RTLearnedPlace* _place;
	NSArray* _visits;
	NSArray* _transitions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) RTLearnedLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) RTLearnedPlace * place;                    //@synthesize place=_place - In the implementation block
@property (nonatomic,readonly) NSArray * visits;                          //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) NSArray * transitions;                     //@synthesize transitions=_transitions - In the implementation block
+(id)createWithLearnedLocationOfInterestMO:(id)arg1 ;
+(id)createWithLearnedLocationOfInterestVisitMO:(id)arg1 ;
+(id)createWithManagedObject:(id)arg1 ;
+(unsigned long long)mapItemSourceFromGeoMapItemSource:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(NSUUID *)identifier;
-(NSArray *)visits;
-(RTLearnedLocation *)location;
-(NSArray *)transitions;
-(RTLearnedPlace *)place;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 place:(id)arg3 visits:(id)arg4 transitions:(id)arg5 ;
-(id)managedObjectWithContext:(id)arg1 ;
-(void)updateManagedObject:(id)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 creationDate:(id)arg2 ;
-(id)filterWithDateInterval:(id)arg1 ;
@end

