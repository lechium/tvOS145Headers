//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SHLSyncSessionTask-Protocol.h"

@class NSArray, NSProgress, NSString, SHLLibraryBatch, SHLSyncSession;
@protocol SHLSyncSessionModifyTaskDelegate;

__attribute__((visibility("hidden")))
@interface SHLSyncSessionModifyTask : NSObject <SHLSyncSessionTask>
{
    NSProgress *_progress;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _retryCount;	// 24 = 0x18
    SHLSyncSession *session;	// 32 = 0x20
    NSString *_syncTrigger;	// 40 = 0x28
    id <SHLSyncSessionModifyTaskDelegate> _delegate;	// 48 = 0x30
    SHLLibraryBatch *_tracksToModify;	// 56 = 0x38
    SHLLibraryBatch *_groupsToModify;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002e6fc
- (void).cxx_destruct;	// IMP=0x000000010002e8ac
@property(retain, nonatomic) SHLLibraryBatch *groupsToModify; // @synthesize groupsToModify=_groupsToModify;
@property(retain, nonatomic) SHLLibraryBatch *tracksToModify; // @synthesize tracksToModify=_tracksToModify;
@property(nonatomic) __weak id <SHLSyncSessionModifyTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSString *syncTrigger; // @synthesize syncTrigger=_syncTrigger;
@property(nonatomic) __weak SHLSyncSession *session; // @synthesize session;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void)updateProgress;	// IMP=0x000000010002e704
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002e618
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002e45c
@property(readonly, nonatomic) NSArray *allItemIdentifiers;
@property(readonly, nonatomic) long long size;
@property(readonly, nonatomic) long long qualityOfService;
@property(readonly, nonatomic) long long type;
- (id)subdivideTaskIntoBatchesOfSize:(long long)arg1;	// IMP=0x000000010002db14
- (id)_init;	// IMP=0x000000010002d9d0
- (id)initWithTracksToModify:(id)arg1 groupsToModify:(id)arg2;	// IMP=0x000000010002d83c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

