//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

@interface CPLCloudKitSimpleRecordFetchTask : CPLCloudKitTransportTask
{
}

- (void)fetchRecordWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000aee5c
- (void)_fetchNextOperationType:(id)arg1 recordIDMapping:(id)arg2 inResult:(id)arg3 storeRequestUUIDsIn:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000aea98
- (void)fetchRecordWithNames:(id)arg1 inScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000aea80
- (void)fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 inScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ae90c
- (void)fetchRecordWithNames:(id)arg1 fetchResources:(_Bool)arg2 inScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ae420
- (void)_fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 type:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ad934
- (id)initWithController:(id)arg1;	// IMP=0x00000001000ad8f8

@end

