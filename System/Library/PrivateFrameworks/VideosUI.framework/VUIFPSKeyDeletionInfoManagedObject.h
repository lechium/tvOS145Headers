/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, NSNumber, NSDate, NSURL;

@interface VUIFPSKeyDeletionInfoManagedObject : NSManagedObject

@property (nonatomic,retain) NSData * additionalFPSRequestParamsJSONData; 
@property (nonatomic,copy) NSString * contentID; 
@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSURL * fpsKeyServerURL; 
@property (nonatomic,copy) NSURL * fpsNonceURL; 
@property (nonatomic,retain) NSData * keyData; 
@property (nonatomic,copy) NSURL * keyURI; 
@property (nonatomic,copy) NSDate * playbackExpirationStartDate; 
+(id)fetchRequest;
@end

