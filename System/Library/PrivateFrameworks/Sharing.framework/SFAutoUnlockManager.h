/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFUnlockClientProtocol.h>

@protocol SFAutoUnlockManagerDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol> {

	id<SFAutoUnlockManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<SFAutoUnlockManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double spinnerDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userDefaults;
+(BOOL)mockedPhoneAutoUnlockNoPairedWatch;
+(BOOL)mockedPhoneAutoUnlockWiFiOff;
+(BOOL)autoUnlockSupported;
+(BOOL)mockedPhoneAutoUnlockNoWatch;
+(long long)mockedPhoneAutoUnlockSimulateErrorCode;
+(BOOL)mockedPhoneAutoUnlockEnabled;
+(BOOL)mockedPhoneAutoUnlockWatchLocked;
+(BOOL)mockedPhoneAutoUnlockFaceIDDisabled;
+(BOOL)mockedPhoneAutoUnlockWatchHasWeakPasscode;
+(BOOL)mockedPhoneAutoUnlockWatchWristDetectionDisabled;
+(BOOL)mockedPhoneAutoUnlockInBioLockout;
+(BOOL)mockedPhoneAutoUnlockNoMask;
+(BOOL)mockedPhoneAutoUnlockNeverUnlocked;
+(BOOL)mockedPhoneAutoUnlockAWDLUnavailable;
+(BOOL)mockedPhoneAutoUnlockWatchWiFiOff;
+(BOOL)mockedPhoneAutoUnlockWatchAWDLUnavailable;
+(BOOL)mockedPhoneAutoUnlockWatchOffWrist;
+(BOOL)mockedPhoneAutoUnlockWatchSleepModeOn;
+(BOOL)mockedPhoneAutoUnlockWatchNoMotion;
+(float)mockedPhoneAutoUnlockSimulateLatency;
+(BOOL)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;
+(BOOL)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;
+(BOOL)mockedPhoneAutoUnlockSimulateMagnetBreak;
+(float)mockedPhoneAutoUnlockSimulateManualReLock;
+(BOOL)mockedAutoUnlockEnabled;
+(BOOL)autoUnlockEnabled;
+(BOOL)autoUnlockEnabled:(unsigned)arg1 ;
+(BOOL)mockedBluetoothAndWiFiEnabled;
+(BOOL)bluetoothAndWiFiEnabled;
+(void)mockedEnableBluetoothAndWiFi;
+(void)enableBluetoothAndWiFi;
+(BOOL)mockedPhoneAutoUnlockMaskUnlikely;
-(id)init;
-(id<SFAutoUnlockManagerDelegate>)delegate;
-(void)setDelegate:(id<SFAutoUnlockManagerDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)repairCloudPairing;
-(void)mockedEligibleAutoUnlockDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)eligibleAutoUnlockDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enabledDevice:(id)arg1 ;
-(void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2 ;
-(void)mockedEnableAutoUnlockWithDevice:(id)arg1 ;
-(void)cancelEnablingAutoUnlockForDevice:(id)arg1 ;
-(void)mockedDisableAutoUnlockForDevice:(/*^block*/id)arg1 ;
-(void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beganAttemptWithDevice:(id)arg1 ;
-(void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1 ;
-(void)completedUnlockWithDevice:(id)arg1 ;
-(void)deviceRequestedRelock:(id)arg1 ;
-(void)prewarmAutoUnlock;
-(void)donateDeviceUnlockedWithMask:(BOOL)arg1 ;
-(void)declinedToEnablePhoneAutoUnlock;
-(void)mockedAttemptAutoUnlock;
-(void)failedUnlockWithError:(id)arg1 ;
-(void)mockedCancelUnlock;
-(void)cancelAutoUnlock;
-(void)autoUnlockStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authPromptInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)keyDeviceLocked:(id)arg1 ;
-(void)failedToEnableDevice:(id)arg1 error:(id)arg2 ;
-(double)spinnerDelay;
-(void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2 ;
-(void)attemptAutoUnlock;
-(void)requestRelock;
@end

