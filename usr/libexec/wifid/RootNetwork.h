//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Network.h"

@class NSSet, Score;

@interface RootNetwork : Network
{
}

+ (unsigned long long)getAllRootNetworksCountFromMOC:(id)arg1;	// IMP=0x00000001000425fc
+ (id)getAllRootNetworksFromMOC:(id)arg1;	// IMP=0x00000001000424d4
+ (id)generateNewRootNetworkObjectForWiFiNetwork:(struct __WiFiNetwork *)arg1 fromMOC:(id)arg2;	// IMP=0x0000000100042340
+ (_Bool)removeRootNetworkMatchingWiFiNetwork:(struct __WiFiNetwork *)arg1 fromChildMOC:(id)arg2;	// IMP=0x0000000100042110
+ (id)getRootNetworkMatchingWiFiNetwork:(struct __WiFiNetwork *)arg1 fromMOC:(id)arg2;	// IMP=0x0000000100041ef8
+ (id)copyFetchRequest;	// IMP=0x0000000100041ecc
+ (id)fetchRequest;	// IMP=0x000000010013070c
- (id)getLatestGeoTagDate;	// IMP=0x000000010004281c

// Remaining properties
@property(retain, nonatomic) NSSet *higherBandGeoTags; // @dynamic higherBandGeoTags;
@property(retain, nonatomic) NSSet *lowerBandGeoTags; // @dynamic lowerBandGeoTags;
@property(retain, nonatomic) Score *score; // @dynamic score;

@end

