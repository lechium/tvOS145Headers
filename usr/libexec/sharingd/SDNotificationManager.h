//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDNotificationManager : NSObject <UNUserNotificationCenterDelegate>
{
    _Bool _activated;	// 8 = 0x8
    NSMutableDictionary *_autoFillRequests;	// 16 = 0x10
    UNUserNotificationCenter *_homePodNotifCenter;	// 24 = 0x18
    UNUserNotificationCenter *_homePodMiniNotificationCenter;	// 32 = 0x20
    _Bool _homePodNotifGranted;	// 40 = 0x28
    NSMutableDictionary *_homePodRequests;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
    NSMutableDictionary *_tvKeyboardRequests;	// 64 = 0x40
    UNUserNotificationCenter *_tvNotifCenter;	// 72 = 0x48
    _Bool _tvNotifGranted;	// 80 = 0x50
    NSMutableDictionary *_watchKeyboardRequests;	// 88 = 0x58
    UNUserNotificationCenter *_watchNotifCenter;	// 96 = 0x60
    _Bool _watchNotifGranted;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 112 = 0x70
}

+ (id)sharedManager;	// IMP=0x00000001001335e8
- (void).cxx_destruct;	// IMP=0x000000010013ba8c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testWatchKeyboardAutoFill;	// IMP=0x000000010013b988
- (void)testWatchKeyboard;	// IMP=0x000000010013b8ac
- (void)testKeyboardUpdate;	// IMP=0x000000010013b7d8
- (void)testKeyboardRemove;	// IMP=0x000000010013b6fc
- (void)testKeyboardPostAutoFill;	// IMP=0x000000010013b608
- (void)testKeyboardPost;	// IMP=0x000000010013b528
- (void)testHandoffPost;	// IMP=0x000000010013b358
- (void)testAutoFillRemove;	// IMP=0x000000010013b27c
- (void)testAutofillPost;	// IMP=0x000000010013b1a0
- (void)testPostBasic;	// IMP=0x000000010013b054
- (void)testPost:(id)arg1;	// IMP=0x000000010013ae58
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010013a8e0
- (void)_homePodHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010013a3a4
- (void)_homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x0000000100139edc
- (void)homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x0000000100139e08
- (void)_homePodHandoffRemoveAll;	// IMP=0x0000000100139d54
- (void)homePodHandoffRemoveAll;	// IMP=0x0000000100139cec
- (void)_homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x0000000100139a1c
- (void)homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x0000000100139970
- (void)_homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x000000010013978c
- (void)homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x00000001001396b8
- (id)homePodHandoffContentForDevice:(id)arg1 info:(id)arg2;	// IMP=0x0000000100139168
- (void)_watchHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001390b8
- (void)_watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x0000000100138a1c
- (void)watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x0000000100138948
- (void)_watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x00000001001384d0
- (void)watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x00000001001383fc
- (void)_watchKeyboardRemoveAll;	// IMP=0x000000010013836c
- (void)watchKeyboardRemoveAll;	// IMP=0x0000000100138304
- (void)_watchKeyboardRemove:(id)arg1;	// IMP=0x0000000100138170
- (void)watchKeyboardRemove:(id)arg1;	// IMP=0x00000001001380d8
- (void)_watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x0000000100137f44
- (void)watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x0000000100137eac
- (id)watchKeyboardContentForDevice:(id)arg1;	// IMP=0x0000000100137bc8
- (void)_tvAutoFillRemoveAll;	// IMP=0x0000000100137b24
- (void)tvAutoFillRemoveAll;	// IMP=0x0000000100137abc
- (void)_tvAutoFillRemove:(id)arg1;	// IMP=0x0000000100137928
- (void)tvAutoFillRemove:(id)arg1;	// IMP=0x0000000100137890
- (void)_tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x0000000100137520
- (void)tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x0000000100137488
@property(readonly, copy, nonatomic) NSSet *activeTVAutoFillPrompts;
- (void)_tvKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x0000000100136d74
- (void)tvKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x0000000100136ca0
- (void)_tvKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0000000100136828
- (void)tvKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0000000100136754
- (void)_tvKeyboardRemoveAll;	// IMP=0x00000001001366c4
- (void)tvKeyboardRemoveAll;	// IMP=0x000000010013665c
- (void)_tvKeyboardRemove:(id)arg1;	// IMP=0x00000001001364c8
- (void)tvKeyboardRemove:(id)arg1;	// IMP=0x0000000100136430
- (void)_tvKeyboardPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x000000010013626c
- (void)tvKeyboardPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x00000001001361c0
- (id)tvKeyboardContentForDevice:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x0000000100135ebc
- (void)_tvHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100135854
- (id)attachmentFromURL:(id)arg1;	// IMP=0x000000010013563c
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3 isHomePodMini:(_Bool)arg4;	// IMP=0x0000000100134de0
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3;	// IMP=0x0000000100134dd0
- (void)_homePodEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100134600
- (void)_watchEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001341fc
- (void)_tvEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100133dec
- (void)_update;	// IMP=0x0000000100133d70
- (void)prefsChanged;	// IMP=0x0000000100133d64
- (void)_invalidate;	// IMP=0x0000000100133d04
- (void)invalidate;	// IMP=0x0000000100133c9c
- (void)_activate;	// IMP=0x0000000100133c00
- (void)activate;	// IMP=0x0000000100133b98
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000100133654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

