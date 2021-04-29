//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface UserNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    NSMutableArray *_userNotifications;	// 24 = 0x18
}

+ (id)defaultCenter;	// IMP=0x00000001000eaae8
- (void).cxx_destruct;	// IMP=0x00000001000ebc10
- (void)_updateUserNotification:(id)arg1 withDictionary:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000001000ebb18
- (id)_showUserNotification:(id)arg1 withOptions:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000eb934
- (void)_showPreparedNotification:(id)arg1;	// IMP=0x00000001000eb6ec
- (void)_finishUserNotification:(struct __CFUserNotification *)arg1 withResponseFlags:(unsigned long long)arg2;	// IMP=0x00000001000eb42c
- (void)updateUserNotification:(id)arg1 withDialog:(id)arg2;	// IMP=0x00000001000eb380
- (void)showPreparedNotification:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000eb284
- (id)showDialog:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000eb1c8
- (unsigned long long)showDialogAndWait:(id)arg1;	// IMP=0x00000001000eb0a4
- (id)showDialog:(id)arg1;	// IMP=0x00000001000eb094
- (id)prepareUserNotificationWithDialog:(id)arg1;	// IMP=0x00000001000eb03c
- (void)cancelUserNotifications:(id)arg1;	// IMP=0x00000001000eac08
- (void)cancelUserNotification:(id)arg1;	// IMP=0x00000001000eab88
- (id)init;	// IMP=0x00000001000eaa64

@end
