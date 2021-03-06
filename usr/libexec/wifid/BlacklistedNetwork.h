//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Network.h"

@class NSDate, NSObject, NSString;

@interface BlacklistedNetwork : Network
{
}

+ (id)getBlacklistedNetworkMatchingWiFiNetwork:(struct __WiFiNetwork *)arg1 fromChildMoc:(id)arg2;	// IMP=0x00000001000076a0
+ (_Bool)removeBlacklistedNetworkMatchingWiFiNetwork:(struct __WiFiNetwork *)arg1 fromChildMOC:(id)arg2;	// IMP=0x0000000100007468
+ (void)removeAllBlacklistedNetworksFromMOC:(id)arg1;	// IMP=0x00000001000072ac
+ (id)getAllBlacklistedNetworksFromMOC:(id)arg1;	// IMP=0x0000000100007184
+ (id)generateNewBlacklistedNetworkObjectFromMOC:(id)arg1;	// IMP=0x0000000100006fa4
+ (id)newFetchRequest;	// IMP=0x0000000100006ea4
+ (id)fetchRequest;	// IMP=0x00000001001306b8
- (struct __WiFiNetwork *)createEquivalentWiFiNetwork;	// IMP=0x0000000100006ed0

// Remaining properties
@property(copy, nonatomic) NSDate *blacklistDate; // @dynamic blacklistDate;
@property(copy, nonatomic) NSString *bssid; // @dynamic bssid;
@property(copy, nonatomic) NSDate *expireDate; // @dynamic expireDate;
@property(nonatomic) double fenceSize; // @dynamic fenceSize;
@property(retain, nonatomic) NSObject *location; // @dynamic location;

@end

