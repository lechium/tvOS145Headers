//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DownloadHandle, DownloadHandlerSession, NSError, NSString;

@interface FinishDownloadResponse : NSObject
{
    long long _assetBlockedReason;	// 8 = 0x8
    long long _assetID;	// 16 = 0x10
    DownloadHandle *_downloadHandle;	// 24 = 0x18
    DownloadHandlerSession *_downloadHandlerSession;	// 32 = 0x20
    long long _downloadID;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    NSString *_mediaAssetInstallPath;	// 56 = 0x38
    long long _result;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100027e60
@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *mediaAssetInstallPath; // @synthesize mediaAssetInstallPath=_mediaAssetInstallPath;
@property(nonatomic) long long mediaAssetIdentifier; // @synthesize mediaAssetIdentifier=_assetID;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadID;
@property(copy, nonatomic) DownloadHandlerSession *downloadHandlerSession; // @synthesize downloadHandlerSession=_downloadHandlerSession;
@property(retain, nonatomic) DownloadHandle *downloadHandle; // @synthesize downloadHandle=_downloadHandle;
@property(nonatomic) long long assetBlockedReason; // @synthesize assetBlockedReason=_assetBlockedReason;

@end

