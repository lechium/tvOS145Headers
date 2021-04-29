//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IXFileManager : NSObject
{
}

+ (id)defaultManager;	// IMP=0x00000001000274b4
- (unsigned long long)diskUsageForURL:(id)arg1;	// IMP=0x000000010002bea8
- (unsigned long long)_diskUsageForDirectoryURL:(id)arg1;	// IMP=0x000000010002b614
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;	// IMP=0x000000010002a5b8
- (_Bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;	// IMP=0x000000010002a3a4
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;	// IMP=0x000000010002a1d8
- (id)_realPathWhatExistsInPath:(id)arg1;	// IMP=0x0000000100029f00
- (_Bool)setPermissionsOfItemAtURL:(id)arg1 toMode:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x0000000100029e24
- (_Bool)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000100029c00
- (_Bool)dataProtectionClassOfItemAtURL:(id)arg1 class:(int *)arg2 error:(id *)arg3;	// IMP=0x0000000100029a88
- (id)debugDescriptionOfItemAtURL:(id)arg1;	// IMP=0x00000001000299d0
- (_Bool)itemDoesNotExistAtURL:(id)arg1;	// IMP=0x0000000100029880
- (_Bool)itemExistsAtURL:(id)arg1;	// IMP=0x0000000100029870
- (_Bool)itemExistsAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002985c
- (_Bool)itemExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000100029660
- (id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000294cc
- (_Bool)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002937c
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100028e0c
- (_Bool)_removeACLAtPath:(const char *)arg1 isDir:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010002880c
- (_Bool)_traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100028598
- (id)itemReplacementDirectoryAppropriateForURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100028500
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000282d8
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000282c4
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000282b0
- (_Bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002829c
- (_Bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100028288
- (_Bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100027f1c
- (_Bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100027d24
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x0000000100027d10
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id *)arg5;	// IMP=0x00000001000279fc
- (_Bool)removeItemAtURL:(id)arg1 keepParent:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100027568
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100027554

@end

