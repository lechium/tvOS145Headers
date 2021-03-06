/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@protocol VSAutoAuthenticationViewModelDelegate;
@class NSString;

@interface VSAutoAuthenticationViewModel : VSCuratedViewModel {

	id<VSAutoAuthenticationViewModelDelegate> _delegate;
	NSString* _messageTitle;
	NSString* _accountName;
	NSString* _manualSignInTitle;
	NSString* _manualSignInButtonText;

}

@property (assign,nonatomic,__weak) id<VSAutoAuthenticationViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * messageTitle;                                                  //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,copy) NSString * accountName;                                                   //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * manualSignInTitle;                                             //@synthesize manualSignInTitle=_manualSignInTitle - In the implementation block
@property (nonatomic,copy) NSString * manualSignInButtonText;                                        //@synthesize manualSignInButtonText=_manualSignInButtonText - In the implementation block
-(id)init;
-(id<VSAutoAuthenticationViewModelDelegate>)delegate;
-(void)setDelegate:(id<VSAutoAuthenticationViewModelDelegate>)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setMessageTitle:(NSString *)arg1 ;
-(NSString *)messageTitle;
-(NSString *)manualSignInButtonText;
-(void)setManualSignInButtonText:(NSString *)arg1 ;
-(void)didSelectManualSignInButton;
-(void)configureWithRequest:(id)arg1 ;
-(void)setManualSignInTitle:(NSString *)arg1 ;
-(NSString *)manualSignInTitle;
@end

