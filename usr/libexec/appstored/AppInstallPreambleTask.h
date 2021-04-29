//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class AppInstall, AppInstallInfo, AppInstallPreambleResponse, AppPackage;

@interface AppInstallPreambleTask : Task
{
    long long _automaticType;	// 8 = 0x8
    AppInstall *_install;	// 16 = 0x10
    AppInstallInfo *_installInfo;	// 24 = 0x18
    AppPackage *_package;	// 32 = 0x20
    AppInstallPreambleResponse *_response;	// 40 = 0x28
    long long _restoreType;	// 48 = 0x30
    long long _sourceType;	// 56 = 0x38
    long long _updateType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010021899c
- (_Bool)_shouldCancelInstallationWithError:(id *)arg1;	// IMP=0x0000000100218908
- (id)_shouldCancelAutomaticInstallation;	// IMP=0x00000001002186f8
- (id)_shouldCancelAsDuplicate;	// IMP=0x00000001002182e4
- (id)_shouldCancel32BitApp;	// IMP=0x000000010021818c
- (void)main;	// IMP=0x0000000100217fac
- (id)runPreambleForIPAWithResponse;	// IMP=0x0000000100217618
- (id)runPreambleForPKGWithResponse;	// IMP=0x0000000100217578
- (void)_restartProgress;	// IMP=0x000000010021738c
@property(readonly) AppInstallPreambleResponse *preambleResponse;
@property(readonly) long long packageID;
@property(readonly) long long installID;
- (id)_initWithInstall:(id)arg1 package:(id)arg2;	// IMP=0x00000001002171d8
- (id)initWithInstall:(id)arg1 session:(id)arg2;	// IMP=0x0000000100216eb8

@end
