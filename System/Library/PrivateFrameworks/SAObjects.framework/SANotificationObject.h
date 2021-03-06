/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate, NSNumber;

@interface SANotificationObject : SADomainObject

@property (nonatomic,copy) NSString * applicationId; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSNumber * dateIsAllDay; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * notificationId; 
@property (nonatomic,copy) NSNumber * previewRestricted; 
@property (nonatomic,copy) NSString * priority; 
@property (nonatomic,copy) NSDate * recencyDate; 
@property (nonatomic,copy) NSString * source; 
@property (nonatomic,copy) NSString * threadIdentifier; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * type; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)type;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSDate *)endDate;
-(void)setDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(NSString *)threadIdentifier;
-(id)encodedClassName;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)applicationId;
-(void)setApplicationId:(NSString *)arg1 ;
-(NSNumber *)dateIsAllDay;
-(void)setDateIsAllDay:(NSNumber *)arg1 ;
-(NSString *)notificationId;
-(void)setNotificationId:(NSString *)arg1 ;
-(NSNumber *)previewRestricted;
-(void)setPreviewRestricted:(NSNumber *)arg1 ;
-(NSDate *)recencyDate;
-(void)setRecencyDate:(NSDate *)arg1 ;
@end

