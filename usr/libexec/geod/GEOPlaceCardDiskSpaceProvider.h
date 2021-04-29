//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEODiskSpaceProvider-Protocol.h"

@class NSString;

@interface GEOPlaceCardDiskSpaceProvider : NSObject <GEODiskSpaceProvider>
{
}

- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;	// IMP=0x0000000100037098
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;	// IMP=0x0000000100037024
- (int)minimumUrgency;	// IMP=0x000000010003701c
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

