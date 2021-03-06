//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MIDeveloperDiskImageTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_mapAccessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_lsRegisterQueue;	// 16 = 0x10
    NSMutableDictionary *_map;	// 24 = 0x18
}

+ (id)sharedTracker;	// IMP=0x000000010003ab4c
- (void).cxx_destruct;	// IMP=0x000000010003dd64
@property(readonly, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *lsRegisterQueue; // @synthesize lsRegisterQueue=_lsRegisterQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mapAccessQueue; // @synthesize mapAccessQueue=_mapAccessQueue;
- (void)imageMounted:(const char *)arg1;	// IMP=0x000000010003da38
- (void)checkDeveloperMount;	// IMP=0x000000010003d7a8
- (void)checkMountPoint:(id)arg1;	// IMP=0x000000010003d230
- (id)scanDirectory:(id)arg1;	// IMP=0x000000010003cb18
- (void)_onQueue_RegisterAppsWithLS:(id)arg1 unregister:(id)arg2 dir:(id)arg3 dirStatTime:(id)arg4;	// IMP=0x000000010003c300
- (_Bool)_onQueue_validateDebugImageStateMap;	// IMP=0x000000010003c05c
- (_Bool)_onQueue_validateMapForMountPoint:(id)arg1;	// IMP=0x000000010003bccc
- (void)_onQueue_writeMapToDisk;	// IMP=0x000000010003bbc0
- (void)recordLastLSDiskImageAppPathMap:(id)arg1;	// IMP=0x000000010003b6ec
- (void)recordLastLSDict:(id)arg1;	// IMP=0x000000010003b57c
- (void)recordLastLSDict:(id)arg1 forDir:(id)arg2;	// IMP=0x000000010003b0f8
- (id)_dirStatTime:(id)arg1;	// IMP=0x000000010003aff4
- (id)_dirMapURL;	// IMP=0x000000010003af64
- (void)_onQueue_loadAndValidateOnDiskStateInMemory;	// IMP=0x000000010003adc4
- (id)init;	// IMP=0x000000010003abec

@end

