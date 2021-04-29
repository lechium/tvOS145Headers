//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "THThreadNetworkCredentialsBackingStore-Protocol.h"

@class NSString;

@interface THThreadNetworkCredentialsKeychainBackingStore : NSObject <THThreadNetworkCredentialsBackingStore>
{
}

+ (id)defaultBackingStore;	// IMP=0x000000010014834c
- (void)deleteRecordWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014a694
- (void)storeRecord:(id)arg1 waitForSync:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010014a244
- (void)storeRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014a230
- (void)storeRecordAndSync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100148ff4
- (void)errorout:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100148eec
- (void)retrieveRecordWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100148c90
- (void)retrieveAllRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100148a70
- (void)retrieveAllRecordsForNetwork:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100148780
- (id)_doFetchRecords:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001483b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

