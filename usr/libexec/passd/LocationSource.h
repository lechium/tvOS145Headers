//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface LocationSource : SQLiteEntity
{
}

+ (id)urlPredicate:(id)arg1;	// IMP=0x000000010026bbb8
+ (id)locationSourcePIDPredicate:(id)arg1;	// IMP=0x000000010026bb98
+ (id)anyInDatabase:(id)arg1 withURL:(id)arg2;	// IMP=0x000000010026bafc
+ (id)anyInDatabase:(id)arg1 withLocationSourcePID:(id)arg2;	// IMP=0x000000010026ba6c
+ (id)insertLocationSourceWithURL:(id)arg1 forPass:(id)arg2 type:(int)arg3 inDatabase:(id)arg4;	// IMP=0x000000010026b9a4
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x000000010026b81c
+ (id)databaseTable;	// IMP=0x000000010026b810
- (_Bool)deleteFromDatabase;	// IMP=0x000000010026bc28
- (id)initWithLocationURL:(id)arg1 type:(int)arg2 inDatabase:(id)arg3;	// IMP=0x000000010026b854

@end

