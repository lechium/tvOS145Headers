//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GKGameCacheObject, NSDate, NSSet;

@interface FriendsPlayedGameList : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x000000010023f2cc

// Remaining properties
@property(retain, nonatomic) NSSet *entries; // @dynamic entries;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end

