//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDHelperAgent, MSDSignedManifest, MSDTargetDevice;

@interface MSDBackupUpdater : NSObject
{
    MSDSignedManifest *_manifest;	// 8 = 0x8
    MSDTargetDevice *_device;	// 16 = 0x10
    MSDHelperAgent *_helperAgent;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100045688
- (void).cxx_destruct;	// IMP=0x00000001000466cc
@property(retain, nonatomic) MSDHelperAgent *helperAgent; // @synthesize helperAgent=_helperAgent;
@property(retain, nonatomic) MSDTargetDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) MSDSignedManifest *manifest; // @synthesize manifest=_manifest;
- (_Bool)installProvisioningProfiles;	// IMP=0x0000000100046200
- (id)namesForBackupsOfRange:(struct _NSRange)arg1;	// IMP=0x0000000100046064
- (_Bool)updateBackup:(struct _NSRange)arg1 error:(id *)arg2;	// IMP=0x00000001000457bc
- (id)init;	// IMP=0x00000001000456f4

@end
