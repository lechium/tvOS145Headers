//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRAuthorizationManager : NSObject
{
    struct mutex _authStateMutex;	// 8 = 0x8
    struct unordered_map<int, AuthorizationState, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, AuthorizationState>>> _authStateMap;	// 72 = 0x48
    unsigned long long _sandboxExtensionHandle;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x00000001000155b4
- (void).cxx_destruct;	// IMP=0x000000010001558c
@property(nonatomic) unsigned long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
- (void)releaseSandboxExtensionHandle;	// IMP=0x0000000100015548
- (id)getUsageDescriptionStringFromInfoPlist:(id)arg1;	// IMP=0x0000000100015418
- (struct AuthorizationState)presentUserAuthorizationPrompt:(id)arg1 bundleRecord:(id)arg2;	// IMP=0x0000000100015070
- (long long)authorizationStatusForSession:(id)arg1;	// IMP=0x0000000100014bdc
- (void)clearStateForPid:(int)arg1;	// IMP=0x0000000100014b7c
- (id)init;	// IMP=0x0000000100014b00

@end
