/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface GKCDGameSettings : NSManagedObject

@property (nonatomic,copy) NSString * allowFriendListAccess; 
@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSDate * timeStamp; 
+(id)fetchRequest;
@end

