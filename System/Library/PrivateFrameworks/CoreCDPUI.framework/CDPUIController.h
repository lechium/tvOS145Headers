/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreCDPUI/CDPUIBaseController.h>
#import <libobjc.A.dylib/CDPDevicePickerDelegate.h>
#import <libobjc.A.dylib/CDPRemoteSecretEntryDelegate.h>

@protocol CDPUIDelegate;
@class NSArray, UINavigationController, CDPRemoteDeviceSecretValidator, CDPDevicePickerViewController;

@interface CDPUIController : CDPUIBaseController <CDPDevicePickerDelegate, CDPRemoteSecretEntryDelegate> {

	NSArray* _devices;
	UINavigationController* _navController;
	CDPRemoteDeviceSecretValidator* _remoteSecretValidator;
	CDPDevicePickerViewController* _devicePicker;
	BOOL _forceInlinePresentation;
	id<CDPUIDelegate> _delegate;

}

@property (nonatomic,retain) CDPRemoteDeviceSecretValidator * remoteSecretValidator;              //@synthesize remoteSecretValidator=_remoteSecretValidator - In the implementation block
@property (assign,nonatomic,__weak) id<CDPUIDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL forceInlinePresentation;                                        //@synthesize forceInlinePresentation=_forceInlinePresentation - In the implementation block
-(id)init;
-(id<CDPUIDelegate>)delegate;
-(void)setDelegate:(id<CDPUIDelegate>)arg1 ;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5 ;
-(void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)forceInlinePresentation;
-(void)setForceInlinePresentation:(BOOL)arg1 ;
-(void)devicePicker:(id)arg1 didSelectDevice:(id)arg2 ;
-(id)_remoteSecretControllerForDevice:(id)arg1 ;
-(id)_remoteSecretControllerForNewestDevice:(id)arg1 ;
-(void)_presentRootController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setupDevicePickerController:(/*^block*/id)arg1 ;
-(void)_dismissPresentedViewControllerCompletion:(/*^block*/id)arg1 ;
-(BOOL)performingAccountRecovery;
-(void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1 ;
-(void)remoteSecretEntry:(id)arg1 depletedRemainingAttemptsForDevice:(id)arg2 ;
-(void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg1 ;
-(void)performAccountReset:(id)arg1 ;
-(void)finishValidation:(id)arg1 withError:(id)arg2 ;
-(void)remoteSecretEntry:(id)arg1 didAcceptValidRemoteSecretForDevice:(id)arg2 ;
-(void)cancelledRemoteSecretEntry:(id)arg1 ;
-(void)_promptForRemoteApproval;
-(CDPRemoteDeviceSecretValidator *)remoteSecretValidator;
-(void)setRemoteSecretValidator:(CDPRemoteDeviceSecretValidator *)arg1 ;
@end

