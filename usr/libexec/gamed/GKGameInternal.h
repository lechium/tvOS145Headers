//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKGameDescriptor.h"

@class GKStoreItemInternal, NSDictionary, NSSet, NSString;

@interface GKGameInternal : GKGameDescriptor
{
    NSString *_name;	// 56 = 0x38
    NSDictionary *_icons;	// 64 = 0x40
    NSString *_defaultLeaderboardIdentifier;	// 72 = 0x48
    GKStoreItemInternal *_storeItem;	// 80 = 0x50
    union {
        struct {
            unsigned int _platform_unused:8;
            unsigned int _prerendered:1;
            unsigned int _supportsLeaderboards:1;
            unsigned int _supportsLeaderboardSets:1;
            unsigned int _hasAggregateLeaderboard:1;
            unsigned int _supportsAchievements:1;
            unsigned int _supportsMultiplayer:1;
            unsigned int _valid:1;
            unsigned int _unused:1;
            unsigned int _supportsTurnBasedMultiplayer:1;
            unsigned int _isArcadeGame:1;
            unsigned int _supportsChallenges:1;
            unsigned int _reserved:13;
        } ;
        unsigned int _value;
    } _flags;	// 88 = 0x58
    unsigned short _numberOfLeaderboards;	// 92 = 0x5c
    unsigned short _numberOfLeaderboardSets;	// 94 = 0x5e
    unsigned short _numberOfAchievements;	// 96 = 0x60
    unsigned short _maxAchievementPoints;	// 98 = 0x62
    NSSet *_compatiblePlatforms;	// 104 = 0x68
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100162384
+ (id)propertiesToFetch;	// IMP=0x000000010017acb0
- (void).cxx_destruct;	// IMP=0x0000000100162df0
@property(retain, nonatomic) NSSet *compatiblePlatforms; // @synthesize compatiblePlatforms=_compatiblePlatforms;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(nonatomic) unsigned short maxAchievementPoints; // @synthesize maxAchievementPoints=_maxAchievementPoints;
@property(nonatomic) unsigned short numberOfAchievements; // @synthesize numberOfAchievements=_numberOfAchievements;
@property(nonatomic) unsigned short numberOfLeaderboardSets; // @synthesize numberOfLeaderboardSets=_numberOfLeaderboardSets;
@property(nonatomic) unsigned short numberOfLeaderboards; // @synthesize numberOfLeaderboards=_numberOfLeaderboards;
@property(retain, nonatomic) NSString *defaultLeaderboardIdentifier; // @synthesize defaultLeaderboardIdentifier=_defaultLeaderboardIdentifier;
@property(retain, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool supportsChallenges; // @dynamic supportsChallenges;
@property(nonatomic) _Bool isArcadeGame; // @dynamic isArcadeGame;
@property(readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property(nonatomic) unsigned int flags; // @dynamic flags;
@property(nonatomic) _Bool supportsTurnBasedMultiplayer; // @dynamic supportsTurnBasedMultiplayer;
@property(nonatomic, getter=isValid) _Bool valid; // @dynamic valid;
@property(readonly, nonatomic) _Bool canBeIndexed;
@property(nonatomic) _Bool supportsMultiplayer; // @dynamic supportsMultiplayer;
@property(nonatomic) _Bool supportsAchievements; // @dynamic supportsAchievements;
@property(nonatomic) _Bool hasAggregateLeaderboard;
@property(nonatomic) _Bool supportsLeaderboardSets; // @dynamic supportsLeaderboardSets;
@property(nonatomic) _Bool supportsLeaderboards; // @dynamic supportsLeaderboards;
@property(nonatomic, getter=isPrerendered) _Bool prerendered; // @dynamic prerendered;
- (id)description;	// IMP=0x00000001001626ac
- (id)serverRepresentation;	// IMP=0x00000001001626a0
- (unsigned long long)hash;	// IMP=0x0000000100162338
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010016227c
- (id)defaultCategory;	// IMP=0x0000000100162e78
- (unsigned short)numberOfCategories;	// IMP=0x0000000100162e6c
- (void)updateWithProperties:(id)arg1;	// IMP=0x000000010017ad08
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x000000010017a50c

@end

