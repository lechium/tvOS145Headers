/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceComparable.h>

@class NSNumber, NSString, NSArray, NSData, SADistance;

@interface SALocation : SADomainObject <SAAceComparable>

@property (nonatomic,copy) NSNumber * accuracy; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSArray * entryPoints; 
@property (nonatomic,copy) NSData * forwardGeoData; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * regionType; 
@property (nonatomic,retain) SADistance * relativeDistance; 
@property (nonatomic,copy) NSString * stateCode; 
@property (nonatomic,copy) NSString * street; 
@property (nonatomic,copy) NSString * subAdministrativeArea; 
@property (nonatomic,copy) NSString * subLocality; 
@property (nonatomic,copy) NSString * subThoroughfare; 
@property (nonatomic,copy) NSString * thoroughfare; 
@property (nonatomic,copy) NSString * timezoneId; 
@property (nonatomic,copy) NSNumber * travelDistance; 
@property (nonatomic,copy) NSNumber * travelTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)location;
+(id)locationWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryCode;
-(id)groupIdentifier;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSNumber *)accuracy;
-(void)setAccuracy:(NSNumber *)arg1 ;
-(NSString *)street;
-(void)setStreet:(NSString *)arg1 ;
-(NSString *)regionType;
-(void)setTravelTime:(NSNumber *)arg1 ;
-(NSNumber *)travelTime;
-(NSNumber *)travelDistance;
-(NSArray *)entryPoints;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(void)setEntryPoints:(NSArray *)arg1 ;
-(void)setTravelDistance:(NSNumber *)arg1 ;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)city;
-(NSString *)postalCode;
-(id)encodedClassName;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(SADistance *)relativeDistance;
-(void)setRelativeDistance:(SADistance *)arg1 ;
-(NSData *)forwardGeoData;
-(void)setForwardGeoData:(NSData *)arg1 ;
-(void)setRegionType:(NSString *)arg1 ;
-(NSString *)stateCode;
-(void)setStateCode:(NSString *)arg1 ;
@end

