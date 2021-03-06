//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineResourceDownloadQueueImplementation-Protocol.h"

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceDownloadQueue : CPLPrequeliteStorage <CPLEngineResourceDownloadQueueImplementation>
{
    CPLPrequeliteVariable *_nextTaskIdentifier;	// 8 = 0x8
    CPLPrequeliteVariable *_nextPosition;	// 16 = 0x10
    _Bool _recreatedDownloadQueueIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100049120
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100049008
- (id)statusPerScopeIndex;	// IMP=0x0000000100048f7c
- (id)status;	// IMP=0x0000000100048bb8
- (id)recordsDesignation;	// IMP=0x0000000100048bac
- (_Bool)hasActiveOrQueuedBackgroundDownloadOperations;	// IMP=0x0000000100048ae4
- (unsigned long long)countOfQueuedDownloadTasks;	// IMP=0x0000000100048ad4
- (unsigned long long)_countOfRecordsWithStatus:(int)arg1;	// IMP=0x0000000100048a0c
- (id)enumeratorForDownloadedResources;	// IMP=0x0000000100048810
- (_Bool)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100048688
- (_Bool)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;	// IMP=0x000000010004859c
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 andIntent:(unsigned long long)arg2 maximumSize:(unsigned long long)arg3 maximumCount:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000100048008
- (_Bool)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100047ddc
- (_Bool)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100047bac
- (_Bool)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(_Bool)arg3 didDiscard:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0000000100047664
- (_Bool)enqueueBackgroundDownloadTaskForResource:(id)arg1 intent:(unsigned long long)arg2 downloading:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100047034
- (id)_enqueuedResourceForResource:(id)arg1 verifyScopeIndex:(_Bool)arg2;	// IMP=0x0000000100046df8
- (_Bool)_deleteEnqueuedResource:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100046bdc
- (_Bool)_getNextPosition:(unsigned long long *)arg1 andBumpWithError:(id *)arg2;	// IMP=0x0000000100046b18
- (unsigned long long)newTaskIdentifier;	// IMP=0x00000001000469ac
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0000000100046898
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0000000100046250
- (_Bool)initializeStorage;	// IMP=0x0000000100046138
- (_Bool)_createResourceTypeAndStatusIndex;	// IMP=0x00000001000460c4
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0000000100045fa8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly) Class superclass;

@end

