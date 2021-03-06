/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSData * data; 
+(id)_ui_canonicalTimeZoneNameForTimeZoneName:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)timeZoneForSecondsFromGMT:(long long)arg1 ;
+(id)systemTimeZone;
+(id)abbreviationDictionary;
+(void)resetSystemTimeZone;
+(id)defaultTimeZone;
+(void)setDefaultTimeZone:(id)arg1 ;
+(id)localTimeZone;
+(id)knownTimeZoneNames;
+(void)setAbbreviationDictionary:(id)arg1 ;
+(id)timeZoneDataVersion;
+(id)timeZoneWithName:(id)arg1 data:(id)arg2 ;
+(id)timeZoneWithName:(id)arg1 ;
+(id)timeZoneWithAbbreviation:(id)arg1 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(BOOL)isNSTimeZone__;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)isEqualToTimeZone:(id)arg1 ;
-(id)abbreviation;
-(long long)secondsFromGMT;
-(BOOL)isDaylightSavingTime;
-(double)daylightSavingTimeOffset;
-(id)nextDaylightSavingTimeTransition;
@end

