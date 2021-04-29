/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSData, NSString;

@interface ManagedSessionScores : NSManagedObject

@property (assign,nonatomic) long long activityType; 
@property (copy,nonatomic) NSData * scores; 
@property (copy,nonatomic) NSString * sessionIdentifier; 
@property (assign,nonatomic) int workoutDuration; 
@property (copy,nonatomic) NSString * workoutIdentifier; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
