//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASDataStore-Protocol.h"

@class NSString, _DASCoreDataStorage;

@interface _DASCoreDataStore : NSObject <_DASDataStore>
{
    _DASCoreDataStorage *_database;	// 8 = 0x8
}

+ (id)storageWithDirectory:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x00000001000142ac
- (void).cxx_destruct;	// IMP=0x00000001000172bc
@property(retain, nonatomic) _DASCoreDataStorage *database; // @synthesize database=_database;
- (void)deleteActivitiesIfRequired;	// IMP=0x0000000100017118
- (void)deleteOldActivities;	// IMP=0x0000000100016f88
- (void)deleteActivity:(id)arg1;	// IMP=0x0000000100016dcc
- (_Bool)deleteStorageWithObliterationOption:(_Bool)arg1;	// IMP=0x0000000100016d5c
- (void)updateActivityCanceled:(id)arg1;	// IMP=0x0000000100016be8
- (void)updateActivityCompleted:(id)arg1;	// IMP=0x0000000100016a74
- (void)updateActivityStarted:(id)arg1;	// IMP=0x0000000100016900
- (void)loadAllGroups:(id)arg1;	// IMP=0x000000010001665c
- (void)loadStartedTasks:(id)arg1;	// IMP=0x0000000100016380
- (void)loadPendingLaunchTasks:(id)arg1;	// IMP=0x0000000100015fa0
- (void)saveActivity:(id)arg1 group:(id)arg2 triggers:(id)arg3 hasStarted:(_Bool)arg4;	// IMP=0x0000000100015d48
- (void)loadAllTasks:(id)arg1 startedTasks:(id)arg2;	// IMP=0x0000000100015a40
- (void)saveGroups:(id)arg1 activitiesArray:(id)arg2;	// IMP=0x0000000100015808
- (void)saveGroup:(id)arg1 activity:(id)arg2;	// IMP=0x0000000100015604
- (void)saveGroup:(id)arg1;	// IMP=0x00000001000154a0
- (void)createMOInMOC:(id)arg1 group:(id)arg2 activities:(id)arg3;	// IMP=0x000000010001527c
- (void)saveActivities:(id)arg1 groups:(id)arg2 triggersArray:(id)arg3;	// IMP=0x0000000100014e2c
- (void)saveActivity:(id)arg1 triggers:(id)arg2;	// IMP=0x0000000100014c3c
- (void)saveActivities:(id)arg1;	// IMP=0x00000001000149dc
- (void)saveActivity:(id)arg1;	// IMP=0x0000000100014878
- (void)createMOInMOC:(id)arg1 activity:(id)arg2 group:(id)arg3 triggers:(id)arg4;	// IMP=0x0000000100014628
- (void)mocSaveAndReset:(id)arg1;	// IMP=0x00000001000144cc
- (id)initWithDirectory:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x0000000100014324
- (id)init;	// IMP=0x000000010001430c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

