//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSDMultiUserController;
@protocol AMSDCloudDataDatabase;

@interface AMSDRefreshMultiUserDatabaseTask : AMSTask
{
    AMSDMultiUserController *_controller;	// 8 = 0x8
    id <AMSDCloudDataDatabase> _database;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002cf1c
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> database; // @synthesize database=_database;
@property(readonly, nonatomic) AMSDMultiUserController *controller; // @synthesize controller=_controller;
- (_Bool)_reconcileiTunesAccountForChangedRecord:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010002c71c
- (id)_handleExpiredChangeTokensInChangedRecordsResult:(id)arg1;	// IMP=0x000000010002bf00
- (void)_handleDeletedRecordZones:(id)arg1 withErrors:(id)arg2;	// IMP=0x000000010002b890
- (void)_handleChangedRecordZones:(id)arg1 withErrors:(id)arg2;	// IMP=0x000000010002ae40
- (_Bool)_handleAccountChangeInChangedRecord:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010002a8f8
- (id)performTask;	// IMP=0x000000010002a354
- (id)initWithController:(id)arg1 database:(id)arg2;	// IMP=0x000000010002a2a0

@end
