/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface VSPrivacyInfoCenter : NSObject <MCProfileConnectionObserver> {

	int _registrationToken;
	long long _accountAccessStatus;

}

@property (assign,nonatomic) int registrationToken;                      //@synthesize registrationToken=_registrationToken - In the implementation block
@property (assign,nonatomic) long long accountAccessStatus;              //@synthesize accountAccessStatus=_accountAccessStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPrivacyInfoCenter;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(long long)accountAccessStatus;
-(void)updateAccountAccessStatusWithResponse:(id)arg1 ;
-(id)updateAccountAccessStatusWithError:(id)arg1 ;
-(void)_invalidateAccountAccessStatus;
-(void)setAccountAccessStatus:(long long)arg1 ;
-(int)registrationToken;
-(void)setRegistrationToken:(int)arg1 ;
@end
