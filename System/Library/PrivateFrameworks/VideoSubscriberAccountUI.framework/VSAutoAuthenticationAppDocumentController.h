/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>
#import <libobjc.A.dylib/VSAutoAuthenticationViewModelDelegate.h>

@class IKViewElement, NSString;

@interface VSAutoAuthenticationAppDocumentController : VSAppDocumentController <VSAutoAuthenticationViewModelDelegate> {

	IKViewElement* _buttonLockupElement;

}

@property (nonatomic,retain) IKViewElement * buttonLockupElement;              //@synthesize buttonLockupElement=_buttonLockupElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_newViewModel;
-(BOOL)_updateViewModel:(id)arg1 error:(id*)arg2 ;
-(id)_autoAuthenticationViewModelWithViewModel:(id)arg1 ;
-(BOOL)_updateAutoAuthenticationViewModel:(id)arg1 error:(id*)arg2 ;
-(IKViewElement *)buttonLockupElement;
-(BOOL)_updateAutoAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2 ;
-(void)setButtonLockupElement:(IKViewElement *)arg1 ;
-(void)autoAuthenticationViewModelDidManualSignInButton:(id)arg1 ;
@end
