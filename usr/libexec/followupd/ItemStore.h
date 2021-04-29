//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FLSQLiteExecutor;

@interface ItemStore : NSObject
{
    FLSQLiteExecutor *_queryExecutor;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100008714
- (void).cxx_destruct;	// IMP=0x000000010000ca84
@property(retain, nonatomic) FLSQLiteExecutor *queryExecutor; // @synthesize queryExecutor=_queryExecutor;
- (void)_wipeDatabase;	// IMP=0x000000010000ca60
- (void)_closeDatabase;	// IMP=0x000000010000ca50
- (void)_openDatabase;	// IMP=0x000000010000ca3c
- (double)intervalFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x000000010000ca30
- (id)dateFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x000000010000c9e8
- (id)dataFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x000000010000c974
- (id)urlFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x000000010000c908
- (id)stringFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x000000010000c8c8
- (void)_unsafeSelectFollowUpActionsForItem:(id)arg1 orActionID:(long long)arg2 rowHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c488
- (id)_unsafeSelectNotificationForFollowUpItem:(id)arg1;	// IMP=0x000000010000be80
- (void)_unsafeSelectFollowUpNotificationsWithRowHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b970
- (void)_unsafeSelectFollowUpItemsWithUniqueIdentifiers:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000af94
- (id)safeSelectFollowUpItemsWithUniqueIdentifiers:(id)arg1;	// IMP=0x000000010000ad00
- (id)safeSelectFollowUpNotifications;	// IMP=0x000000010000ab4c
- (id)safeSelectFollowUpActions;	// IMP=0x000000010000a8fc
- (_Bool)_unsafe_deleteActionWithID:(long long)arg1;	// IMP=0x000000010000a7d0
- (_Bool)deleteNotificationForFollowUpItem:(id)arg1;	// IMP=0x000000010000a4ec
- (_Bool)updateNotificationForFollowUpItem:(id)arg1;	// IMP=0x000000010000a3c4
- (_Bool)deleteFollowUpItem:(id)arg1;	// IMP=0x000000010000a0cc
- (long long)_unsafe_insertNotificationForItem:(id)arg1;	// IMP=0x0000000100009798
- (long long)_unsafe_insertAction:(id)arg1 item:(id)arg2;	// IMP=0x00000001000093e0
- (long long)_unsafe_insertFollowUpItem:(id)arg1;	// IMP=0x0000000100008c4c
- (_Bool)insertFollowUpItem:(id)arg1;	// IMP=0x0000000100008818
- (id)allFollowUpItems;	// IMP=0x0000000100008808

@end

