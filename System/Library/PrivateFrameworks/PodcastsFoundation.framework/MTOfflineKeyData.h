/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSData;

@interface MTOfflineKeyData : NSManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) long long storeTrackId; 
@property (assign,nonatomic) long long secureInvalidationDsid; 
@property (nonatomic,retain) NSString * keyUri; 
@property (nonatomic,retain) NSData * data; 
@property (assign,nonatomic) double lastRenewedDate; 
@property (assign,nonatomic) double expirationDate; 
@property (assign,nonatomic) BOOL pendingDeletion; 
@end

