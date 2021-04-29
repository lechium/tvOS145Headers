//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ANNotificationStore : NSObject
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_storeCoordinator;	// 16 = 0x10
}

+ (id)sharedStore;	// IMP=0x0000000100004400
- (void).cxx_destruct;	// IMP=0x000000010000671c
- (id)_copyPersistentStoreFilePath;	// IMP=0x0000000100006658
- (id)_managedObjectModel;	// IMP=0x000000010000653c
- (void)_createManagedObjectContext;	// IMP=0x0000000100006298
- (_Bool)_unsafe_commitChangesInManagedObjectContext;	// IMP=0x00000001000061ec
- (_Bool)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0000000100005d74
- (_Bool)removeAllNotificationsForAccountTypeID:(id)arg1;	// IMP=0x00000001000059a0
- (_Bool)limitPendingNotificationsForAccountTypeID:(id)arg1 toMaximumCount:(unsigned long long)arg2;	// IMP=0x0000000100005294
- (_Bool)saveNotification:(id)arg1;	// IMP=0x0000000100004db8
- (id)_notificationsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x0000000100004a4c
- (id)_notificationsMatchingPredicate:(id)arg1;	// IMP=0x0000000100004a3c
- (id)typeIdentifiersOfAccountsWithPendingNotifications;	// IMP=0x0000000100004664
- (id)pendingNotificationsWithEventID:(id)arg1;	// IMP=0x00000001000045e8
- (id)notificationWithIdentifier:(id)arg1;	// IMP=0x0000000100004540
- (id)pendingNotificationsForAccountsWithTypeID:(id)arg1;	// IMP=0x00000001000044c4
- (id)init;	// IMP=0x000000010000446c

@end
