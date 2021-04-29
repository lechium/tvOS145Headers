//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDScheduledActivityClient-Protocol.h"

@class NSString, PDDatabaseManager, PDPaymentTransactionProcessor, PDPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDMapsMerchantProcessingService : NSObject <PDScheduledActivityClient>
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDPaymentTransactionProcessor *_transactionProcessor;	// 16 = 0x10
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 24 = 0x18
    double _waitTime;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010026475c
- (void)_processItem:(id)arg1;	// IMP=0x00000001002645d0
- (id)_processingItemsForScheduledActivity;	// IMP=0x00000001002642d0
- (void)_logScheduledActivityWithItems:(id)arg1;	// IMP=0x00000001002640b0
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x0000000100263e68
- (void)start;	// IMP=0x0000000100263adc
- (id)initWithDatabaseManager:(id)arg1 transactionProcessor:(id)arg2 webServiceCoordinator:(id)arg3;	// IMP=0x00000001002639cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

