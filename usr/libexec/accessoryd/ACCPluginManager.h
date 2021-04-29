//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface ACCPluginManager : NSObject
{
    _Bool _allowDuplicateClassTypes;	// 8 = 0x8
    NSMutableSet *_pluginBundleSearchPathsMutable;	// 16 = 0x10
    NSMutableSet *_pluginBundlesMutable;	// 24 = 0x18
    NSMutableSet *_pluginInstancesMutable;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100117660
@property(retain, nonatomic) NSMutableSet *pluginInstancesMutable; // @synthesize pluginInstancesMutable=_pluginInstancesMutable;
@property(retain, nonatomic) NSMutableSet *pluginBundlesMutable; // @synthesize pluginBundlesMutable=_pluginBundlesMutable;
@property(retain, nonatomic) NSMutableSet *pluginBundleSearchPathsMutable; // @synthesize pluginBundleSearchPathsMutable=_pluginBundleSearchPathsMutable;
@property(nonatomic) _Bool allowDuplicateClassTypes; // @synthesize allowDuplicateClassTypes=_allowDuplicateClassTypes;
@property(readonly, nonatomic) NSSet *pluginInstances;
@property(readonly, nonatomic) NSSet *pluginBundles;
@property(readonly, nonatomic) NSSet *pluginBundleSearchPaths;
- (id)initClass:(Class)arg1;	// IMP=0x00000001001174b4
- (id)pluginInstancesWithProtocols:(id)arg1 matchAny:(_Bool)arg2;	// IMP=0x00000001001171d4
- (id)pluginInstancesWithClasses:(id)arg1;	// IMP=0x0000000100116ff8
- (unsigned long long)removePlugIns:(id)arg1;	// IMP=0x0000000100116f5c
- (unsigned long long)removePlugInsWithProtocols:(id)arg1 matchAny:(_Bool)arg2;	// IMP=0x0000000100116f04
- (unsigned long long)removePlugInsWithClasses:(id)arg1;	// IMP=0x0000000100116eac
- (unsigned long long)removeAllPlugIns;	// IMP=0x0000000100116e54
- (unsigned long long)stopPlugIns:(id)arg1;	// IMP=0x0000000100116cc0
- (unsigned long long)stopPlugInsWithProtocols:(id)arg1 matchAny:(_Bool)arg2;	// IMP=0x0000000100116c68
- (unsigned long long)stopPlugInsWithClasses:(id)arg1;	// IMP=0x0000000100116c10
- (unsigned long long)stopAllPlugIns;	// IMP=0x0000000100116bb8
- (unsigned long long)startPlugIns:(id)arg1;	// IMP=0x0000000100116a28
- (unsigned long long)startPlugInsWithProtocols:(id)arg1 matchAny:(_Bool)arg2;	// IMP=0x00000001001169d0
- (unsigned long long)startPlugInsWithClasses:(id)arg1;	// IMP=0x0000000100116978
- (unsigned long long)startAllPlugIns;	// IMP=0x0000000100116920
- (unsigned long long)initPlugInsWithBundleNames:(id)arg1 orClasses:(id)arg2 orProtocols:(id)arg3 matchAny:(_Bool)arg4;	// IMP=0x00000001001161b0
- (unsigned long long)initPlugInsWithBundleNames:(id)arg1;	// IMP=0x0000000100116198
- (unsigned long long)initPlugInsWithProtocols:(id)arg1 matchAny:(_Bool)arg2;	// IMP=0x000000010011617c
- (unsigned long long)initPlugInsWithClasses:(id)arg1;	// IMP=0x0000000100116160
- (unsigned long long)initAllPlugIns;	// IMP=0x0000000100116144
- (unsigned long long)removeAllBundles;	// IMP=0x0000000100116068
- (unsigned long long)loadBundlesWithPaths:(id)arg1 andIdentifiers:(id)arg2 orClasses:(id)arg3 orProtocols:(id)arg4 matchAny:(_Bool)arg5;	// IMP=0x0000000100115a24
- (unsigned long long)loadBundlesWithPaths:(id)arg1;	// IMP=0x0000000100115a08
- (unsigned long long)loadBundlesWithClasses:(id)arg1 orProtocols:(id)arg2 matchAny:(_Bool)arg3;	// IMP=0x0000000100115928
- (unsigned long long)loadBundlesWithProtocols:(id)arg1 matchAny:(_Bool)arg2;	// IMP=0x0000000100115860
- (unsigned long long)loadBundlesWithClasses:(id)arg1;	// IMP=0x00000001001157a4
- (unsigned long long)loadBundlesWithIdentifiers:(id)arg1;	// IMP=0x00000001001156e8
- (unsigned long long)loadBundlesWithNames:(id)arg1;	// IMP=0x0000000100115634
- (unsigned long long)loadBundlesWithExtension:(id)arg1 andClasses:(id)arg2 orProtocols:(id)arg3 matchAny:(_Bool)arg4;	// IMP=0x0000000100115530
- (unsigned long long)loadBundlesWithExtension:(id)arg1 andProtocols:(id)arg2 matchAny:(_Bool)arg3;	// IMP=0x000000010011544c
- (unsigned long long)loadBundlesWithExtension:(id)arg1 andClasses:(id)arg2;	// IMP=0x000000010011536c
- (unsigned long long)loadBundlesWithExtension:(id)arg1 andNames:(id)arg2;	// IMP=0x0000000100115298
- (unsigned long long)loadBundlesWithExtension:(id)arg1;	// IMP=0x00000001001151e8
- (unsigned long long)loadAllBundles;	// IMP=0x0000000100115158
- (unsigned long long)removeAllBundleSearchPaths;	// IMP=0x00000001001150d0
- (unsigned long long)removeBundleSearchPath:(id)arg1;	// IMP=0x0000000100114f04
- (unsigned long long)addBundleSearchPathsForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 subpath:(id)arg3 recursive:(_Bool)arg4;	// IMP=0x0000000100114d14
- (unsigned long long)addBundleSearchPath:(id)arg1 recursive:(_Bool)arg2;	// IMP=0x0000000100114c5c
- (id)init;	// IMP=0x0000000100114bc4

@end

