/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACMExternalAppleConnectDelegate <NSObject>
@optional
-(void)appleConnectWillShowSignInDialog:(id)arg1;
-(void)appleConnectDidShowSignInDialog:(id)arg1;
-(void)appleConnectWillHideSignInDialog:(id)arg1;
-(void)appleConnectDidHideSignInDialog:(id)arg1;
-(void)appleConnectSignInDialogWillBecomeEnabled:(id)arg1;
-(void)appleConnectSignInDialogDidBecomeEnabled:(id)arg1;
-(void)appleConnectSignInDialogWillBecomeDisabled:(id)arg1;
-(void)appleConnectSignInDialogDidBecomeDisabled:(id)arg1;
-(BOOL)appleConnectCanHideSignInDialog:(id)arg1;
-(BOOL)appleConnectSignInAnimated:(id)arg1;
-(id)appleConnectStandardBackgroundColor:(id)arg1;
-(id)appleConnectStandardLogoImage:(id)arg1;
-(id)appleConnectStandardAccountNameFieldPlaceholder:(id)arg1;
-(unsigned long long)appleConnectSignInDialogContentStyle:(id)arg1;
-(BOOL)appleConnectUseCustomAppearance:(id)arg1;
-(CGPoint*)appleConnectWidgetPosition:(id)arg1;
-(id)appleConnectAccountLabel:(id)arg1;
-(id)appleConnectSignInButton:(id)arg1;
-(id)appleConnectCancelButton:(id)arg1;
-(long long)appleConnectPasswordFieldsReturnKeyType:(id)arg1;
-(BOOL)appleConnectShouldAuthenticateOnUserInput:(id)arg1;

@required
-(void)appleConnect:(id)arg1 authenticationDidEndWithResponse:(id)arg2;
-(id)appleConnectParentViewController:(id)arg1;

@end

