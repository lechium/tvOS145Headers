//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKSpecialPlayerInternal.h"

@class NSString;

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal
{
    long long _automatchPosition;	// 200 = 0xc8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010016a438
@property(nonatomic) long long automatchPosition; // @synthesize automatchPosition=_automatchPosition;
@property(readonly, nonatomic) NSString *automatchPositionDisplayString;
- (_Bool)isAutomatchPlayer;	// IMP=0x000000010016a4b8
- (id)alias;	// IMP=0x000000010016a464
- (id)teamPlayerID;	// IMP=0x000000010016a458
- (id)gamePlayerID;	// IMP=0x000000010016a44c
- (id)playerID;	// IMP=0x000000010016a440

@end
