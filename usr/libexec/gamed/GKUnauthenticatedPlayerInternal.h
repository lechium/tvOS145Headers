//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKLocalPlayerInternal.h"

@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal
{
    int _encodingCount;	// 296 = 0x128
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001683e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100168b2c
- (id)alias;	// IMP=0x000000010016897c
- (id)teamPlayerID;	// IMP=0x00000001001687cc
- (id)gamePlayerID;	// IMP=0x000000010016861c
- (id)playerID;	// IMP=0x000000010016846c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001683f0

@end
