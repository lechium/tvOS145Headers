/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSDate, NSString;

@interface SACalendarEventSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * events; 
@property (nonatomic,copy) NSDate * snippetEndDate; 
@property (nonatomic,copy) NSDate * snippetStartDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)eventSnippet;
+(id)eventSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setEvents:(NSArray *)arg1 ;
-(NSArray *)events;
-(id)encodedClassName;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSDate *)snippetEndDate;
-(void)setSnippetEndDate:(NSDate *)arg1 ;
-(NSDate *)snippetStartDate;
-(void)setSnippetStartDate:(NSDate *)arg1 ;
@end

