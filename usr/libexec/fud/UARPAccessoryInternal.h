//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSString, UARPAccessoryID, UARPAssetID;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface UARPAccessoryInternal : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_analyticsUpdateStates;	// 8 = 0x8
    NSObject<OS_os_log> *_analyticsLog;	// 16 = 0x10
    NSObject<OS_os_log> *_assetManagerLog;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    UARPAccessoryID *_accessoryID;	// 40 = 0x28
    UARPAssetID *_assetID;	// 48 = 0x30
    NSString *_dropboxFirmwarePath;	// 56 = 0x38
    unsigned long long _remoteCheckStatus;	// 64 = 0x40
    NSString *_dropboxReleaseNotesPath;	// 72 = 0x48
    id _asset;	// 80 = 0x50
    id _query;	// 88 = 0x58
    id _record;	// 96 = 0x60
}

+ (id)encodedClasses;	// IMP=0x00000001000335b4
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000335ac
@property(retain) id record; // @synthesize record=_record;
@property(retain) id query; // @synthesize query=_query;
@property(retain) id asset; // @synthesize asset=_asset;
@property(copy) NSString *dropboxReleaseNotesPath; // @synthesize dropboxReleaseNotesPath=_dropboxReleaseNotesPath;
@property unsigned long long remoteCheckStatus; // @synthesize remoteCheckStatus=_remoteCheckStatus;
@property(copy) NSString *dropboxFirmwarePath; // @synthesize dropboxFirmwarePath=_dropboxFirmwarePath;
@property(retain) UARPAssetID *assetID; // @synthesize assetID=_assetID;
@property(retain) UARPAccessoryID *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dumpWithTabDepth:(unsigned long long)arg1 dumpString:(id)arg2;	// IMP=0x0000000100035008
- (const char *)remoteCheckStatusString;	// IMP=0x0000000100034fe0
- (void)checkDropbox;	// IMP=0x0000000100034874
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100034654
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100034564
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100034510
- (void)removeUpdateState:(id)arg1;	// IMP=0x0000000100034458
- (id)createUpdateFirmwareEvent;	// IMP=0x00000001000342fc
- (void)sendUpdateFirmwareEventForState:(id)arg1;	// IMP=0x0000000100034214
- (id)analyticsUpdateStateForAssetID:(id)arg1;	// IMP=0x000000010003403c
- (void)analyticsSendUpdateFirmwareEventForAssetID:(id)arg1 frameworkParams:(id)arg2;	// IMP=0x0000000100033cf8
- (void)analyticsSetDownloadCompleteForAssetID:(id)arg1 status:(long long)arg2;	// IMP=0x0000000100033ba0
- (void)analyticsSetDownloadConsentReceivedForAssetID:(id)arg1 userIntent:(_Bool)arg2;	// IMP=0x0000000100033a70
- (void)analyticsSetDownloadConsentRequestedForAssetID:(id)arg1;	// IMP=0x000000010003396c
- (void)analyticsSetDownloadAvailableForAssetID:(id)arg1;	// IMP=0x0000000100033854
- (void)dealloc;	// IMP=0x00000001000337bc
- (id)initWithAccessoryID:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000100033658

@end

