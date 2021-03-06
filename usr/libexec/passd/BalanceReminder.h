//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface BalanceReminder : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x0000000100091214
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000100090fcc
+ (id)_predicateForBalanceIdentifier:(id)arg1;	// IMP=0x0000000100090e44
+ (id)_predicateForBalanceReminder:(id)arg1 passPID:(long long)arg2;	// IMP=0x0000000100090ce4
+ (id)_predicateForBalanceReminder:(id)arg1 passIdentifier:(id)arg2;	// IMP=0x0000000100090b7c
+ (id)databaseTable;	// IMP=0x0000000100090b70
+ (id)insertOrUpdateBalanceReminder:(id)arg1 forBalanceIdentifier:(id)arg2 pass:(id)arg3 database:(id)arg4;	// IMP=0x0000000100090630
+ (void)deleteAnyInDatabase:(id)arg1 forPassIdentifier:(id)arg2;	// IMP=0x0000000100090590
+ (id)balanceReminderInDatabase:(id)arg1 forQuery:(id)arg2;	// IMP=0x00000001000902b4
+ (id)balanceReminderInDatabase:(id)arg1 forBalanceIdentifier:(id)arg2 passIdentifier:(id)arg3;	// IMP=0x00000001000901e8
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100090114
- (void)updateWithBalanceReminder:(id)arg1;	// IMP=0x0000000100091130
- (id)balanceReminder;	// IMP=0x0000000100090fec
- (id)initWithBalanceReminder:(id)arg1 forBalanceIdentifier:(id)arg2 pass:(id)arg3 database:(id)arg4;	// IMP=0x000000010009091c

@end

