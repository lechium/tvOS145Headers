//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDAppDataUpdater, MSDAppUpdater, MSDBackupUpdater, MSDHelperAgent, MSDTargetDevice, NSMutableArray;

@interface MSDDemoUpdateController : NSObject
{
    _Bool _busy;	// 8 = 0x8
    _Bool _migrationDone;	// 9 = 0x9
    NSMutableArray *_order;	// 16 = 0x10
    MSDTargetDevice *_device;	// 24 = 0x18
    MSDBackupUpdater *_backupUpdater;	// 32 = 0x20
    MSDAppUpdater *_appUpdater;	// 40 = 0x28
    MSDHelperAgent *_helperAgent;	// 48 = 0x30
    MSDAppDataUpdater *_appDataUpdater;	// 56 = 0x38
    struct _NSRange _contentBeingInstalled;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x00000001000385ec
- (void).cxx_destruct;	// IMP=0x000000010003c598
@property(retain, nonatomic) MSDAppDataUpdater *appDataUpdater; // @synthesize appDataUpdater=_appDataUpdater;
@property(retain, nonatomic) MSDHelperAgent *helperAgent; // @synthesize helperAgent=_helperAgent;
@property(retain, nonatomic) MSDAppUpdater *appUpdater; // @synthesize appUpdater=_appUpdater;
@property(retain, nonatomic) MSDBackupUpdater *backupUpdater; // @synthesize backupUpdater=_backupUpdater;
@property(retain, nonatomic) MSDTargetDevice *device; // @synthesize device=_device;
@property _Bool migrationDone; // @synthesize migrationDone=_migrationDone;
@property(retain, nonatomic) NSMutableArray *order; // @synthesize order=_order;
@property struct _NSRange contentBeingInstalled; // @synthesize contentBeingInstalled=_contentBeingInstalled;
@property _Bool busy; // @synthesize busy=_busy;
- (void)setAutomatedDeviceGroupStoreID;	// IMP=0x000000010003c108
- (void)setMacSpecificSettings;	// IMP=0x000000010003c104
- (void)setTVSpecificSettings;	// IMP=0x000000010003bfd4
- (_Bool)migrateDataWithBlockingUI:(int)arg1;	// IMP=0x000000010003bb68
- (_Bool)PLHasCompletedMomentAnalysis;	// IMP=0x000000010003babc
- (_Bool)PLHasCompletedRestorePostProcessing;	// IMP=0x000000010003ba10
- (_Bool)removeLowerPriorityAppsTillFreeSpace:(long long)arg1;	// IMP=0x000000010003b52c
- (void)loadInstallationOrder:(id)arg1;	// IMP=0x000000010003b15c
- (void)checkWithTimeKeeper:(id)arg1;	// IMP=0x000000010003af60
- (_Bool)continueToUpdateDemoContentWithServer:(id)arg1;	// IMP=0x000000010003ad38
- (_Bool)updateDemoContentWithServer:(id)arg1;	// IMP=0x0000000100039034
- (_Bool)enrollWithServer:(id)arg1 name:(id)arg2 pairingCredential:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100038978
- (_Bool)enrolledWith:(id)arg1;	// IMP=0x000000010003886c
- (void)getDemoUpdateInProgress:(_Bool *)arg1 operationAllowed:(_Bool *)arg2;	// IMP=0x00000001000387c8
- (id)init;	// IMP=0x0000000100038658

@end

