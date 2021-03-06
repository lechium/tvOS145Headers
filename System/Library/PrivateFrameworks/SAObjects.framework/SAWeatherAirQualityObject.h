/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class SAWeatherLocation, NSString, NSArray;

@interface SAWeatherAirQualityObject : SADomainObject

@property (assign,nonatomic) long long airQualityIndex; 
@property (nonatomic,retain) SAWeatherLocation * airQualityLocation; 
@property (nonatomic,copy) NSString * airQualityRatingCategory; 
@property (nonatomic,copy) NSString * localizedCategoryName; 
@property (nonatomic,copy) NSArray * pollutants; 
+(id)airQualityObject;
+(id)airQualityObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(id)encodedClassName;
-(long long)airQualityIndex;
-(void)setAirQualityIndex:(long long)arg1 ;
-(SAWeatherLocation *)airQualityLocation;
-(void)setAirQualityLocation:(SAWeatherLocation *)arg1 ;
-(NSString *)airQualityRatingCategory;
-(void)setAirQualityRatingCategory:(NSString *)arg1 ;
-(NSArray *)pollutants;
-(void)setPollutants:(NSArray *)arg1 ;
@end

