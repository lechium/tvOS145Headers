/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUIWebAction.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class ACAccount, NSString;

@interface AMSUIWebVerifyCredentialsAction : AMSUIWebAction <AMSUIWebActionRunnable> {

	BOOL _ephemeral;
	BOOL _usernameEditable;
	ACAccount* _account;
	NSString* _buttonText;
	long long _serviceType;
	NSString* _serviceIdentifier;
	NSString* _subtitle;
	NSString* _title;

}

@property (nonatomic,retain) ACAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * buttonText;                     //@synthesize buttonText=_buttonText - In the implementation block
@property (assign,nonatomic) BOOL ephemeral;                            //@synthesize ephemeral=_ephemeral - In the implementation block
@property (assign,nonatomic) long long serviceType;                     //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL usernameEditable;                     //@synthesize usernameEditable=_usernameEditable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_serviceTypeFromType:(long long)arg1 ;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(BOOL)ephemeral;
-(BOOL)usernameEditable;
-(void)setUsernameEditable:(BOOL)arg1 ;
-(void)setEphemeral:(BOOL)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

