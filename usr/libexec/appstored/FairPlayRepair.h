//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDBagConsumer-Protocol.h"
#import "ApplicationRepair-Protocol.h"

@class ASDRepairOptions, ApplicationProxy, NSArray, NSString, URLBag, UnfairLock;
@protocol ApplicationRepairDelegate;

@interface FairPlayRepair : NSObject <ASDBagConsumer, ApplicationRepair>
{
    ApplicationProxy *_application;	// 8 = 0x8
    URLBag *_bag;	// 16 = 0x10
    UnfairLock *_lock;	// 24 = 0x18
    NSString *_logUUID;	// 32 = 0x20
    ASDRepairOptions *_options;	// 40 = 0x28
    id <ApplicationRepairDelegate> _delegate;	// 48 = 0x30
    NSArray *_repairedBundleIDs;	// 56 = 0x38
    NSString *_clientIdentifierHeader;	// 64 = 0x40
}

+ (int)_fairplayStatusForApplication:(id)arg1 options:(id)arg2;	// IMP=0x00000001000662a0
+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logUUID:(id)arg3;	// IMP=0x0000000100065d94
+ (id)bagKeySet;	// IMP=0x000000010006573c
+ (void)addRequiredBagKeysToAggregator:(id)arg1;	// IMP=0x00000001000656a4
- (void).cxx_destruct;	// IMP=0x0000000100066b6c
@property(copy, nonatomic) NSString *clientIdentifierHeader; // @synthesize clientIdentifierHeader=_clientIdentifierHeader;
- (void)_showFamilyLeaveAlert:(id)arg1;	// IMP=0x0000000100066378
- (_Bool)_isSystemIntegrityProtected;	// IMP=0x0000000100066370
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100065f84
- (void)setRepairedBundleIDs:(id)arg1;	// IMP=0x0000000100065cd8
@property(readonly, nonatomic) NSArray *repairedBundleIDs; // @synthesize repairedBundleIDs=_repairedBundleIDs;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithApplication:(id)arg1 options:(id)arg2;	// IMP=0x0000000100065614
- (id)init;	// IMP=0x0000000100065584

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

