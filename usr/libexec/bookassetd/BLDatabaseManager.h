//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLMediaLibraryManager, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSURL;

__attribute__((visibility("hidden")))
@interface BLDatabaseManager : NSObject
{
    NSURL *_persistentStoreURL;	// 8 = 0x8
    NSPersistentStoreCoordinator *_psc;	// 16 = 0x10
    NSManagedObjectContext *_moc;	// 24 = 0x18
    NSManagedObjectModel *_mom;	// 32 = 0x20
    BLMediaLibraryManager *_mediaLibraryManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001c174
@property(nonatomic) __weak BLMediaLibraryManager *mediaLibraryManager; // @synthesize mediaLibraryManager=_mediaLibraryManager;
@property(retain, nonatomic) NSManagedObjectModel *mom; // @synthesize mom=_mom;
@property(retain, nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
@property(retain, nonatomic) NSPersistentStoreCoordinator *psc; // @synthesize psc=_psc;
@property(readonly, copy, nonatomic) NSURL *persistentStoreURL; // @synthesize persistentStoreURL=_persistentStoreURL;
- (id)mq_writeArtworkWithURL:(id)arg1 downloadID:(id)arg2;	// IMP=0x000000010001bf88
- (id)mq_writeSinf:(id)arg1 downloadID:(id)arg2;	// IMP=0x000000010001bdf4
- (id)mq_writeMetadata:(id)arg1 clientIdentifier:(id)arg2 downloadID:(id)arg3;	// IMP=0x000000010001bc20
- (void)_fetchDownloadPoliciesWithPredicate:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ba44
- (void)_fetchDownloadPolicyInfoEntityWithID:(id)arg1 relatedPolicyWithStorePlaylistIdentifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b65c
- (id)mq_newDownloadPolicyFromDownloadPolicyInfo:(id)arg1;	// IMP=0x000000010001b55c
- (void)_fetchDownloadsWithPredicate:(id)arg1 sync:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b304
- (void)_fetchDownloadsWithPredicate:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b2f0
- (void)_fetchDownloadInfoEntityWithID:(id)arg1 sync:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010001afd4
- (void)_fetchDownloadInfoEntityWithID:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010001afc0
- (id)mq_newInMemoryDownloadFromDownloadInfo:(id)arg1;	// IMP=0x000000010001afb0
- (void)resumeDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ab88
- (_Bool)canResumeDownloadWithState:(long long)arg1;	// IMP=0x000000010001ab7c
- (void)finalizeOrCanceAndCleanupWithDownloadID:(id)arg1 cleanupBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001a6e4
- (void)cancelDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019a48
- (void)pauseDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019674
- (void)requestDownloadWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018254
- (void)addDownloadWithPermlink:(id)arg1 clientIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100017d54
- (void)addDownloadWithBuyParameters:(id)arg1 storeID:(id)arg2 clientIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000177bc
- (void)fetchDownloadFromDownloadID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001754c
- (void)fetchDownloadListWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000172e0
- (void)fetchListOfAllDownloadPoliciesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017048
- (void)fetchDownloadPolicyWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016f1c
- (void)_deleteDownloadPolicyWithID:(id)arg1 save:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016d4c
- (void)deleteDownloadPolicyWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016d38
- (void)saveOrUpdateDownloadPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016810
- (void)deleteDownloadWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000164dc
- (void)fetchModifiableDownloadsMatchingPredicate:(id)arg1 results:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016210
- (void)fetchDownloadListWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015fa0
- (void)updateAllInterruptedDownloadsToTheirProperStatesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100015610
- (void)updateDownloadWithID:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001530c
- (void)saveDownloadPathWithId:(id)arg1 path:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100015094
- (void)saveIsLocalCacheServerWithId:(id)arg1 isLocal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014de0
- (void)saveDownloadSizeWithId:(id)arg1 size:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014b6c
- (void)syncTouchDownloadWithId:(id)arg1;	// IMP=0x00000001000147f0
- (void)syncSaveDownloadStateWithId:(id)arg1 state:(long long)arg2;	// IMP=0x0000000100014718
- (void)saveDownloadStateWithId:(id)arg1 state:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014294
- (void)purgeAllStaleDownloadsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013a08
- (void)fetchListOfPendingDownloadsSortedByStartTime:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013530
- (void)fetchListOfAllDownloadCandidatesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013260
- (id)_setupPersistentStore:(_Bool)arg1;	// IMP=0x0000000100012c20
- (_Bool)_modelChanged;	// IMP=0x0000000100012ba4
- (id)initWithMediaLibraryManager:(id)arg1;	// IMP=0x0000000100012628

@end

