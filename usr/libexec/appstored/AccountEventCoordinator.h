//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AccountEventCoordinator : NSObject
{
    NSMutableDictionary *_accountsForWeekCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    double _lastCacheReset;	// 24 = 0x18
}

+ (void)testDates;	// IMP=0x0000000100076778
+ (id)nextPayoutWeekStartDateForDate:(id)arg1;	// IMP=0x0000000100074a68
+ (id)nextPayoutWeekEndDateForDate:(id)arg1;	// IMP=0x000000010007483c
+ (id)sharedCoordinator;	// IMP=0x00000001000747a0
- (void).cxx_destruct;	// IMP=0x0000000100076adc
- (id)diagnosticDescription;	// IMP=0x00000001000765ac
- (id)description;	// IMP=0x0000000100076508
- (void)_resetCache;	// IMP=0x000000010007649c
- (id)_loadEvents;	// IMP=0x000000010007592c
- (void)_handleAppleIDDidChangeNotification:(id)arg1;	// IMP=0x0000000100075250
- (void)resetCache;	// IMP=0x00000001000751e8
- (id)allEvents;	// IMP=0x00000001000750ec
- (id)activeAccountsInWeekWithDate:(id)arg1;	// IMP=0x0000000100074b8c
- (id)init;	// IMP=0x0000000100074610

@end

