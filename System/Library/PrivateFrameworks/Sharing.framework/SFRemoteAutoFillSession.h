/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class NSString, NSArray, NSDate, SFSession, NSObject, SFDevice;

@interface SFRemoteAutoFillSession : NSObject {

	BOOL _activateCalled;
	NSString* _contextBundleID;
	NSString* _contextLocalizedAppName;
	int _contextRequestState;
	NSString* _contextUnlocalizedAppName;
	NSArray* _contextAssociatedDomains;
	NSString* _contextURL;
	BOOL _invalidateCalled;
	BOOL _pairingFinishedNotified;
	NSDate* _pairClock;
	int _pairState;
	PairingSubstate _pairSubstate;
	int _passwordPickerState;
	NSString* _pickedPassword;
	NSString* _pickedUsername;
	int _sendCredentialsState;
	SFSession* _session;
	int _sessionState;
	BOOL _prefPairContactsDisabled;
	BOOL _prefPairHomeKitDisabled;
	BOOL _prefPairVerifyDisabled;
	BOOL _prefPairVisualDisabled;
	/*^block*/id _completedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	/*^block*/id _pairingFinishedHandler;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _promptForPickerHandler;

}

@property (nonatomic,copy) id completedHandler;                                       //@synthesize completedHandler=_completedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id pairingFinishedHandler;                                 //@synthesize pairingFinishedHandler=_pairingFinishedHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id promptForPickerHandler;                                 //@synthesize promptForPickerHandler=_promptForPickerHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_run;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)_cleanup;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)tryPIN:(id)arg1 ;
-(void)_completedWithError:(id)arg1 ;
-(int)_runPair;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(int)_runPairVerify;
-(int)_runSessionStart;
-(int)_runContextRequest;
-(int)_runPasswordPicker;
-(int)_runSendCredentials;
-(int)_runPairHomeKit;
-(int)_runPairContacts;
-(int)_runPairVisual;
-(int)_runPairPIN;
-(void)_handleContextRequestResponse:(id)arg1 error:(id)arg2 ;
-(void)_handlePasswordPickerResponse:(id)arg1 password:(id)arg2 error:(id)arg3 ;
-(void)_handleSendCredentialsResponse:(id)arg1 error:(id)arg2 ;
-(id)completedHandler;
-(void)setCompletedHandler:(id)arg1 ;
-(id)pairingFinishedHandler;
-(void)setPairingFinishedHandler:(id)arg1 ;
-(id)promptForPickerHandler;
-(void)setPromptForPickerHandler:(id)arg1 ;
@end

