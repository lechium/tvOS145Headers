//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface Network : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00000001001306f0
- (struct __WiFiNetwork *)createEquivalentWiFiNetwork;	// IMP=0x000000010005e5a8

// Remaining properties
@property(nonatomic) long long authFlag; // @dynamic authFlag;
@property(copy, nonatomic) NSString *ssid; // @dynamic ssid;

@end

