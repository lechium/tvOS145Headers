//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineResourceStorageImplementation-Protocol.h"

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceStorage : CPLPrequeliteStorage <CPLEngineResourceStorageImplementation>
{
    CPLPrequeliteVariable *_totalSizeVar;	// 8 = 0x8
    CPLPrequeliteVariable *_totalOriginalSizeVar;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004e55c
- (id)status;	// IMP=0x000000010004e44c
- (_Bool)resetWithError:(id *)arg1;	// IMP=0x000000010004e2c0
- (unsigned long long)totalOriginalResourceSize;	// IMP=0x000000010004e268
- (unsigned long long)totalResourceSize;	// IMP=0x000000010004e210
- (_Bool)_decrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010004e0c0
- (_Bool)_decrementTotalResourceSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010004de30
- (_Bool)_incrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010004dda0
- (_Bool)_incrementTotalResourceSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010004dd10
- (void)enumerateIdentitiesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d9b4
- (unsigned long long)retainCountForIdentity:(id)arg1;	// IMP=0x000000010004d890
- (_Bool)releaseIdentity:(id)arg1 lastReference:(_Bool *)arg2 isTrackedOriginal:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000010004d64c
- (_Bool)retainIdentity:(id)arg1 isTrackedOriginal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010004d424
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x000000010004d288
- (_Bool)initializeStorage;	// IMP=0x000000010004d1b0
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x000000010004d094

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly) Class superclass;

@end
