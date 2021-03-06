//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMManagedPathRegistry;

@interface MCMLibraryRepair : NSObject
{
    _Bool _pathsCreated;	// 8 = 0x8
    MCMManagedPathRegistry *_registry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100018078
@property(nonatomic) _Bool pathsCreated; // @synthesize pathsCreated=_pathsCreated;
@property(readonly, nonatomic) MCMManagedPathRegistry *registry; // @synthesize registry=_registry;
- (_Bool)_fixOwnershipOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 statfs:(struct statfs *)arg4 uid:(unsigned int)arg5 gid:(unsigned int)arg6 error:(id *)arg7;	// IMP=0x0000000100017d8c
- (_Bool)_fixFlagsOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 error:(id *)arg4;	// IMP=0x0000000100017b1c
- (_Bool)_fixPOSIXBitsOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 error:(id *)arg4;	// IMP=0x00000001000178ac
- (_Bool)_fixPOSIXPermsOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 error:(id *)arg4;	// IMP=0x0000000100017464
- (_Bool)_fixACLOnFD:(int)arg1 removeACLFilesec:(struct _filesec *)arg2 denyDeleteFilesec:(struct _filesec *)arg3 denyDeleteText:(const char *)arg4 path:(const char *)arg5 error:(id *)arg6;	// IMP=0x0000000100016cb8
- (_Bool)_withEveryoneDenyDeleteACLDoBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016a58
- (struct _filesec *)_denyDeleteACLFilesecWithACLText:(char **)arg1;	// IMP=0x0000000100016984
- (struct _filesec *)_removeACLFilesec;	// IMP=0x000000010001694c
- (_Bool)_canRepairLocally;	// IMP=0x000000010001690c
- (id)_managedPathsForGenericRepair;	// IMP=0x00000001000168b8
- (_Bool)managedPathsHaveChanged;	// IMP=0x0000000100016428
- (_Bool)createPathsIfNecessaryWithError:(id *)arg1;	// IMP=0x0000000100016140
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 error:(id *)arg2 duringBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000160a0
- (_Bool)performGenericRepairWithError:(id *)arg1;	// IMP=0x0000000100015bcc
- (_Bool)fixPermissionsWithManagedPath:(id)arg1 uid:(unsigned int)arg2 gid:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x00000001000152a0
- (id)initWithManagedPathRegistry:(id)arg1;	// IMP=0x0000000100015224

@end

