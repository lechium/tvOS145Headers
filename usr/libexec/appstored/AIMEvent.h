//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ContextObject.h"

@class NSDate, NSError, NSNumber, NSString, NSUUID;

@interface AIMEvent : ContextObject
{
    _Bool _didPost;	// 8 = 0x8
    _Bool _shouldPost;	// 9 = 0x9
}

+ (id)_collectionChanceDefault;	// IMP=0x000000010023a624
+ (id)_collectionChanceBagKey;	// IMP=0x000000010023a618
+ (double)_collectionChance;	// IMP=0x000000010023a498
+ (_Bool)shouldPostMetrics;	// IMP=0x0000000100239ee4
- (void)_postIfAllowed;	// IMP=0x000000010023a630
- (void)postFailureWithError:(id)arg1 reason:(long long)arg2;	// IMP=0x000000010023a410
- (void)postCompletion;	// IMP=0x000000010023a398
- (id)copyMetricsDictionary;	// IMP=0x000000010023a078
- (void)prepareMetricsProperties;	// IMP=0x0000000100239f98
@property long long failureReason;
@property(retain) NSNumber *storeVersionID;
@property(retain) NSNumber *storeItemID;
@property(retain) NSDate *queueDate;
@property(retain) NSUUID *installKey;
@property(retain) NSString *installCode;
@property(retain) NSError *failureError;
@property(retain) NSDate *completionDate;
@property(retain) NSString *bundleID;
- (id)initWithInstallKey:(id)arg1 code:(id)arg2 shouldPost:(_Bool)arg3;	// IMP=0x0000000100239bf8

@end
