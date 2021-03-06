//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDPaymentWebServiceCoordinatorDelegate-Protocol.h"
#import "PDScheduledActivityClient-Protocol.h"
#import "PDWorldRegionAggregatorObserver-Protocol.h"

@class NSCountedSet, NSHashTable, NSMutableArray, NSString, PDDatabaseManager, PDPaymentWebServiceCoordinator, PDTransactionReceiptFileManager, PDWorldRegionAggregator, PKContactResolver, PKServicePaymentTransactionImageGenerator;
@protocol OS_dispatch_queue, PKCancelable;

@interface PDSpotlightIndexer : NSObject <PDScheduledActivityClient, PDWorldRegionAggregatorObserver, PDPaymentWebServiceCoordinatorDelegate>
{
    _Bool _performingOperation;	// 8 = 0x8
    _Bool _performingOverallIndexing;	// 9 = 0x9
    _Bool _resetPending;	// 10 = 0xa
    _Bool _hasCompletedIndexingSetup;	// 11 = 0xb
    _Bool _willRequireIndexing;	// 12 = 0xc
    struct os_unfair_lock_s _lockOperation;	// 16 = 0x10
    struct os_unfair_lock_s _lockObservers;	// 20 = 0x14
    struct os_unfair_lock_s _lockSuggestions;	// 24 = 0x18
    PDWorldRegionAggregator *_worldRegionAggregator;	// 32 = 0x20
    PDDatabaseManager *_databaseManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_indexAccessQueue;	// 48 = 0x30
    PKServicePaymentTransactionImageGenerator *_imageGenerator;	// 56 = 0x38
    id <PKCancelable> _metadataOperation;	// 64 = 0x40
    id <PKCancelable> _indexingOperation;	// 72 = 0x48
    NSMutableArray *_resetCompletions;	// 80 = 0x50
    NSHashTable *_observers;	// 88 = 0x58
    CDUnknownBlockType _worldRegionAggregatorCompletion;	// 96 = 0x60
    CDUnknownBlockType _featuresCompletion;	// 104 = 0x68
    PDTransactionReceiptFileManager *_receiptFileManager;	// 112 = 0x70
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 120 = 0x78
    PKContactResolver *_contactResolver;	// 128 = 0x80
    NSCountedSet *_initiatedTransactionFetches;	// 136 = 0x88
}

