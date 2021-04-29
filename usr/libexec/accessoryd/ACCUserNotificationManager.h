//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface ACCUserNotificationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_userNotifications;	// 16 = 0x10
    NSMutableDictionary *_completionHandlers;	// 24 = 0x18
    NSRecursiveLock *_lock;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x00000001000b5984
- (void).cxx_destruct;	// IMP=0x00000001000b5a70
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSMutableSet *userNotifications; // @synthesize userNotifications=_userNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeUserNotification:(id)arg1;	// IMP=0x00000001000b5840
- (id)userNotificationWithUUID:(id)arg1;	// IMP=0x00000001000b5640
- (void)dismisssAllNotifications;	// IMP=0x00000001000b548c
- (void)dismissNotificationsWithGroupIdentifier:(id)arg1;	// IMP=0x00000001000b51bc
- (void)dismissNotificationWithIdentifier:(id)arg1;	// IMP=0x00000001000b4eec
- (void)dismissNotification:(id)arg1;	// IMP=0x00000001000b4dfc
- (void)presentNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b4788
- (id)init;	// IMP=0x00000001000b4684

@end
