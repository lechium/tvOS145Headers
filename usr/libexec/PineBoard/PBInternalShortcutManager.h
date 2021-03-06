//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"

@class NSMutableDictionary, NSString, PBBulletinService;

@interface PBInternalShortcutManager : NSObject <PBInstanceDependable>
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    NSMutableDictionary *_handlers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000bc41c
+ (id)dependencyDescription;	// IMP=0x00000001000bc370
- (void).cxx_destruct;	// IMP=0x00000001000bca8c
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
- (void)executeShortcut;	// IMP=0x00000001000bc7b0
- (void)registerWithOption:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bc5f8
@property(readonly, nonatomic) long long currentOption;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

