//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AppletSubcredentialInvitation : SQLiteEntity
{
}

+ (id)databaseTable;	// IMP=0x0000000100280dc8
+ (id)_propertySetters;	// IMP=0x0000000100280ab8
+ (id)_dictionaryFromSharedCredentialInvitation:(id)arg1;	// IMP=0x00000001002805c0
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00000001002805a0
+ (_Bool)deleteInvitationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002804f4
+ (id)addInvitation:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002802b4
+ (id)invitationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100280224
+ (id)invitationsInDatabase:(id)arg1;	// IMP=0x000000010027fff4
- (id)invitation;	// IMP=0x0000000100280974

@end

