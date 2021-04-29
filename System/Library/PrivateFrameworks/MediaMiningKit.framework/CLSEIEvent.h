/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSTimeZone, CLSEIVenue, NSSet;

@interface CLSEIEvent : NSManagedObject

@property (assign,nonatomic) long long uuid; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long timeZoneOffset; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (nonatomic,retain) CLSEIVenue * venue; 
@property (nonatomic,copy) NSSet * artists; 
@property (nonatomic,copy) NSSet * categories; 
-(NSTimeZone *)timeZone;
@end

