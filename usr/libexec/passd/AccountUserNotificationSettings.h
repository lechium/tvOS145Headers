//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AccountUserNotificationSettings : SQLiteEntity
{
}

+ (id)_propertySettersForAccountUserNotificationSettings;	// IMP=0x00000001001fd848
+ (id)_propertyValuesForAccountUserNotificationSettings:(id)arg1;	// IMP=0x00000001001fd728
+ (id)_predicateForAccountUserPID:(id)arg1;	// IMP=0x00000001001fd708
+ (id)anyInDatabase:(id)arg1 forAccountUserPID:(id)arg2;	// IMP=0x00000001001fd4fc
+ (id)insertOrUpdateAccountUserNotificationSettings:(id)arg1 forAccountUserPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001fd2c0
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001fd288
+ (id)databaseTable;	// IMP=0x00000001001fd27c
- (id)accountUserNotificationSettings;	// IMP=0x00000001001fd58c
- (void)updateWithAccountUserNotificationSettings:(id)arg1;	// IMP=0x00000001001fd488
- (id)initWithAccountUserNotificationSettings:(id)arg1 accountUserPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001fd394

@end

