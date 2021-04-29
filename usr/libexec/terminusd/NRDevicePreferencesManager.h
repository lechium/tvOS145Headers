//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSUUID;
@protocol OS_dispatch_queue;

@interface NRDevicePreferencesManager : NSObject
{
    NSUUID *_nrUUID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_devicePreferencesTypeLink;	// 24 = 0x18
    NSMutableDictionary *_policyTrafficClassifiersDict;	// 32 = 0x20
    NSSet *_policyTrafficClasses;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010009b4c0
@property(retain, nonatomic) NSSet *policyTrafficClasses; // @synthesize policyTrafficClasses=_policyTrafficClasses;
@property(retain, nonatomic) NSMutableDictionary *policyTrafficClassifiersDict; // @synthesize policyTrafficClassifiersDict=_policyTrafficClassifiersDict;
@property(retain, nonatomic) NSMutableDictionary *devicePreferencesTypeLink; // @synthesize devicePreferencesTypeLink=_devicePreferencesTypeLink;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSUUID *nrUUID; // @synthesize nrUUID=_nrUUID;
- (void)removeAllPreferences;	// IMP=0x000000010009b3c0
- (void)removePreferencesForConnection:(id)arg1;	// IMP=0x000000010009b328
- (void)applyPolicyTrafficClassifiers;	// IMP=0x000000010009b04c
- (void)removePolicyTrafficClassifiersForConnection:(id)arg1;	// IMP=0x000000010009ae9c
- (void)setPolicyTrafficClassifiers:(id)arg1 forConnection:(id)arg2;	// IMP=0x000000010009ad64
- (void)applyLinkPreferences;	// IMP=0x000000010009a744
- (void)removeLinkPreferencesForConnection:(id)arg1;	// IMP=0x000000010009a5e0
- (void)setLinkPreferences:(id)arg1 forConnection:(id)arg2;	// IMP=0x000000010009a524
- (void)removeLinkPreferencesForIdentifier:(id)arg1;	// IMP=0x000000010009a430
- (void)setLinkPreferences:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000010009a364
- (void)cancel;	// IMP=0x000000010009a2f8
- (id)description;	// IMP=0x000000010009a250
- (void)dealloc;	// IMP=0x000000010009a1e0
- (id)initPrefManagerWithQueue:(id)arg1 nrUUID:(id)arg2;	// IMP=0x0000000100099fb0

@end

