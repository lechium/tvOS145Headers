/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAWeatherPollutant : SADomainObject

@property (nonatomic,copy) NSNumber * amount; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy) NSString * name; 
+(id)pollutant;
+(id)pollutantWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(NSString *)localizedDescription;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSNumber *)amount;
-(void)setAmount:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

