//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteDatabaseStore.h"

@interface ODRDatabaseStore : SQLiteDatabaseStore
{
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x00000001000980ac
+ (id)storeDescriptor;	// IMP=0x000000010009802c
+ (id)sharedStore;	// IMP=0x0000000100097f50
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000001000982e4

@end

