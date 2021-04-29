//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface MCMPOSIXUser : NSObject <NSCopying>
{
    _Bool _root;	// 8 = 0x8
    _Bool _roleUser;	// 9 = 0x9
    unsigned int _UID;	// 12 = 0xc
    unsigned int _primaryGID;	// 16 = 0x10
    NSURL *_homeDirectoryURL;	// 24 = 0x18
    NSURL *_unvalidatedHomeDirectoryURL;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
}

+ (_Bool)_isRoleUserWithUID:(unsigned int)arg1 homeDirectoryURL:(id)arg2;	// IMP=0x0000000100088814
+ (id)_getCachedUID:(unsigned int)arg1 flush:(_Bool)arg2 onCacheMiss:(CDUnknownBlockType)arg3;	// IMP=0x0000000100088690
+ (id)_posixUserWithPasswdPtr:(struct passwd *)arg1;	// IMP=0x0000000100088264
+ (id)_posixUserWithPasswdFillBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100088078
+ (void)flush;	// IMP=0x000000010008804c
+ (id)root;	// IMP=0x000000010008803c
+ (id)nobody;	// IMP=0x000000010008802c
+ (id)posixUserWithUID:(unsigned int)arg1;	// IMP=0x0000000100087efc
+ (id)posixUserWithName:(id)arg1;	// IMP=0x0000000100087da8
+ (id)currentPOSIXUser;	// IMP=0x0000000100087d78
- (void).cxx_destruct;	// IMP=0x00000001000879bc
@property(readonly, nonatomic, getter=isRoleUser) _Bool roleUser; // @synthesize roleUser=_roleUser;
@property(readonly, nonatomic, getter=isRoot) _Bool root; // @synthesize root=_root;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *unvalidatedHomeDirectoryURL; // @synthesize unvalidatedHomeDirectoryURL=_unvalidatedHomeDirectoryURL;
@property(readonly, nonatomic) NSURL *homeDirectoryURL; // @synthesize homeDirectoryURL=_homeDirectoryURL;
@property(readonly, nonatomic) unsigned int primaryGID; // @synthesize primaryGID=_primaryGID;
@property(readonly, nonatomic) unsigned int UID; // @synthesize UID=_UID;
- (id)initWithUID:(unsigned int)arg1 primaryGID:(unsigned int)arg2 homeDirectoryURL:(id)arg3 unvalidatedHomeDirectoryURL:(id)arg4 name:(id)arg5 roleUser:(_Bool)arg6;	// IMP=0x000000010008788c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000877d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100087754
- (_Bool)isEqualToPOSIXUser:(id)arg1;	// IMP=0x0000000100087740
- (unsigned long long)hash;	// IMP=0x0000000100087738
- (id)fullDescription;	// IMP=0x00000001000876c8
- (id)description;	// IMP=0x0000000100087658

@end
