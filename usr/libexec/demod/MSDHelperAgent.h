//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;
@protocol OS_xpc_object;

@interface MSDHelperAgent : NSObject
{
    _Bool _result;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpc_conn;	// 16 = 0x10
    NSCondition *_doneCondition;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010001a704
- (void).cxx_destruct;	// IMP=0x000000010001e37c
@property(nonatomic) _Bool result; // @synthesize result=_result;
@property(retain, nonatomic) NSCondition *doneCondition; // @synthesize doneCondition=_doneCondition;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpc_conn; // @synthesize xpc_conn=_xpc_conn;
- (_Bool)restartBluetooth;	// IMP=0x000000010001e148
- (_Bool)preserveBluetoothFileToShelter:(id)arg1;	// IMP=0x000000010001dec4
- (_Bool)quitHelper;	// IMP=0x000000010001dd54
- (_Bool)reboot;	// IMP=0x000000010001db58
- (_Bool)switchToBackupFolder;	// IMP=0x000000010001d95c
- (_Bool)moveFilesFromStagingPath:(id)arg1 toCache:(id)arg2;	// IMP=0x000000010001d680
- (_Bool)moveStagingToFinal:(id)arg1 finalPath:(id)arg2;	// IMP=0x000000010001d3a4
- (_Bool)disableLaunchdServicesForWatch;	// IMP=0x000000010001d1a8
- (_Bool)manageDemoVolume:(id)arg1;	// IMP=0x000000010001cf1c
- (_Bool)manageDataVolume:(id)arg1;	// IMP=0x000000010001cc90
- (_Bool)writeNvram:(id)arg1 withValue:(id)arg2;	// IMP=0x000000010001c9c8
- (_Bool)deleteNvram:(id)arg1;	// IMP=0x000000010001c780
- (_Bool)restoreAppDataAttributesUnder:(id)arg1 containerType:(id)arg2 identifier:(id)arg3;	// IMP=0x000000010001c474
- (_Bool)restoreBackupAttributesUnder:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000010001c1cc
- (_Bool)cloneFile:(id)arg1 to:(id)arg2 expectingHash:(id)arg3 expectingTarget:(id)arg4;	// IMP=0x000000010001be0c
- (_Bool)touchFile:(id)arg1 fileAttributes:(id)arg2;	// IMP=0x000000010001ba6c
- (id)createDeviceManifest:(id)arg1 forBackup:(_Bool)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000010001b6a0
- (_Bool)removeWorkDirectory:(id)arg1;	// IMP=0x000000010001b458
- (_Bool)prepareWorkDirectory:(id)arg1 writableByNonRoot:(_Bool)arg2;	// IMP=0x000000010001b1c8
- (_Bool)clearStagedDeviceAfterUpdateProcess;	// IMP=0x000000010001afcc
- (_Bool)stageDeviceForUpdateProcess;	// IMP=0x000000010001add0
- (_Bool)migratePreferencesFile;	// IMP=0x000000010001abd4
- (void)handleMessage:(id)arg1;	// IMP=0x000000010001a9dc
- (id)init;	// IMP=0x000000010001a770

@end
