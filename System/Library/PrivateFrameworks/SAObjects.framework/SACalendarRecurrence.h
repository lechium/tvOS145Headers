/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SACalendarRecurrence : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long endCount; 
@property (nonatomic,copy) NSDate * endDate; 
@property (assign,nonatomic) int frequency; 
@property (assign,nonatomic) long long interval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recurrence;
+(id)recurrenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(id)groupIdentifier;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setFrequency:(int)arg1 ;
-(int)frequency;
-(id)encodedClassName;
-(long long)endCount;
-(void)setEndCount:(long long)arg1 ;
@end

