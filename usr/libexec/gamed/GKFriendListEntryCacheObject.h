//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListEntryCacheObject.h"

@class NSString;

@interface GKFriendListEntryCacheObject : GKListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x0000000100060804
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100060810
- (id)internalRepresentation;	// IMP=0x00000001000605cc

// Remaining properties
@property(nonatomic) _Bool acceptedGameInviteFromThisFriend; // @dynamic acceptedGameInviteFromThisFriend;
@property(nonatomic) _Bool automatchedTogether; // @dynamic automatchedTogether;
@property(nonatomic) _Bool friendBiDirectional; // @dynamic friendBiDirectional;
@property(nonatomic) _Bool friendPlayedNearby; // @dynamic friendPlayedNearby;
@property(nonatomic) _Bool friendPlayedWith; // @dynamic friendPlayedWith;
@property(nonatomic) _Bool initiatedGameInviteToThisFriend; // @dynamic initiatedGameInviteToThisFriend;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;

@end

