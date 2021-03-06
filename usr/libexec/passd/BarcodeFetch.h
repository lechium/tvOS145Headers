//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface BarcodeFetch : SQLiteEntity
{
}

+ (id)_barcodeFetchesForQuery:(id)arg1;	// IMP=0x00000001001fb55c
+ (id)_predicateForNextBackgroundFetchDatesBeforeDate:(id)arg1;	// IMP=0x00000001001fb4f4
+ (id)_predicateForFutureNextBackgroundFetchDates;	// IMP=0x00000001001fb460
+ (id)_predicateForNotNullNextBackgroundFetchDates;	// IMP=0x00000001001fb444
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00000001001fb3d0
+ (_Bool)removeBarcodeFetchForPassPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001fb370
+ (id)passPIDsWithNextbackgroundFetchDateBeforeDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001fb114
+ (id)nextBackgroundFetchDateInDatabase:(id)arg1;	// IMP=0x00000001001fad40
+ (_Bool)updateNextBackgroundFetchDate:(id)arg1 withBackgroundFetchRetryLevel:(long long)arg2 forPassPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00000001001fac30
+ (long long)backgroundFetchRetryLevelForPassPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001faba8
+ (id)createIfNotExistInDatabase:(id)arg1 withPassPID:(long long)arg2;	// IMP=0x00000001001faab4
+ (id)anyInDatabase:(id)arg1 withPassPID:(long long)arg2;	// IMP=0x00000001001faa24
+ (id)databaseTable;	// IMP=0x00000001001faa18
- (id)nextBackgroundFetchDate;	// IMP=0x00000001001fb6bc

@end

