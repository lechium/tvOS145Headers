/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol.h>

@protocol PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate;
@class NSString;

@interface PKRemoteTransactionAuthenticationPasscodeViewController : _UIRemoteViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol> {

	id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)passcodeViewControllerDidCancel;
-(void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)arg1 ;
@end

