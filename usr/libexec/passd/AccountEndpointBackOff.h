//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AccountEndpointBackOff : SQLiteEntity
{
}

+ (id)_predicateForAccountType:(unsigned long long)arg1 accountPID:(long long)arg2;	// IMP=0x0000000100264ff8
+ (id)_predicateForAccountType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2 accountPID:(long long)arg3;	// IMP=0x0000000100264e08
+ (void)deleteEntriesForAccountType:(unsigned long long)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100264c60
+ (id)anyInDatabase:(id)arg1 forAccountType:(unsigned long long)arg2 accountPID:(long long)arg3;	// IMP=0x0000000100264bc0
+ (id)anyInDatabase:(id)arg1 forAccountType:(unsigned long long)arg2 endpointType:(unsigned long long)arg3 accountPID:(long long)arg4;	// IMP=0x0000000100264b18
+ (id)insertIfNotExistsForAccountType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2 accountPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00000001002647b0
+ (id)databaseTable;	// IMP=0x00000001002647a4
- (unsigned long long)endpointType;	// IMP=0x000000010026554c
- (unsigned long long)accountType;	// IMP=0x00000001002654f8
- (id)nextPossibleFetchDate;	// IMP=0x00000001002654a4
- (void)increaseBackoffLevel;	// IMP=0x0000000100265180
- (id)initWithForAccountType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2 accountPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00000001002649a8

@end
