/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate;

@interface RTEventModelUserInteractionMO : NSManagedObject

@property (nonatomic,copy) NSString * feedback; 
@property (nonatomic,retain) NSNumber * interaction; 
@property (nonatomic,copy) NSString * locationOfInterestIdentifier; 
@property (nonatomic,copy) NSDate * date; 
+(id)managedObjectWithFeedback:(id)arg1 interaction:(id)arg2 locationOfInterestIdentifier:(id)arg3 date:(id)arg4 inManagedObjectContext:(id)arg5 ;
@end

