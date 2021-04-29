//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AccountPendingFamilyMember : SQLiteEntity
{
}

+ (id)_propertySettersForAccountPendingFamilyMember;	// IMP=0x000000010008908c
+ (id)_accountPendingFamilyMembersWithQuery:(id)arg1;	// IMP=0x0000000100088eac
+ (id)_propertyValuesAccountPendingFamilyMember:(id)arg1;	// IMP=0x0000000100088d54
+ (id)_predicateForDisplayedNotification:(_Bool)arg1;	// IMP=0x0000000100088ce0
+ (id)_predicateForAccountPID:(id)arg1;	// IMP=0x0000000100088cc0
+ (id)_predicateForDisplayedNotification:(_Bool)arg1 accountPID:(id)arg2;	// IMP=0x0000000100088bac
+ (id)_predicateForAltDSID:(id)arg1 accountPID:(id)arg2;	// IMP=0x0000000100088a70
+ (id)_predicateForInviteEmail:(id)arg1 accountPID:(id)arg2;	// IMP=0x0000000100088934
+ (void)deleteAccountPendingFamilyMembersWithAccountIdentifier:(id)arg1 altDSIDs:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010008863c
+ (void)deleteAccountPendingFamilyMember:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010008841c
+ (_Bool)deleteAccountPendingFamilyMembersForAccountPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100088370
+ (id)accountPendingFamilyMembersForAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100088238
+ (id)accountPendingFamilyMembersWithDisplayedNotification:(_Bool)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100088180
+ (id)anyInDatabase:(id)arg1 inviteEmail:(id)arg2 forAccountPID:(id)arg3;	// IMP=0x00000001000880e0
+ (void)insertOrUpdateAccountPendingFamilyMembers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100087bf0
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100087bc0
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100087b88
+ (id)databaseTable;	// IMP=0x0000000100087b7c
- (void)updateWithAccountPendingFamilyMember:(id)arg1;	// IMP=0x000000010008806c
- (id)initWithPendingMember:(id)arg1 accountPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100087efc

@end
