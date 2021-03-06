//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCProfileHandler.h"

@class NSData;

@interface MCProfileServiceProfileHandler : MCProfileHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
    NSData *_persistentID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000717fc
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x00000001000716f4
- (void)unsetAside;	// IMP=0x0000000100071600
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x000000010007150c
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x0000000100071270
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100071070
- (id)fetchFinalProfileWithClient:(id)arg1 outProfileData:(id *)arg2 outError:(id *)arg3;	// IMP=0x00000001000703f8
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x0000000100070314
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x0000000100070230
- (id)_badIdentityError;	// IMP=0x0000000100070198
- (void)dealloc;	// IMP=0x0000000100070144
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000100070064

@end

