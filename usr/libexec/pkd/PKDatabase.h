//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class LSApplicationWorkspace, NSMutableDictionary, NSString, PKDAnnotationStore, PKDPersonaCache;
@protocol OS_dispatch_queue, PKDatabaseDelegate;

@interface PKDatabase : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    unsigned int _cacheLimit;	// 8 = 0x8
    id <PKDatabaseDelegate> _delegate;	// 16 = 0x10
    LSApplicationWorkspace *_workspace;	// 24 = 0x18
    PKDAnnotationStore *_annotations;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *__sync;	// 40 = 0x28
    NSMutableDictionary *_cache;	// 48 = 0x30
    id _regionObserver;	// 56 = 0x38
    PKDPersonaCache *_personaCache;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000157b4
@property(retain, nonatomic) PKDPersonaCache *personaCache; // @synthesize personaCache=_personaCache;
@property(retain, nonatomic) id regionObserver; // @synthesize regionObserver=_regionObserver;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_sync; // @synthesize _sync=__sync;
@property(retain, nonatomic) PKDAnnotationStore *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) LSApplicationWorkspace *workspace; // @synthesize workspace=_workspace;
@property unsigned int cacheLimit; // @synthesize cacheLimit=_cacheLimit;
@property __weak id <PKDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pluginsWillUninstall:(id)arg1;	// IMP=0x00000001000151ec
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x0000000100014f04
- (void)autoElect:(id)arg1;	// IMP=0x0000000100014d8c
- (void)notifyAnnotationChange;	// IMP=0x0000000100014d10
- (id)setAnnotation:(id)arg1 forPlugIn:(id)arg2;	// IMP=0x0000000100014bdc
- (id)annotationForPlugIn:(id)arg1;	// IMP=0x0000000100014a48
- (id)removePlugIn:(id)arg1;	// IMP=0x00000001000148c0
- (id)addPlugIn:(id)arg1;	// IMP=0x0000000100014738
- (id)plugInsWithinApplication:(id)arg1;	// IMP=0x000000010001449c
- (id)findPlugInAtPath:(id)arg1;	// IMP=0x00000001000143ac
- (id)findPlugIn:(id)arg1;	// IMP=0x0000000100013ffc
- (id)findPlugIns:(id)arg1 discoveryInstanceUUID:(id)arg2;	// IMP=0x000000010001306c
- (void)purgeCachesToLimit:(long long)arg1;	// IMP=0x0000000100012ee0
- (id)createPlugInForProxy:(id)arg1 knowledgeUUID:(id)arg2 discoveryInstanceUUID:(id)arg3 extensionPointCache:(id)arg4;	// IMP=0x0000000100012c98
- (id)plugInForProxy:(id)arg1 knowledgeUUID:(id)arg2 discoveryInstanceUUID:(id)arg3 extensionPointCache:(id)arg4;	// IMP=0x0000000100012848
- (id)initWithDatabase:(const char *)arg1;	// IMP=0x00000001000124d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

