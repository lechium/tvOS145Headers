/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSData, RegisteredPreKey;

@interface SenderPublicIdentity : NSManagedObject

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * destinationHash; 
@property (nonatomic,retain) NSData * skippedCounters; 
@property (assign,nonatomic) int upperBufferIndex; 
@property (nonatomic,retain) RegisteredPreKey * messagedKey; 
+(id)fetchRequest;
@end
