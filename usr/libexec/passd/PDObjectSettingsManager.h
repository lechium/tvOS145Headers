//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PDObjectSettingsManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _needsArchive;	// 12 = 0xc
    NSMutableDictionary *_objectSettings;	// 16 = 0x10
}

+ (void)removeSafehavenArchive;	// IMP=0x0000000100281210
+ (id)archive;	// IMP=0x0000000100280dd4
+ (id)archiveWithURL:(id)arg1;	// IMP=0x00000001002817cc
- (void).cxx_destruct;	// IMP=0x0000000100281454
- (id)_objectSettings;	// IMP=0x000000010028140c
- (void)_requestArchiveToDisk;	// IMP=0x0000000100281214
- (id)uniqueIdentifiers;	// IMP=0x00000001002811c0
- (void)removeSettingsForObjectWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000100281154
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueIdentifier:(id)arg2 defaultSettings:(unsigned long long)arg3;	// IMP=0x0000000100281064
- (_Bool)settingEnabled:(unsigned long long)arg1 forObjectWithUniqueIdentifier:(id)arg2 defaultSettings:(unsigned long long)arg3;	// IMP=0x000000010028102c
- (unsigned long long)settingsForObjectWithUniqueIdentifier:(id)arg1 defaultSettings:(unsigned long long)arg2;	// IMP=0x0000000100280f98
- (_Bool)hasSettingsForObjectWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000100280f14
- (id)initWithObjectSettings:(id)arg1;	// IMP=0x0000000100280e6c
- (id)init;	// IMP=0x0000000100280e5c
- (unsigned long long)_defaultSettingsForObjectClass:(Class)arg1;	// IMP=0x000000010028169c
- (void)applySettingsToObject:(id)arg1;	// IMP=0x000000010028163c
- (void)updateSettings:(unsigned long long)arg1 forObject:(id)arg2;	// IMP=0x00000001002815a0
- (_Bool)settingEnabled:(unsigned long long)arg1 forObject:(id)arg2;	// IMP=0x00000001002814f8
- (unsigned long long)settingsForObject:(id)arg1;	// IMP=0x0000000100281460
- (unsigned long long)_defaultSettingsForDatabasePass:(id)arg1;	// IMP=0x0000000100281a0c
- (void)updateSettings:(unsigned long long)arg1 forDatabasePass:(id)arg2;	// IMP=0x0000000100281970
- (_Bool)settingEnabled:(unsigned long long)arg1 forDatabasePass:(id)arg2;	// IMP=0x00000001002818c8
- (unsigned long long)settingsForDatabasePass:(id)arg1;	// IMP=0x0000000100281830

@end

