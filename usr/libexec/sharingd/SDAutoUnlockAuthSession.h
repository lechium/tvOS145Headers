//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAutoUnlockPairingSession.h"

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSNumber, NSString, SDAutoUnlockWiFiRequest, SFBLEDevice;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockAuthSession : SDAutoUnlockPairingSession
{
    _Bool _useAKSToken;	// 8 = 0x8
    _Bool _inRange;	// 9 = 0x9
    _Bool _shouldUnlock;	// 10 = 0xa
    _Bool _acceptor;	// 11 = 0xb
    _Bool _rangingTimedOut;	// 12 = 0xc
    _Bool _aksSuccess;	// 13 = 0xd
    _Bool _useEncryption;	// 14 = 0xe
    _Bool _skipMotionCheck;	// 15 = 0xf
    SFBLEDevice *_bleDevice;	// 16 = 0x10
    long long _attemptType;	// 24 = 0x18
    NSData *_awdlInfoData;	// 32 = 0x20
    NSDate *_awdlStart;	// 40 = 0x28
    double _awdlInterval;	// 48 = 0x30
    NSNumber *_distance;	// 56 = 0x38
    NSData *_rangingKey;	// 64 = 0x40
    NSString *_rangingErrorString;	// 72 = 0x48
    NSDate *_rangingStart;	// 80 = 0x50
    double _rangingInterval;	// 88 = 0x58
    NSError *_attemptError;	// 96 = 0x60
    NSDictionary *_remoteAWDLInfo;	// 104 = 0x68
    NSDictionary *_localAWDLInfo;	// 112 = 0x70
    NSData *_sessionRangingKey;	// 120 = 0x78
    unsigned long long _protocol;	// 128 = 0x80
    NSString *_wifiErrorDomain;	// 136 = 0x88
    long long _wifiRangingErrorCode;	// 144 = 0x90
    NSArray *_wifiRangingResults;	// 152 = 0x98
    NSError *_coreLocationError;	// 160 = 0xa0
    NSError *_startAWDLError;	// 168 = 0xa8
    long long _errorType;	// 176 = 0xb0
    SDAutoUnlockWiFiRequest *_wifiRequest;	// 184 = 0xb8
    NSString *_appName;	// 192 = 0xc0
    NSData *_appIcon;	// 200 = 0xc8
    NSDate *_lastLocalUnlockDate;	// 208 = 0xd0
    id _awdlNetwork;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000001001680f0
@property(retain) id awdlNetwork; // @synthesize awdlNetwork=_awdlNetwork;
@property(retain, nonatomic) NSDate *lastLocalUnlockDate; // @synthesize lastLocalUnlockDate=_lastLocalUnlockDate;
@property(nonatomic) _Bool skipMotionCheck; // @synthesize skipMotionCheck=_skipMotionCheck;
@property(retain, nonatomic) NSData *appIcon; // @synthesize appIcon=_appIcon;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) SDAutoUnlockWiFiRequest *wifiRequest; // @synthesize wifiRequest=_wifiRequest;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(retain, nonatomic) NSError *startAWDLError; // @synthesize startAWDLError=_startAWDLError;
@property(retain, nonatomic) NSError *coreLocationError; // @synthesize coreLocationError=_coreLocationError;
@property(retain, nonatomic) NSArray *wifiRangingResults; // @synthesize wifiRangingResults=_wifiRangingResults;
@property(nonatomic) long long wifiRangingErrorCode; // @synthesize wifiRangingErrorCode=_wifiRangingErrorCode;
@property(retain, nonatomic) NSString *wifiErrorDomain; // @synthesize wifiErrorDomain=_wifiErrorDomain;
@property(nonatomic) _Bool useEncryption; // @synthesize useEncryption=_useEncryption;
@property(nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSData *sessionRangingKey; // @synthesize sessionRangingKey=_sessionRangingKey;
@property(retain, nonatomic) NSDictionary *localAWDLInfo; // @synthesize localAWDLInfo=_localAWDLInfo;
@property(retain, nonatomic) NSDictionary *remoteAWDLInfo; // @synthesize remoteAWDLInfo=_remoteAWDLInfo;
@property(retain, nonatomic) NSError *attemptError; // @synthesize attemptError=_attemptError;
@property(nonatomic) double rangingInterval; // @synthesize rangingInterval=_rangingInterval;
@property(retain, nonatomic) NSDate *rangingStart; // @synthesize rangingStart=_rangingStart;
@property(nonatomic) _Bool aksSuccess; // @synthesize aksSuccess=_aksSuccess;
@property(retain, nonatomic) NSString *rangingErrorString; // @synthesize rangingErrorString=_rangingErrorString;
@property(nonatomic) _Bool rangingTimedOut; // @synthesize rangingTimedOut=_rangingTimedOut;
@property(retain, nonatomic) NSData *rangingKey; // @synthesize rangingKey=_rangingKey;
@property(retain, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(nonatomic) double awdlInterval; // @synthesize awdlInterval=_awdlInterval;
@property(retain, nonatomic) NSDate *awdlStart; // @synthesize awdlStart=_awdlStart;
@property(nonatomic, getter=isAcceptor) _Bool acceptor; // @synthesize acceptor=_acceptor;
@property(copy, nonatomic) NSData *awdlInfoData; // @synthesize awdlInfoData=_awdlInfoData;
@property(nonatomic) long long attemptType; // @synthesize attemptType=_attemptType;
@property(retain, nonatomic) SFBLEDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(nonatomic) _Bool shouldUnlock; // @synthesize shouldUnlock=_shouldUnlock;
@property(nonatomic) _Bool inRange; // @synthesize inRange=_inRange;
@property(nonatomic) _Bool useAKSToken; // @synthesize useAKSToken=_useAKSToken;
@property(readonly, nonatomic) _Bool rangingDisabled;
@property(readonly, nonatomic) _Bool useCoreLocation;
@property(readonly, nonatomic) _Bool useRealRangingKey;
- (id)peerListFromAWDLInfo:(id)arg1;	// IMP=0x0000000100167740
- (void)sendData:(id)arg1 bleDevice:(id)arg2 direct:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100167228
- (void)sendData:(id)arg1 bleDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100167214
- (void)sendAWDLInfo:(_Bool)arg1;	// IMP=0x0000000100166af4
- (void)sendAWDLInfo;	// IMP=0x0000000100166ae4
- (void)sendData:(id)arg1 type:(unsigned short)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100166a30
- (void)sendData:(id)arg1 type:(unsigned short)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100166928
- (void)sendAWDLInfoData:(id)arg1 type:(unsigned short)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010016691c
- (void)_start;	// IMP=0x0000000100166910
- (void)start;	// IMP=0x0000000100166884
- (id)getAppName;	// IMP=0x000000010016687c
- (void)handleMessageWithWrapper:(id)arg1;	// IMP=0x0000000100166878
- (void)connectionActivated;	// IMP=0x0000000100166874
- (void)invalidate;	// IMP=0x0000000100166764
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2 bleDevice:(id)arg3;	// IMP=0x00000001001666b0

@end

