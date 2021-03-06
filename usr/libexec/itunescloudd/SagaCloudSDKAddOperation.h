//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSString;

@interface SagaCloudSDKAddOperation : CloudLibraryOperation
{
    NSString *_opaqueID;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    CDUnknownBlockType _updateCompletionBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000a2574
@property(copy, nonatomic) CDUnknownBlockType updateCompletionBlock; // @synthesize updateCompletionBlock=_updateCompletionBlock;
@property(copy, nonatomic) NSString *opaqueID; // @synthesize opaqueID=_opaqueID;
- (void)main;	// IMP=0x00000001000a1be4
- (id)requestWithDatabaseID:(int)arg1 databaseRevision:(int)arg2 opaqueID:(id)arg3 bundleID:(id)arg4;	// IMP=0x00000001000a1bd0
- (unsigned int)currentDatabaseRevision;	// IMP=0x00000001000a1b80
- (id)initWithConfiguration:(id)arg1 opaqueID:(id)arg2 bundleID:(id)arg3;	// IMP=0x00000001000a1aa8
- (id)initWithOpaqueID:(id)arg1 bundleID:(id)arg2;	// IMP=0x00000001000a1a18

@end

