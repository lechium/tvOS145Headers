//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface DiscoveryEngagementMessage : SQLiteEntity
{
    long long _messageOrder;	// 24 = 0x18
}

+ (id)_propertySettersForEngagementMessage;	// IMP=0x0000000100008f94
+ (id)_predicateForCheckingRelevantDate:(id)arg1;	// IMP=0x0000000100008ccc
+ (id)_predicateForActiveEngagementMessagesWithPassQualifier:(long long)arg1;	// IMP=0x0000000100008bc0
+ (id)_predicateForEngagementMessagesWithPassQualifier:(long long)arg1;	// IMP=0x0000000100008b14
+ (id)_predicateForEngagementMessageIdentifier:(id)arg1;	// IMP=0x0000000100008af4
+ (void)deleteAllEngagementMessagesInDatabase:(id)arg1;	// IMP=0x0000000100008a20
+ (void)deleteEngagementMessagesNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100008968
+ (void)deleteEngagementMessageWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000088c8
+ (id)updateEngagementMessage:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000087bc
+ (id)insertOrUpdateEngagementMessage:(id)arg1 messageOrder:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000081a8
+ (id)_engagementMessagesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100007f40
+ (id)engagementMessageWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100007ea0
+ (id)engagementMessagesForPassQualifier:(long long)arg1 active:(unsigned long long)arg2 relevantDate:(id)arg3 inDatabase:(id)arg4;	// IMP=0x0000000100007d0c
+ (id)databaseTable;	// IMP=0x0000000100007d00
@property(nonatomic) long long messageOrder; // @synthesize messageOrder=_messageOrder;
- (void)setMessageOrder;	// IMP=0x0000000100009c68
- (id)_dictWithPropertiesForEngagementMessage:(id)arg1;	// IMP=0x00000001000096b4
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100008ac0
- (void)updateWithEngagementMessage:(id)arg1;	// IMP=0x000000010000887c
- (id)engagementMessage;	// IMP=0x0000000100008338
- (id)initWithEngagementMessage:(id)arg1 messageOrder:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000082a4

@end