+ (_Bool)isIndexingAvailable;	// IMP=0x000000010026efa4
- (void).cxx_destruct;	// IMP=0x00000001002721ec
@property(retain, nonatomic) NSCountedSet *initiatedTransactionFetches; // @synthesize initiatedTransactionFetches=_initiatedTransactionFetches;
@property(retain, nonatomic) PKContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // @synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator;
@property(retain, nonatomic) PDTransactionReceiptFileManager *receiptFileManager; // @synthesize receiptFileManager=_receiptFileManager;
@property(copy, nonatomic) CDUnknownBlockType featuresCompletion; // @synthesize featuresCompletion=_featuresCompletion;
@property(copy, nonatomic) CDUnknownBlockType worldRegionAggregatorCompletion; // @synthesize worldRegionAggregatorCompletion=_worldRegionAggregatorCompletion;
@property(nonatomic) struct os_unfair_lock_s lockSuggestions; // @synthesize lockSuggestions=_lockSuggestions;
@property(nonatomic) struct os_unfair_lock_s lockObservers; // @synthesize lockObservers=_lockObservers;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) struct os_unfair_lock_s lockOperation; // @synthesize lockOperation=_lockOperation;
@property(nonatomic) _Bool willRequireIndexing; // @synthesize willRequireIndexing=_willRequireIndexing;
@property(nonatomic) _Bool hasCompletedIndexingSetup; // @synthesize hasCompletedIndexingSetup=_hasCompletedIndexingSetup;
@property(retain, nonatomic) NSMutableArray *resetCompletions; // @synthesize resetCompletions=_resetCompletions;
@property(nonatomic) _Bool resetPending; // @synthesize resetPending=_resetPending;
@property(nonatomic) _Bool performingOverallIndexing; // @synthesize performingOverallIndexing=_performingOverallIndexing;
@property(nonatomic) _Bool performingOperation; // @synthesize performingOperation=_performingOperation;
@property(retain, nonatomic) id <PKCancelable> indexingOperation; // @synthesize indexingOperation=_indexingOperation;
@property(retain, nonatomic) id <PKCancelable> metadataOperation; // @synthesize metadataOperation=_metadataOperation;
@property(retain, nonatomic) PKServicePaymentTransactionImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue; // @synthesize indexAccessQueue=_indexAccessQueue;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PDWorldRegionAggregator *worldRegionAggregator; // @synthesize worldRegionAggregator=_worldRegionAggregator;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100271e54
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100271df0
- (void)addObserver:(id)arg1;	// IMP=0x0000000100271d8c
- (id)updateRegionWithIdentifier:(id)arg1 localizedName:(id)arg2 boundingRegion:(CDStruct_26e8d939)arg3 mapsIdentifier:(unsigned long long)arg4 providerIdentifier:(int)arg5;	// IMP=0x0000000100271d7c
- (void)placemarkFound:(id)arg1 forTransaction:(id)arg2;	// IMP=0x0000000100271d6c
- (void)worldRegionProcessingCompletedWithSuccess:(_Bool)arg1;	// IMP=0x0000000100271cb8
- (void)worldRegionProcessingStarted;	// IMP=0x0000000100271cac
- (void)transaction:(id)arg1 associatedToWorldRegion:(id)arg2;	// IMP=0x0000000100271ca8
- (void)deleteAllFinHealthDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100271c94
- (void)accessSuggestionsController:(CDUnknownBlockType)arg1;	// IMP=0x0000000100271c90
- (void)_releaseSuggestionsControllerIfNecessary;	// IMP=0x0000000100271c8c
- (void)paymentWebServiceCoordinator:(id)arg1 didDownloadTransactionReceipt:(id)arg2 forTransactionWithIdentifier:(id)arg3;	// IMP=0x0000000100271c08
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 oldTransaction:(id)arg3;	// IMP=0x0000000100271af8
- (void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;	// IMP=0x0000000100271a78
- (void)transactionFetchCompletedForPassUniqueID:(id)arg1;	// IMP=0x0000000100271960
- (void)transactionFetchInitiatedForPassUniqueID:(id)arg1;	// IMP=0x00000001002718e8
- (void)passDidDisappear:(id)arg1;	// IMP=0x00000001002717d8
- (void)passAddedOrUpdated:(id)arg1;	// IMP=0x00000001002717bc
- (void)_queue_processAllIndexingBatchesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002717b8
- (void)_queue_fetchTransactionsMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002713bc
- (void)_queue_fetchPassesMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100271070
- (void)resetCoordinatesForAllRegions;	// IMP=0x0000000100271030
- (void)resetRegions;	// IMP=0x0000000100270fec
- (void)_performQueryWithQueryString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100270fd0
- (void)_indexedItemCountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100270a48
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010027043c
- (void)_performIndexingOperationsWithOrigin:(unsigned long long)arg1;	// IMP=0x000000010026f7d0
- (void)_indexingCompleted;	// IMP=0x000000010026f71c
- (void)_indexingStarted;	// IMP=0x000000010026f668
- (_Bool)isIndexing;	// IMP=0x000000010026f630
- (void)triggerIndexing;	// IMP=0x000000010026f5c8
- (void)_queue_completeReset;	// IMP=0x000000010026f580
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010026f41c
- (void)reindexContentForIdentifiers:(id)arg1;	// IMP=0x000000010026f0b4
- (void)reindexAllContent;	// IMP=0x000000010026efac
- (void)_cleanupIndexingState;	// IMP=0x000000010026eab8
- (void)_setupXPCActivity;	// IMP=0x000000010026e938
- (id)initWithDatabaseManager:(id)arg1 transactionReceiptFileManager:(id)arg2 paymentWebServiceCoordinator:(id)arg3;	// IMP=0x000000010026e734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

