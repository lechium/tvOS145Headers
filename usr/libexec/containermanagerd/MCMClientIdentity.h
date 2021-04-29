//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMPOSIXUser, MCMUserIdentity, NSDictionary, NSString;

@interface MCMClientIdentity : NSObject
{
    _Bool _sandboxed;	// 8 = 0x8
    _Bool _kernel;	// 9 = 0x9
    int _posixPID;	// 12 = 0xc
    unsigned int _platform;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    MCMPOSIXUser *_posixUser;	// 32 = 0x20
    NSDictionary *_entitlements;	// 40 = 0x28
    MCMUserIdentity *_userIdentity;	// 48 = 0x30
    struct container_client *_client;	// 56 = 0x38
    CDStruct_4c969caf _auditToken;	// 64 = 0x40
}

+ (id)privilegedClientIdentityWithUserIdentity:(id)arg1 kernel:(_Bool)arg2;	// IMP=0x00000001000210c4
+ (id)anonymousPrivilegedClientIdentity;	// IMP=0x0000000100021058
+ (id)_clientIdentityWithXPCConnection:(id)arg1 personaUniqueString:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000100021bd4
+ (id)clientIdentityWithXPCConnection:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000100021b14
+ (id)clientIdentityWithClient:(struct container_client *)arg1;	// IMP=0x0000000100021a18
- (void).cxx_destruct;	// IMP=0x0000000100020b40
@property(readonly, nonatomic) struct container_client *client; // @synthesize client=_client;
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic, getter=isKernel) _Bool kernel; // @synthesize kernel=_kernel;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) MCMPOSIXUser *posixUser; // @synthesize posixUser=_posixUser;
@property(readonly, nonatomic) int posixPID; // @synthesize posixPID=_posixPID;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)shortDescription;	// IMP=0x0000000100020a7c
- (id)description;	// IMP=0x0000000100020a0c
- (void)dealloc;	// IMP=0x00000001000209c4
- (_Bool)boolValueOfEntitlement:(id)arg1;	// IMP=0x0000000100020900
- (id)initWithClient:(struct container_client *)arg1 userIdentity:(id)arg2 entitlements:(id)arg3 sandboxed:(_Bool)arg4 kernel:(_Bool)arg5;	// IMP=0x0000000100020674
- (id)init;	// IMP=0x0000000100020558
- (id)clientIdentityWithXPCConnection:(id)arg1 xpcMessage:(id)arg2;	// IMP=0x000000010002121c

@end

