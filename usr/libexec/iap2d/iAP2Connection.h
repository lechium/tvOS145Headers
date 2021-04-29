//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "iAP2FileTransferRecvDelegate-Protocol.h"
#import "iAP2FileTransferSendDelegate-Protocol.h"

@class NSMutableDictionary, NSTimer, iAP2AppLaunchController, iAP2AuthenticationController, iAP2FileTransferManager, iAP2FileTransferRecv, iAP2HIDManager, iAP2IdentificationInfo, iAP2MediaLibrary, iAP2MsgAssistiveTouch, iAP2MsgBTPairing, iAP2MsgCamera, iAP2MsgCarPlayStatusNotification, iAP2MsgDestinationSharing, iAP2MsgDigitalAudio, iAP2MsgLocation, iAP2MsgNavigation, iAP2MsgOOBBTPairing, iAP2MsgSiri, iAP2MsgUSBHostMode, iAP2MsgVehicleStatus, iAP2MsgVoiceOver, iAP2MsgWifi, iAP2NowPlaying, iAP2Port, iAP2PowerUpdates, iAP2Session;
@protocol OS_dispatch_queue;

@interface iAP2Connection : NSObject <iAP2FileTransferSendDelegate, iAP2FileTransferRecvDelegate>
{
    iAP2MediaLibrary *_mediaLibrary;	// 8 = 0x8
    iAP2NowPlaying *_nowPlaying;	// 16 = 0x10
    iAP2MsgWifi *_msgWifi;	// 24 = 0x18
    iAP2MsgLocation *_msgLocation;	// 32 = 0x20
    iAP2MsgCamera *_msgCamera;	// 40 = 0x28
    iAP2MsgVehicleStatus *_msgVehicleStatus;	// 48 = 0x30
    iAP2MsgDigitalAudio *_msgDigitalAudio;	// 56 = 0x38
    iAP2HIDManager *_iap2hidManager;	// 64 = 0x40
    iAP2IdentificationInfo *_IdentificationInfo;	// 72 = 0x48
    NSMutableDictionary *_AccessoryDictionary;	// 80 = 0x50
    iAP2PowerUpdates *_powerUpdates;	// 88 = 0x58
    iAP2MsgAssistiveTouch *_assistiveTouch;	// 96 = 0x60
    iAP2MsgVoiceOver *_voiceOver;	// 104 = 0x68
    iAP2MsgSiri *_siri;	// 112 = 0x70
    iAP2MsgDestinationSharing *_msgDestinationSharing;	// 120 = 0x78
    iAP2MsgOOBBTPairing *_msgOOBBTPairing;	// 128 = 0x80
    iAP2MsgNavigation *_msgNavigation;	// 136 = 0x88
    iAP2MsgUSBHostMode *_msgUSBHostMode;	// 144 = 0x90
    iAP2MsgBTPairing *_msgBTPairing;	// 152 = 0x98
    iAP2MsgCarPlayStatusNotification *_msgCarPlayStatusNotification;	// 160 = 0xa0
    int _identificationState;	// 168 = 0xa8
    NSTimer *_identifyTimer;	// 176 = 0xb0
    struct __CFUserNotification *_accessoryNotSupportedAlert;	// 184 = 0xb8
    struct __CFUserNotification *_noAppForAccessoryAlert;	// 192 = 0xc0
    CDUnknownFunctionPointerType _callbackForNoAppForAccessory;	// 200 = 0xc8
    _Bool _findAppForAccessoryAlertDelayedForLockScreen;	// 208 = 0xd0
    iAP2FileTransferRecv *_testRecvFile;	// 216 = 0xd8
    double _authStartedTime;	// 224 = 0xe0
    double _authSucceededTime;	// 232 = 0xe8
    _Bool _isInList;	// 240 = 0xf0
    _Bool _shuttingDown;	// 241 = 0xf1
    _Bool _failed;	// 242 = 0xf2
    unsigned char _ControlSessionVersion;	// 243 = 0xf3
    unsigned int _magic;	// 244 = 0xf4
    unsigned int _connectionID;	// 248 = 0xf8
    iAP2Port *_port;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_serializeQ;	// 264 = 0x108
    iAP2Session *_controlSession;	// 272 = 0x110
    iAP2AuthenticationController *_authStatus;	// 280 = 0x118
    iAP2AppLaunchController *_appLaunchController;	// 288 = 0x120
    CDStruct_7e3aad02 *accessoryPowerManager;	// 296 = 0x128
    NSMutableDictionary *_serviceTests;	// 304 = 0x130
    iAP2FileTransferManager *_fileTransferManager;	// 312 = 0x138
}

