//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, SHLSyncSessionModifyTask;

__attribute__((visibility("hidden")))
@interface SHLModifyTaskRecovery : NSObject
{
    SHLSyncSessionModifyTask *_originalTask;	// 8 = 0x8
    NSArray *_savedGroups;	// 16 = 0x10
    NSArray *_savedTracks;	// 24 = 0x18
    NSArray *_deletedIDs;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100016b98
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *deletedIDs; // @synthesize deletedIDs=_deletedIDs;
@property(retain, nonatomic) NSArray *savedTracks; // @synthesize savedTracks=_savedTracks;
@property(retain, nonatomic) NSArray *savedGroups; // @synthesize savedGroups=_savedGroups;
@property(retain, nonatomic) SHLSyncSessionModifyTask *originalTask; // @synthesize originalTask=_originalTask;
- (id)recoverTaskFromLimitExceededError;	// IMP=0x0000000100016ad8
- (id)recoverTaskFromPartialError;	// IMP=0x00000001000166a0
@property(readonly, nonatomic) NSArray *recoverableTasks;
- (id)initWithOriginalTask:(id)arg1 savedGroups:(id)arg2 savedTracks:(id)arg3 deletedIDs:(id)arg4 error:(id)arg5;	// IMP=0x00000001000163ac

@end
