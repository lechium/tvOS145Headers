//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

@interface SubscriptionEntitlementsResponse : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010022266c
@property(readonly, copy) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (unsigned long long)_segmentFromString:(id)arg1;	// IMP=0x00000001002224a4
- (id)consumedIntroOfferFamilyIds;	// IMP=0x0000000100222208
- (id)entitlementsForSegment:(unsigned long long)arg1;	// IMP=0x0000000100221ebc
@property(readonly, copy) NSNumber *accountID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100221df8

@end