+ (void)handleWakeUp;	// IMP=0x0000000100016e00
+ (void)handleGoToSleep;	// IMP=0x0000000100016b14
+ (unsigned int)activeHIDDescriptorCountForAllConnections;	// IMP=0x000000010001691c
+ (id)connectedAccessories;	// IMP=0x00000001000166e0
+ (id)ConnectionFromID:(unsigned int)arg1;	// IMP=0x00000001000165a0
+ (void)ConnectionListPerformAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016500
+ (void)ConnectionListPerform:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016444
@property(readonly, nonatomic) iAP2FileTransferManager *fileTransferManager; // @synthesize fileTransferManager=_fileTransferManager;
@property(readonly, nonatomic) unsigned char ControlSessionVersion; // @synthesize ControlSessionVersion=_ControlSessionVersion;
@property(readonly, nonatomic) double authSucceededTime; // @synthesize authSucceededTime=_authSucceededTime;
@property(readonly, nonatomic) double authStartedTime; // @synthesize authStartedTime=_authStartedTime;
@property(retain, nonatomic) iAP2FileTransferRecv *TestRecvFile; // @synthesize TestRecvFile=_testRecvFile;
@property(readonly, nonatomic) NSMutableDictionary *ServiceTests; // @synthesize ServiceTests=_serviceTests;
@property(nonatomic) int identificationState; // @synthesize identificationState=_identificationState;
@property(readonly, nonatomic) CDStruct_7e3aad02 *accessoryPowerManager; // @synthesize accessoryPowerManager;
@property(readonly, nonatomic) iAP2AuthenticationController *AuthStatus; // @synthesize AuthStatus=_authStatus;
@property(readonly, nonatomic) iAP2Session *ControlSession; // @synthesize ControlSession=_controlSession;
@property(readonly, nonatomic) _Bool Failed; // @synthesize Failed=_failed;
@property(readonly, nonatomic) _Bool ShuttingDown; // @synthesize ShuttingDown=_shuttingDown;
@property(readonly, nonatomic) _Bool IsInList; // @synthesize IsInList=_isInList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *SerializeQ; // @synthesize SerializeQ=_serializeQ;
@property(readonly, nonatomic) iAP2Port *Port; // @synthesize Port=_port;
@property(readonly, nonatomic) unsigned int ConnectionID; // @synthesize ConnectionID=_connectionID;
@property(readonly, nonatomic) unsigned int Magic; // @synthesize Magic=_magic;
- (_Bool)isOOBBTPairingSupported;	// IMP=0x000000010001b490
- (_Bool)shouldRequestUserAuthorization;	// IMP=0x000000010001b43c
- (_Bool)isCarPlaySupported;	// IMP=0x000000010001b2ec
- (_Bool)isCarPlaySupportedOverWiFi;	// IMP=0x000000010001b25c
- (_Bool)isCarPlaySupportedOverUSB;	// IMP=0x000000010001b194
- (void)postNoAppForAccessoryAlertWithCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000010001b040
- (void)tearDownFindAppForAccessoryAlert;	// IMP=0x000000010001afe0
- (void)_shouldPostNoAppAlertIfHoldSwitchOff;	// IMP=0x000000010001af7c
- (void)postAccessoryNotSupportedNotification;	// IMP=0x000000010001aefc
- (int)checkIdentificationInfo:(id)arg1;	// IMP=0x000000010001ae14
- (void)processAuthChangeNotification:(id)arg1;	// IMP=0x000000010001ac80
- (void)processDeviceTimeNotifications:(id)arg1;	// IMP=0x000000010001abf0
- (void)processDeviceStateNotifications:(id)arg1;	// IMP=0x000000010001ab44
- (void)unregisterForSystemNotifications;	// IMP=0x000000010001aac0
- (void)registerForSystemNotifications;	// IMP=0x000000010001aa2c
- (long long)EventNotify:(int)arg1 param:(void *)arg2;	// IMP=0x000000010001aa1c
- (_Bool)fileTransferRecvDidTiemout:(id)arg1;	// IMP=0x000000010001a93c
- (_Bool)fileTransferRecv:(id)arg1 didFinish:(_Bool)arg2;	// IMP=0x000000010001a8a8
- (_Bool)fileTransferRecv:(id)arg1 didGetBuff:(id)arg2 soFar:(unsigned long long)arg3 outOf:(unsigned long long)arg4;	// IMP=0x000000010001a650
- (_Bool)fileTransferSendDidTimeout:(id)arg1;	// IMP=0x000000010001a578
- (_Bool)fileTransferSendDidSend:(id)arg1;	// IMP=0x000000010001a30c
@property(readonly, nonatomic) _Bool HasActiveMsgBTPairing;
@property(readonly, nonatomic) _Bool IsNavigationFeatureSupported;
@property(readonly, nonatomic) _Bool IsCameraFeatureSupported;
@property(readonly, nonatomic) _Bool IsOOBBTPairingSupported;
@property(readonly, nonatomic) _Bool DoesAccessorySupportAccessibility;
@property(readonly, nonatomic) _Bool IsSupportedUSBHostMode;
- (_Bool)IsSupportedCCK;	// IMP=0x000000010001a0c8
@property(readonly, nonatomic) _Bool IsSupportedUSBAudioOut;
@property(readonly, nonatomic) _Bool IsSupportedIPodOut;
- (_Bool)SendDataForSession:(unsigned char)arg1 Data:(char *)arg2 Len:(unsigned int)arg3 andNotify:(CDUnknownBlockType)arg4 withContext:(void *)arg5 onQueue:(id)arg6;	// IMP=0x0000000100019e14
- (_Bool)SendDataForSession:(unsigned char)arg1 Data:(char *)arg2 Len:(unsigned int)arg3;	// IMP=0x0000000100019d18
- (_Bool)ProcessTestSession:(unsigned char)arg1 Data:(char *)arg2 Len:(unsigned int)arg3;	// IMP=0x0000000100019c18
- (_Bool)ProcessEASession:(unsigned char)arg1 Data:(char *)arg2 Len:(unsigned int)arg3;	// IMP=0x0000000100019b44
- (_Bool)ProcessBufferSession:(unsigned char)arg1 Data:(char *)arg2 Len:(unsigned int)arg3;	// IMP=0x0000000100019ad0
- (_Bool)ProcessControlSession:(unsigned char)arg1 Data:(char *)arg2 Len:(unsigned int)arg3;	// IMP=0x0000000100019908
- (id)MainQueue;	// IMP=0x00000001000198f0
- (unsigned char)sessionVersionForID:(unsigned char)arg1;	// IMP=0x00000001000198b0
- (unsigned char)sessionIDForServiceType:(int)arg1;	// IMP=0x000000010001987c
- (int)serviceTypeForSessionID:(unsigned char)arg1;	// IMP=0x0000000100019840
- (struct iAP2Link_st *)iAP2Link;	// IMP=0x00000001000197f0
- (void)connectionFailed;	// IMP=0x0000000100019758
- (void)connectionDown;	// IMP=0x000000010001962c
- (void)setIsShuttingDown;	// IMP=0x0000000100019620
- (void)_connectionShutdown;	// IMP=0x0000000100018df8
- (void)SetupSessionsAfterIdentification;	// IMP=0x0000000100018c5c
- (void)SetupSessionsAfterLinkInitialization;	// IMP=0x0000000100018874
- (void)IAP2TimeSyncResetKalmanFilter;	// IMP=0x00000001000187bc
- (void)IAP2TimeSyncInfoDictPerformBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100018594
- (void)IAP2TimeSyncSetParamsThreshold:(unsigned long long)arg1 interval:(unsigned int)arg2;	// IMP=0x00000001000184b8
- (void)SetNotInListShuttingDown;	// IMP=0x00000001000184ac
@property(readonly, nonatomic) iAP2AppLaunchController *appLaunchController; // @synthesize appLaunchController=_appLaunchController;
@property(readonly, nonatomic) iAP2HIDManager *IAP2HIDManager;
@property(readonly, nonatomic) iAP2NowPlaying *NowPlaying;
@property(readonly, nonatomic) iAP2MediaLibrary *MediaLibrary;
@property(readonly, nonatomic) iAP2MsgWifi *MsgWifi;
@property(readonly, nonatomic) iAP2MsgCamera *MsgCamera;
@property(readonly, nonatomic) iAP2MsgLocation *MsgLocation;
@property(readonly, nonatomic) iAP2MsgVehicleStatus *MsgVehicleStatus;
@property(readonly, nonatomic) iAP2MsgDigitalAudio *MsgDigitalAudio;
- (void)ClearIdentificationInfo;	// IMP=0x0000000100017df0
@property(readonly, nonatomic) iAP2IdentificationInfo *IdentificationInfo;
@property(readonly, nonatomic) NSMutableDictionary *AccessoryDictionary;
@property(readonly, nonatomic) iAP2PowerUpdates *PowerUpdates;
@property(readonly, nonatomic) iAP2MsgAssistiveTouch *MsgAssistiveTouch;
@property(readonly, nonatomic) iAP2MsgVoiceOver *MsgVoiceOver;
@property(readonly, nonatomic) iAP2MsgBTPairing *MsgBTPairing;
@property(readonly, nonatomic) iAP2MsgUSBHostMode *MsgUSBHostMode;
@property(readonly, nonatomic) iAP2MsgCarPlayStatusNotification *MsgCarPlayStatusNotification;
@property(readonly, nonatomic) iAP2MsgNavigation *MsgNavigation;
@property(readonly, nonatomic) iAP2MsgOOBBTPairing *MsgOOBBTPairing;
@property(readonly, nonatomic) iAP2MsgDestinationSharing *MsgDestinationSharing;
@property(readonly, nonatomic) iAP2MsgSiri *MsgSiri;
- (id)getiAP2Feature:(id *)arg1 allocBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000175d8
- (id)description;	// IMP=0x0000000100017504
- (void)_changeListenerQueuePriorityStop:(id)arg1;	// IMP=0x00000001000174c0
- (void)_changeListenerQueuePriorityHigh:(id)arg1;	// IMP=0x0000000100017410
- (void)dealloc;	// IMP=0x0000000100017334
- (id)initWithPort:(id)arg1;	// IMP=0x0000000100016fa4

@end

