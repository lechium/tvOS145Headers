//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMLibraryRepair.h"

@class MCMManagedUserPathRegistry;

@interface MCMLibraryRepairForUser : MCMLibraryRepair
{
    MCMManagedUserPathRegistry *_userRegistry;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010001986c
@property(readonly, nonatomic) MCMManagedUserPathRegistry *userRegistry; // @synthesize userRegistry=_userRegistry;
- (_Bool)_canRepairLocally;	// IMP=0x000000010001975c
- (id)_managedPathFromContainerClassPath:(id)arg1 registry:(id)arg2;	// IMP=0x0000000100019570
- (id)_setByAddingContainerClassPathsToSet:(id)arg1 registry:(id)arg2;	// IMP=0x0000000100019014
- (id)_managedPathsForGenericRepair;	// IMP=0x0000000100018f88
- (_Bool)performRepairForContainerPath:(id)arg1 containerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100018588
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 containerPath:(id)arg2 containerIdentifier:(id)arg3 error:(id *)arg4 duringBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000001000184b0
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 containerRootURL:(id)arg2 error:(id *)arg3 duringBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000183f0
- (id)initWithManagedUserPathRegistry:(id)arg1;	// IMP=0x000000010001836c

@end

