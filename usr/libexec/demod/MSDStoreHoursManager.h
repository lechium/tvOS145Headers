//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSTimer;

@interface MSDStoreHoursManager : NSObject
{
    _Bool _isStoreOpenNow;	// 8 = 0x8
    _Bool _useDefaultStoreHours;	// 9 = 0x9
    NSDate *_nextStoreOpenDate;	// 16 = 0x10
    NSDate *_nextStoreClosedDate;	// 24 = 0x18
    NSDate *_nextContentRevertDate;	// 32 = 0x20
    NSArray *_storeHourRecords;	// 40 = 0x28
    NSTimer *_expirationTimer;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000010002572c
- (void).cxx_destruct;	// IMP=0x0000000100027524
@property _Bool useDefaultStoreHours; // @synthesize useDefaultStoreHours=_useDefaultStoreHours;
@property(retain) NSTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(retain) NSArray *storeHourRecords; // @synthesize storeHourRecords=_storeHourRecords;
@property(retain) NSDate *nextContentRevertDate; // @synthesize nextContentRevertDate=_nextContentRevertDate;
@property(retain) NSDate *nextStoreClosedDate; // @synthesize nextStoreClosedDate=_nextStoreClosedDate;
@property(retain) NSDate *nextStoreOpenDate; // @synthesize nextStoreOpenDate=_nextStoreOpenDate;
@property _Bool isStoreOpenNow; // @synthesize isStoreOpenNow=_isStoreOpenNow;
- (void)storeHourSettingsExpirationHandler:(id)arg1;	// IMP=0x00000001000273c8
- (void)setupStoreHourSettingsExpirationTimer:(id)arg1;	// IMP=0x0000000100027074
- (void)populateStoreHourFromHubSuppliedSettingsForDate:(id)arg1;	// IMP=0x0000000100026cc4
- (void)populateStoreHourFromDefaultSettingsForDate:(id)arg1;	// IMP=0x0000000100026938
- (id)parseRawStoreHours:(id)arg1;	// IMP=0x0000000100026380
- (void)evaluateStoreStatusAgainstPointInTime:(id)arg1;	// IMP=0x0000000100025e30
- (void)evaluateStoreStatusAgainstCurrentTime;	// IMP=0x0000000100025ddc
- (void)updateStoreHours:(id)arg1 lastSettingsUpdatedDate:(id)arg2;	// IMP=0x00000001000259e0
- (id)init;	// IMP=0x0000000100025798

@end

