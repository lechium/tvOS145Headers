/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, NSDate;

@interface VCPMAEmbeddingEntry : NSManagedObject

@property (nonatomic,retain) NSData * checksum; 
@property (nonatomic,copy) NSString * cloudIdentifier; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,retain) NSData * data; 
@property (assign,nonatomic) long long embeddingType; 
@property (assign,nonatomic) long long embeddingVersion; 
@property (assign,nonatomic) long long flags; 
@property (nonatomic,copy) NSString * localIdentifier; 
@property (assign,nonatomic) long long processed; 
@property (assign,nonatomic) long long random; 
+(id)fetchRequest;
@end
