//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPurgeableCacheObject.h"

@class NSDate;

@interface GKExpiringCacheObject : GKPurgeableCacheObject
{
}

+ (void)invalidateObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x000000010004fd08
+ (void)expireObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x000000010004f978
+ (id)fetchSortDescriptors;	// IMP=0x000000010004eda8
- (void)awakeFromInsert;	// IMP=0x000000010004f8fc
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000010004f590
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x000000010004f510
@property(readonly, nonatomic) _Bool expired;
- (void)expire;	// IMP=0x000000010004f03c
- (void)invalidate;	// IMP=0x000000010004ee94
- (_Bool)isValid;	// IMP=0x000000010004ee58

// Remaining properties
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;

@end
