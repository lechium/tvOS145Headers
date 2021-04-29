/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ALCity, NSString, NSDictionary, NSNumber, NSURL;

@interface WorldClockCity : NSObject {

	ALCity* _alCity;
	NSString* _timeZone;
	NSString* _name;
	NSString* _countryName;
	NSString* _countryCode;
	NSString* _unlocalizedName;
	NSString* _unlocalizedCountryName;

}

@property (nonatomic,readonly) NSDictionary * properties; 
@property (nonatomic,readonly) ALCity * alCity;                                //@synthesize alCity=_alCity - In the implementation block
@property (nonatomic,readonly) NSNumber * alCityId; 
@property (nonatomic,readonly) NSString * timeZone; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * countryName; 
@property (nonatomic,readonly) NSString * unlocalizedCityName; 
@property (nonatomic,readonly) NSString * unlocalizedCountryName; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSURL * idUrl; 
+(BOOL)isWorldClockCityProperties:(id)arg1 ;
+(BOOL)isCachedLanguageStaleForProperties:(id)arg1 ;
+(BOOL)isCachedLanguageStaleForProperties:(id)arg1 systemLanguage:(id)arg2 ;
+(id)unlocalizedExampleCity;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)timeZone;
-(NSString *)countryCode;
-(id)initWithProperties:(id)arg1 ;
-(NSDictionary *)properties;
-(NSString *)countryName;
-(NSString *)unlocalizedCountryName;
-(NSNumber *)alCityId;
-(NSString *)unlocalizedCityName;
-(id)initWithALCity:(id)arg1 ;
-(NSURL *)idUrl;
-(id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6 ;
-(id)initWithALCityIdentifier:(int)arg1 ;
-(ALCity *)alCity;
@end
