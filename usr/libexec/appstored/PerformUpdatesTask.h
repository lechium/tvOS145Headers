//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray, NSMutableArray, UpdatesContext;

@interface PerformUpdatesTask : Task
{
    NSMutableArray *_updatesPurchases;	// 8 = 0x8
    NSMutableArray *_jobResultItems;	// 16 = 0x10
    UpdatesContext *_context;	// 24 = 0x18
    NSArray *_orderedBundleIDs;	// 32 = 0x20
}

+ (void)_handlePotentialProvisionedApp:(id)arg1 itemID:(id)arg2 status:(long long)arg3 logKey:(id)arg4;	// IMP=0x00000001000ba680
+ (id)_addItemIDToArrayIfNotPresent:(id)arg1 array:(id)arg2;	// IMP=0x00000001000ba588
+ (long long)performUpdatePurchases:(id)arg1 logKey:(id)arg2 isBackgroundRequest:(_Bool)arg3 requestToken:(id)arg4 jobResults:(id)arg5 error:(id *)arg6;	// IMP=0x00000001000b8dec
+ (id)taskWithContext:(id)arg1;	// IMP=0x00000001000b8cac
- (void).cxx_destruct;	// IMP=0x00000001000bb490
@property(copy, nonatomic) NSArray *orderedBundleIDs; // @synthesize orderedBundleIDs=_orderedBundleIDs;
@property(retain, nonatomic) UpdatesContext *context; // @synthesize context=_context;
- (unsigned long long)_performPurchaseBatch:(id)arg1 forAccount:(id)arg2 outError:(id *)arg3;	// IMP=0x00000001000bae4c
- (void)_displayCellularDialogsIfNecessary;	// IMP=0x00000001000bae48
- (void)_performAccountPurchases:(id)arg1;	// IMP=0x00000001000ba8ac
- (void)main;	// IMP=0x00000001000b9960
@property(readonly, nonatomic) NSArray *jobResults;
- (id)init;	// IMP=0x00000001000b8d00

@end

