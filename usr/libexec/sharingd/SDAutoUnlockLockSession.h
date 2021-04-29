//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAutoUnlockAuthSession.h"

@class NSArray, NSData, NSDate, NSObject, NSString, NSUUID, SDAutoUnlockIconTransferStore, SDUnlockSessionAuthToken, SFAutoUnlockDevice;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockLockSession : SDAutoUnlockAuthSession
{
    _Bool _useProxy;	// 8 = 0x8
    _Bool _wifiState;	// 9 = 0x9
    _Bool _otherSessionCancel;	// 10 = 0xa
    _Bool _otherProviderCancel;	// 11 = 0xb
    _Bool _attemptTimedOut;	// 12 = 0xc
    _Bool _chosenDevice;	// 13 = 0xd
    _Bool _unlockSucceeded;	// 14 = 0xe
    _Bool _attemptPrewarmed;	// 15 = 0xf
    _Bool _canceled;	// 16 = 0x10
    _Bool _oldWatch;	// 17 = 0x11
    _Bool _onlyRanging;	// 18 = 0x12
    _Bool _foundPeer;	// 19 = 0x13
    _Bool _connected;	// 20 = 0x14
    _Bool _lockedKeyBag;	// 21 = 0x15
    _Bool _deviceWasLocked;	// 22 = 0x16
    _Bool _receivedAWDLInfo;	// 23 = 0x17
    _Bool _receivedAuthPromptResponse;	// 24 = 0x18
    _Bool _sendingConfirmation;	// 25 = 0x19
    _Bool _sentExchangeResponse;	// 26 = 0x1a
    _Bool _receivedExchangeRequest;	// 27 = 0x1b
    _Bool _supportsConfirmationACK;	// 28 = 0x1c
    _Bool _waitingForDisplayOrClamshell;	// 29 = 0x1d
    _Bool _sentImageData;	// 30 = 0x1e
    _Bool _imageDataAlreadyCached;	// 31 = 0x1f
    _Bool _needsNewImage;	// 32 = 0x20
    _Bool _shouldWaitToCompleteUnlock;	// 33 = 0x21
    _Bool _waitingToCompleteUnlock;	// 34 = 0x22
    _Bool _awdlUp;	// 35 = 0x23
    int _proxyRSSI;	// 36 = 0x24
    int _watchRSSI;	// 40 = 0x28
    NSUUID *_bluetoothID;	// 48 = 0x30
    NSDate *_attemptStartDate;	// 56 = 0x38
    NSDate *_prewarmStartDate;	// 64 = 0x40
    double _discoveryTime;	// 72 = 0x48
    double _proxyDiscoveryTime;	// 80 = 0x50
    NSString *_proxyDeviceModel;	// 88 = 0x58
    double _proxyConnectionTime;	// 96 = 0x60
    unsigned long long _connectedBluetoothDevices;	// 104 = 0x68
    long long _timeSinceLastMachineWake;	// 112 = 0x70
    long long _lastSleepType;	// 120 = 0x78
    SFAutoUnlockDevice *_autoUnlockDevice;	// 128 = 0x80
    NSData *_externalACMContext;	// 136 = 0x88
    NSData *_imageData;	// 144 = 0x90
    NSData *_imageHash;	// 152 = 0x98
    SDAutoUnlockIconTransferStore *_iconTransferStore;	// 160 = 0xa0
    NSArray *_peerList;	// 168 = 0xa8
    NSData *_peerMacAddress;	// 176 = 0xb0
    SDUnlockSessionAuthToken *_sessionAuthToken;	// 184 = 0xb8
    long long _displayCount;	// 192 = 0xc0
    long long _configChangeType;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_displayTimer;	// 208 = 0xd0
    NSObject<OS_dispatch_source> *_confirmationTimer;	// 216 = 0xd8
    NSString *_watchModelID;	// 224 = 0xe0
    NSString *_watchBuildVersion;	// 232 = 0xe8
    NSString *_watchOSVersion;	// 240 = 0xf0
    NSDate *_discoveryDate;	// 248 = 0xf8
    NSDate *_connectionDate;	// 256 = 0x100
    NSDate *_firstSend;	// 264 = 0x108
    NSDate *_exchageResponseDate;	// 272 = 0x110
    NSDate *_displayOrClamshellWaitingDate;	// 280 = 0x118
    NSDate *_confirmationSendDate;	// 288 = 0x120
    NSDate *_prewarmIdleStartDate;	// 296 = 0x128
    double _btOverall;	// 304 = 0x130
    double _btBootstrap;	// 312 = 0x138
    double _awdlInfoExchange;	// 320 = 0x140
    double _keyRequestExchange;	// 328 = 0x148
    double _tokenExchange;	// 336 = 0x150
    double _confirmation;	// 344 = 0x158
    double _peerFoundInterval;	// 352 = 0x160
    double _awdlTotal;	// 360 = 0x168
    double _attemptTime;	// 368 = 0x170
    double _completeExchange;	// 376 = 0x178
    double _connectionTime;	// 384 = 0x180
    double _connectionWaitTime;	// 392 = 0x188
    double _displayClamshellWaitTime;	// 400 = 0x190
    double _prewarmIdleTime;	// 408 = 0x198
}

