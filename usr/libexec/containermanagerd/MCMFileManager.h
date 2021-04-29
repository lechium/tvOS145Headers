//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCMFileManager : NSObject
{
    CDUnknownFunctionPointerType _mkstemp_dprotected_np;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x000000010002c8c8
- (id)fsNodeOfURL:(id)arg1 followSymlinks:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010002ac70
- (id)copyDescriptionOfURL:(id)arg1;	// IMP=0x000000010002aa60
- (_Bool)removeExclusionFromBackupFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002a9d0
- (_Bool)fixUserPermissionsAtURL:(id)arg1 limitToTopLevelURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002a7c8
- (unsigned long long)dataWritingOptionsForFileAtURL:(id)arg1;	// IMP=0x000000010002a4b8
- (_Bool)stripACLFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002a4a4
- (_Bool)_enumeratePOSIX1eACLEntriesAtURL:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010002a2a8
- (_Bool)checkFileSystemAtURL:(id)arg1 supportsPerFileKeys:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x000000010002a118
- (_Bool)checkFileSystemAtURL:(id)arg1 isCaseSensitive:(_Bool *)arg2 canAtomicSwap:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000100029ee8
- (_Bool)compareVolumeForURL:(id)arg1 versusURL:(id)arg2 isSameVolume:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000100029ac0
- (_Bool)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 mode:(unsigned short)arg4 error:(id *)arg5;	// IMP=0x0000000100029364
- (id)readDataFromURL:(id)arg1 options:(unsigned long long)arg2 fsNode:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000100028f18
- (id)readDataFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100028f04
- (id)realPathForURL:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100028d60
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;	// IMP=0x00000001000275bc
- (_Bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;	// IMP=0x00000001000273a8
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;	// IMP=0x00000001000270c8
- (id)_realPathWhatExistsInPath:(id)arg1;	// IMP=0x0000000100026eb8
- (unsigned long long)diskUsageForURL:(id)arg1;	// IMP=0x00000001000269c4
- (unsigned long long)fastDiskUsageForURL:(id)arg1;	// IMP=0x0000000100026384
- (void)printDirectoryStructureAtURL:(id)arg1;	// IMP=0x0000000100025fcc
- (_Bool)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000100025bdc
- (_Bool)dataProtectionClassOfItemAtURL:(id)arg1 class:(int *)arg2 error:(id *)arg3;	// IMP=0x0000000100025a6c
- (_Bool)itemDoesNotExistAtURL:(id)arg1;	// IMP=0x0000000100025a4c
- (_Bool)itemAtURL:(id)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 fsNode:(id *)arg5 error:(id *)arg6;	// IMP=0x00000001000256d0
- (_Bool)itemAtURL:(id)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x00000001000256bc
- (_Bool)itemAtURL:(id)arg1 exists:(_Bool *)arg2 isDirectory:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00000001000256a0
- (_Bool)itemExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x0000000100025668
- (_Bool)itemAtURL:(id)arg1 exists:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000100025654
- (_Bool)itemExistsAtURL:(id)arg1;	// IMP=0x0000000100025644
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002522c
- (_Bool)standardizeOwnershipAtURL:(id)arg1 toPOSIXUser:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100024e04
- (_Bool)standardizeAllSystemContainerACLsAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100024838
- (_Bool)standardizeACLsForSystemContainerAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100024824
- (_Bool)standardizeACLsAtURL:(id)arg1 isSystemContainer:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100024530
- (_Bool)setTopLevelSystemContainerACLAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000243ac
- (struct _acl *)_CopyTopLevelSystemContainerACLWithError:(id *)arg1;	// IMP=0x00000001000242c0
- (struct _acl *)_CopySystemContainerACLWithNumACEs:(int)arg1 isDir:(_Bool)arg2 inheritOnly:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x0000000100024198
- (_Bool)_CreateSystemUserACEInACL:(struct _acl **)arg1 withPermissions:(int)arg2 andFlags:(int)arg3 withError:(id *)arg4;	// IMP=0x0000000100023df4
- (_Bool)_traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000239c4
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000239ac
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 withNamePrefix:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000237ec
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000237d8
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000237c4
- (_Bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000237b0
- (_Bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002379c
- (_Bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000010002336c
- (_Bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100023124
- (id)targetOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022ed0
- (_Bool)symbolicallyLinkURL:(id)arg1 toSymlinkTarget:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100022b90
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x0000000100022adc
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id *)arg5;	// IMP=0x0000000100022a24
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 error:(id *)arg5;	// IMP=0x0000000100022a10
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 class:(int)arg5 fsNode:(id *)arg6 error:(id *)arg7;	// IMP=0x00000001000223d4
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 class:(int)arg5 error:(id *)arg6;	// IMP=0x00000001000223a8
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100021ef0
- (id)init;	// IMP=0x0000000100021e94

@end

