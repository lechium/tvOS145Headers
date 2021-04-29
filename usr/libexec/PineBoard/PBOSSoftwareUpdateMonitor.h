//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PBOSSoftwareUpdateMonitor : NSObject
{
    _Bool _isInternalBuild;	// 8 = 0x8
    _Bool _isRestore;	// 9 = 0x9
    _Bool _triggeredManually;	// 10 = 0xa
    NSURL *_baseURL;	// 16 = 0x10
    NSString *_fromOSBuild;	// 24 = 0x18
    NSString *_fromHDMI;	// 32 = 0x20
    NSString *_toOSBuild;	// 40 = 0x28
    unsigned long long _checkResult;	// 48 = 0x30
    NSString *_uuid;	// 56 = 0x38
}

+ (id)_instance;	// IMP=0x00000001001630b4
+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100163048
+ (id)lastRestoreFilePath;	// IMP=0x000000010016283c
+ (void)noteStage:(id)arg1;	// IMP=0x00000001001627b8
+ (void)prepareForUpdateToOSBuild:(id)arg1 forRestore:(_Bool)arg2 triggeredManually:(_Bool)arg3;	// IMP=0x0000000100162700
+ (void)checkedForUpdateTriggeredManually:(_Bool)arg1 forRestore:(_Bool)arg2 result:(unsigned long long)arg3;	// IMP=0x0000000100162680
- (void).cxx_destruct;	// IMP=0x000000010016506c
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property _Bool triggeredManually; // @synthesize triggeredManually=_triggeredManually;
@property _Bool isRestore; // @synthesize isRestore=_isRestore;
@property _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(nonatomic) unsigned long long checkResult; // @synthesize checkResult=_checkResult;
@property(copy, nonatomic) NSString *toOSBuild; // @synthesize toOSBuild=_toOSBuild;
@property(copy, nonatomic) NSString *fromHDMI; // @synthesize fromHDMI=_fromHDMI;
@property(copy, nonatomic) NSString *fromOSBuild; // @synthesize fromOSBuild=_fromOSBuild;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (_Bool)_isFinalStage:(id)arg1;	// IMP=0x0000000100164c8c
- (_Bool)_isFailedStage:(id)arg1;	// IMP=0x0000000100164b24
- (_Bool)_isCancelStage:(id)arg1;	// IMP=0x0000000100164a70
- (void)_processAppRestart;	// IMP=0x0000000100164688
- (void)_processUpdateAttemptCompleted;	// IMP=0x00000001001644d0
- (void)_issueRequestForStage:(id)arg1 withData:(id)arg2 retryDelay:(long long)arg3;	// IMP=0x0000000100163dfc
- (void)_noteStage:(id)arg1;	// IMP=0x0000000100163790
- (void)_processNewUpdateAttemptToOSBuild:(id)arg1 forRestore:(_Bool)arg2 triggeredManually:(_Bool)arg3;	// IMP=0x0000000100163498
- (void)_checkForUpdateTriggeredManually:(_Bool)arg1 forRestore:(_Bool)arg2 result:(unsigned long long)arg3;	// IMP=0x000000010016333c
- (id)_updateConfigurationID;	// IMP=0x0000000100163260
- (void)_setNewUUID;	// IMP=0x0000000100163188
- (id)init;	// IMP=0x0000000100162978

@end
