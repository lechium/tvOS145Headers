/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKDeviceSharingCapabilitiesManagerObserver.h>

@protocol PKPeerPaymentAssociatedAccountSetupDelegate, OS_dispatch_source;
@class PKPeerPaymentSetupFlowController, PKFamilyMember, PKPeerPaymentIconEducationView, PKPeerPaymentAccount, NSObject, PKDeviceSharingCapabilities, NSString;

@interface PKPeerPaymentAssociatedAccountActivationViewController : PKExplanationViewController <PKDeviceSharingCapabilitiesManagerObserver> {

	PKPeerPaymentSetupFlowController* _controller;
	PKFamilyMember* _familyMember;
	id<PKPeerPaymentAssociatedAccountSetupDelegate> _delegate;
	unsigned long long _state;
	long long _setupType;
	PKPeerPaymentIconEducationView* _iconEducationView;
	PKPeerPaymentAccount* _account;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _timerHasFired;
	PKDeviceSharingCapabilities* _childAppleCashCapabilities;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_cancelTimer;
-(void)viewDidLoad;
-(void)_setState:(unsigned long long)arg1 ;
-(void)deviceSharingCapabilitiesUpdated:(id)arg1 newSharingCapabilties:(id)arg2 forAppleID:(id)arg3 ;
-(void)deviceSharingCapabilitiesUpdated:(id)arg1 maximumPossibleDevices:(long long)arg2 forAppleID:(id)arg3 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)_presentDisplayableError:(id)arg1 ;
-(id)initWithPeerPaymentSetupFlowController:(id)arg1 ;
-(void)_handlePeerPaymentAccountDidChangeNotification;
-(void)_checkFamilyMemberAppleCashCapabilities;
-(void)_sendMoneyInMessages;
-(BOOL)_isAssociatedAccountPending;
-(void)_startTimerIfNeccessary;
-(unsigned long long)_nextStateAfterCheckingFamilyMemberAppleCashCapabilities:(BOOL*)arg1 ;
-(void)_terminateAddAssociatedAccountFlowWithSucces:(BOOL)arg1 updatedAccount:(id)arg2 ;
@end