- (void).cxx_destruct;	// IMP=0x00000001001d3768
@property(nonatomic) double prewarmIdleTime; // @synthesize prewarmIdleTime=_prewarmIdleTime;
@property(nonatomic) double displayClamshellWaitTime; // @synthesize displayClamshellWaitTime=_displayClamshellWaitTime;
@property(nonatomic) double connectionWaitTime; // @synthesize connectionWaitTime=_connectionWaitTime;
@property(nonatomic) double connectionTime; // @synthesize connectionTime=_connectionTime;
@property(nonatomic) double completeExchange; // @synthesize completeExchange=_completeExchange;
@property(nonatomic) double attemptTime; // @synthesize attemptTime=_attemptTime;
@property(nonatomic) double awdlTotal; // @synthesize awdlTotal=_awdlTotal;
@property(nonatomic) double peerFoundInterval; // @synthesize peerFoundInterval=_peerFoundInterval;
@property(nonatomic) double confirmation; // @synthesize confirmation=_confirmation;
@property(nonatomic) double tokenExchange; // @synthesize tokenExchange=_tokenExchange;
@property(nonatomic) double keyRequestExchange; // @synthesize keyRequestExchange=_keyRequestExchange;
@property(nonatomic) double awdlInfoExchange; // @synthesize awdlInfoExchange=_awdlInfoExchange;
@property(nonatomic) double btBootstrap; // @synthesize btBootstrap=_btBootstrap;
@property(nonatomic) double btOverall; // @synthesize btOverall=_btOverall;
@property(retain, nonatomic) NSDate *prewarmIdleStartDate; // @synthesize prewarmIdleStartDate=_prewarmIdleStartDate;
@property(retain, nonatomic) NSDate *confirmationSendDate; // @synthesize confirmationSendDate=_confirmationSendDate;
@property(retain, nonatomic) NSDate *displayOrClamshellWaitingDate; // @synthesize displayOrClamshellWaitingDate=_displayOrClamshellWaitingDate;
@property(retain, nonatomic) NSDate *exchageResponseDate; // @synthesize exchageResponseDate=_exchageResponseDate;
@property(retain, nonatomic) NSDate *firstSend; // @synthesize firstSend=_firstSend;
@property(retain, nonatomic) NSDate *connectionDate; // @synthesize connectionDate=_connectionDate;
@property(retain, nonatomic) NSDate *discoveryDate; // @synthesize discoveryDate=_discoveryDate;
@property(retain, nonatomic) NSString *watchOSVersion; // @synthesize watchOSVersion=_watchOSVersion;
@property(retain, nonatomic) NSString *watchBuildVersion; // @synthesize watchBuildVersion=_watchBuildVersion;
@property(retain, nonatomic) NSString *watchModelID; // @synthesize watchModelID=_watchModelID;
@property(nonatomic) _Bool awdlUp; // @synthesize awdlUp=_awdlUp;
@property(retain) NSObject<OS_dispatch_source> *confirmationTimer; // @synthesize confirmationTimer=_confirmationTimer;
@property(retain) NSObject<OS_dispatch_source> *displayTimer; // @synthesize displayTimer=_displayTimer;
@property(nonatomic) long long configChangeType; // @synthesize configChangeType=_configChangeType;
@property(nonatomic) long long displayCount; // @synthesize displayCount=_displayCount;
@property(nonatomic) int watchRSSI; // @synthesize watchRSSI=_watchRSSI;
@property(retain, nonatomic) SDUnlockSessionAuthToken *sessionAuthToken; // @synthesize sessionAuthToken=_sessionAuthToken;
@property(copy, nonatomic) NSData *peerMacAddress; // @synthesize peerMacAddress=_peerMacAddress;
@property(copy, nonatomic) NSArray *peerList; // @synthesize peerList=_peerList;
@property(nonatomic, getter=isWaitingToCompleteUnlock) _Bool waitingToCompleteUnlock; // @synthesize waitingToCompleteUnlock=_waitingToCompleteUnlock;
@property(nonatomic) _Bool shouldWaitToCompleteUnlock; // @synthesize shouldWaitToCompleteUnlock=_shouldWaitToCompleteUnlock;
@property(nonatomic) _Bool needsNewImage; // @synthesize needsNewImage=_needsNewImage;
@property(nonatomic) _Bool imageDataAlreadyCached; // @synthesize imageDataAlreadyCached=_imageDataAlreadyCached;
@property(nonatomic) _Bool sentImageData; // @synthesize sentImageData=_sentImageData;
@property(nonatomic) _Bool waitingForDisplayOrClamshell; // @synthesize waitingForDisplayOrClamshell=_waitingForDisplayOrClamshell;
@property(nonatomic) _Bool supportsConfirmationACK; // @synthesize supportsConfirmationACK=_supportsConfirmationACK;
@property(nonatomic) _Bool receivedExchangeRequest; // @synthesize receivedExchangeRequest=_receivedExchangeRequest;
@property(nonatomic) _Bool sentExchangeResponse; // @synthesize sentExchangeResponse=_sentExchangeResponse;
@property(nonatomic) _Bool sendingConfirmation; // @synthesize sendingConfirmation=_sendingConfirmation;
@property(nonatomic) _Bool receivedAuthPromptResponse; // @synthesize receivedAuthPromptResponse=_receivedAuthPromptResponse;
@property(nonatomic) _Bool receivedAWDLInfo; // @synthesize receivedAWDLInfo=_receivedAWDLInfo;
@property(nonatomic) _Bool deviceWasLocked; // @synthesize deviceWasLocked=_deviceWasLocked;
@property(nonatomic) _Bool lockedKeyBag; // @synthesize lockedKeyBag=_lockedKeyBag;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) _Bool foundPeer; // @synthesize foundPeer=_foundPeer;
@property(nonatomic) _Bool onlyRanging; // @synthesize onlyRanging=_onlyRanging;
@property(nonatomic) _Bool oldWatch; // @synthesize oldWatch=_oldWatch;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) SDAutoUnlockIconTransferStore *iconTransferStore; // @synthesize iconTransferStore=_iconTransferStore;
@property(retain, nonatomic) NSData *imageHash; // @synthesize imageHash=_imageHash;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSData *externalACMContext; // @synthesize externalACMContext=_externalACMContext;
@property(retain, nonatomic) SFAutoUnlockDevice *autoUnlockDevice; // @synthesize autoUnlockDevice=_autoUnlockDevice;
@property(nonatomic) _Bool attemptPrewarmed; // @synthesize attemptPrewarmed=_attemptPrewarmed;
@property(nonatomic) long long lastSleepType; // @synthesize lastSleepType=_lastSleepType;
@property(nonatomic) long long timeSinceLastMachineWake; // @synthesize timeSinceLastMachineWake=_timeSinceLastMachineWake;
@property(nonatomic) unsigned long long connectedBluetoothDevices; // @synthesize connectedBluetoothDevices=_connectedBluetoothDevices;
@property(nonatomic) double proxyConnectionTime; // @synthesize proxyConnectionTime=_proxyConnectionTime;
@property(nonatomic) int proxyRSSI; // @synthesize proxyRSSI=_proxyRSSI;
@property(retain, nonatomic) NSString *proxyDeviceModel; // @synthesize proxyDeviceModel=_proxyDeviceModel;
@property(nonatomic) double proxyDiscoveryTime; // @synthesize proxyDiscoveryTime=_proxyDiscoveryTime;
@property(nonatomic) double discoveryTime; // @synthesize discoveryTime=_discoveryTime;
@property(retain, nonatomic) NSDate *prewarmStartDate; // @synthesize prewarmStartDate=_prewarmStartDate;
@property(retain, nonatomic) NSDate *attemptStartDate; // @synthesize attemptStartDate=_attemptStartDate;
@property(nonatomic) _Bool unlockSucceeded; // @synthesize unlockSucceeded=_unlockSucceeded;
@property(nonatomic) _Bool chosenDevice; // @synthesize chosenDevice=_chosenDevice;
@property(nonatomic) _Bool attemptTimedOut; // @synthesize attemptTimedOut=_attemptTimedOut;
@property(nonatomic) _Bool otherProviderCancel; // @synthesize otherProviderCancel=_otherProviderCancel;
@property(nonatomic) _Bool otherSessionCancel; // @synthesize otherSessionCancel=_otherSessionCancel;
@property(nonatomic) _Bool wifiState; // @synthesize wifiState=_wifiState;
@property(nonatomic) _Bool useProxy; // @synthesize useProxy=_useProxy;
@property(retain, nonatomic) NSUUID *bluetoothID; // @synthesize bluetoothID=_bluetoothID;
- (void)sendUnlockConfirmation:(_Bool)arg1 withError:(id)arg2;	// IMP=0x00000001001d2780
- (void)sendKeyExchangeResponseWithData:(id)arg1;	// IMP=0x00000001001d2480
- (void)sendAuthPromptImageDataIfReady:(id)arg1;	// IMP=0x00000001001d1cf0
- (void)sendAuthPromptRequestWithImageHash:(id)arg1 appName:(id)arg2;	// IMP=0x00000001001d18d0
- (void)sendAWDLInfoData:(id)arg1 type:(unsigned short)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001d153c
- (void)consumeAuthTokenIfReady;	// IMP=0x00000001001d0e88
- (void)startAWDL;	// IMP=0x00000001001d01f0
- (void)handleConfirmationACK;	// IMP=0x00000001001cff34
- (void)handleSessionAuthToken:(id)arg1;	// IMP=0x00000001001cfa80
- (void)handleSessionKeyExchangeRequest:(id)arg1;	// IMP=0x00000001001cf20c
- (void)handleAuthPromptResponse:(id)arg1;	// IMP=0x00000001001ceea0
- (void)handleAWDLInfo:(id)arg1;	// IMP=0x00000001001ce818
- (void)handleMessageWithWrapper:(id)arg1;	// IMP=0x00000001001ce374
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x00000001001ce124
- (void)handleWiFiRequestInvalidated;	// IMP=0x00000001001ce0b8
- (void)handleRangingStarted;	// IMP=0x00000001001cdf8c
- (void)handlePeerFound:(_Bool)arg1;	// IMP=0x00000001001cdec4
- (void)handleAWDLUp;	// IMP=0x00000001001cdcf0
- (void)handlePeerOutOfRange;	// IMP=0x00000001001cda18
- (void)handlePeerInRange;	// IMP=0x00000001001cd7fc
- (_Bool)peerInRange:(id)arg1;	// IMP=0x00000001001cd4ac
- (void)handleRangingResults:(id)arg1 errorCode:(long long)arg2;	// IMP=0x00000001001cd01c
- (void)invalidateConfirmationTimer;	// IMP=0x00000001001ccf44
- (void)restartConfirmationTimer:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00000001001cccbc
- (void)handleTimerFired;	// IMP=0x00000001001cc754
- (void)invalidateTimerIfReady;	// IMP=0x00000001001cc6fc
- (id)aksPeerAvailable;	// IMP=0x00000001001cc4f4
- (void)deviceConnected:(id)arg1;	// IMP=0x00000001001cc10c
- (_Bool)handleFoundBLEDevice:(id)arg1 available:(_Bool)arg2 lockedOnWrist:(_Bool)arg3;	// IMP=0x00000001001cbe14
- (_Bool)handleFoundBLEDevice:(id)arg1;	// IMP=0x00000001001cbda8
- (void)connectionActivated;	// IMP=0x00000001001cba8c
- (void)updateImageData:(id)arg1 imageHash:(id)arg2;	// IMP=0x00000001001cb3bc
- (id)getAppName;	// IMP=0x00000001001cb3b4
@property(readonly, nonatomic) _Bool usingProxy;
- (id)hintToken;	// IMP=0x00000001001cb280
- (_Bool)isAcceptor;	// IMP=0x00000001001cb278
- (id)attemptResults;	// IMP=0x00000001001ca5b8
- (void)logResults;	// IMP=0x00000001001c9720
- (void)displayConfigChanged:(id)arg1;	// IMP=0x00000001001c967c
- (void)clamshellStateChanged:(id)arg1;	// IMP=0x00000001001c95d8
- (void)removeObservers;	// IMP=0x00000001001c9588
- (void)addObservers;	// IMP=0x00000001001c9480
- (void)handleDecryptionFailure:(long long)arg1;	// IMP=0x00000001001c9318
- (void)_handleCanceledAfterSuccess;	// IMP=0x00000001001c9210
- (void)handleCanceledAfterSuccess;	// IMP=0x00000001001c9184
- (void)lockKeyBagIfNeeded;	// IMP=0x00000001001c90a0
- (void)cancelRangingRequest;	// IMP=0x00000001001c8df4
- (void)_cancel;	// IMP=0x00000001001c8a70
- (void)cancel;	// IMP=0x00000001001c89e4
- (void)completeAttemptIfNecessary;	// IMP=0x00000001001c8830
- (void)invalidateNoDisconnect;	// IMP=0x00000001001c87fc
- (void)invalidate;	// IMP=0x00000001001c85f8
- (id)initWithAutoUnlockDevice:(id)arg1 sessionID:(id)arg2 bleDevice:(id)arg3;	// IMP=0x00000001001c81f4

@end
