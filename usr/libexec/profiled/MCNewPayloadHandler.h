//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCPayload, MCProfileHandler, NSArray;

@interface MCNewPayloadHandler : NSObject
{
    MCPayload *_payload;	// 8 = 0x8
    MCProfileHandler *_profileHandler;	// 16 = 0x10
    NSArray *_userInputResponses;	// 24 = 0x18
}

+ (id)prioritizeUserInput:(id)arg1 key:(id)arg2 overField:(id)arg3;	// IMP=0x000000010001d3d4
+ (id)promptDictionaryForKey:(id)arg1 title:(id)arg2 description:(id)arg3 retypeDescription:(id)arg4 finePrint:(id)arg5 defaultValue:(id)arg6 placeholderValue:(id)arg7 minimumLength:(unsigned long long)arg8 fieldType:(int)arg9 flags:(int)arg10;	// IMP=0x000000010001d3b0
- (void).cxx_destruct;	// IMP=0x000000010001d41c
@property(retain, nonatomic) NSArray *userInputResponses; // @synthesize userInputResponses=_userInputResponses;
@property(readonly, nonatomic) __weak MCProfileHandler *profileHandler; // @synthesize profileHandler=_profileHandler;
@property(readonly, retain, nonatomic) MCPayload *payload; // @synthesize payload=_payload;
- (id)_temporaryPersistentIDForIdentityUUID:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010001d140
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010001d05c
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x000000010001d048
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010001cf64
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x000000010001cf50
- (void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010001ceb0
- (void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x000000010001ce30
- (void)remove;	// IMP=0x000000010001ce2c
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x000000010001ce20
- (void)unsetAside;	// IMP=0x000000010001ce1c
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x000000010001ce10
- (void)setAside;	// IMP=0x000000010001ce0c
- (_Bool)isInstalled;	// IMP=0x000000010001ce04
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010001ce00
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010001cdfc
- (void)unstageFromInstallationWithInstaller:(id)arg1;	// IMP=0x000000010001cdf8
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001cdf0
- (_Bool)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x000000010001cde8
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010001cde0
- (id)userInputFields;	// IMP=0x000000010001cdcc
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x000000010001cd30

@end

