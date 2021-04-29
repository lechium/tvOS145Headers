/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class ATVAuthenticationContext, SSAccount, NSObject;

@interface TVCKStoreAccountManager : NSObject {

	ATVAuthenticationContext* _pendingAuthenticationContext;
	ATVAuthenticationContext* _activeAuthenticationContext;
	SSAccount* _activeAccount;
	BOOL _makingAccountChanges;
	BOOL _isActiveAccountUpdateScheduled;
	NSObject*<OS_dispatch_queue> _serialAccessQueue;
	NSObject*<OS_dispatch_queue> _authenticationQueue;

}

@property (nonatomic,readonly) SSAccount * activeAccount; 
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversOfActiveAccount;
-(id)init;
-(id)accounts;
-(SSAccount *)activeAccount;
-(void)removeAccount:(id)arg1 ;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(id)accountWithAccountName:(id)arg1 ;
-(void)signOutAccount:(id)arg1 ;
-(id)setActiveAccount:(SSAccount *)arg1 ;
-(void)_accountStoreChanged;
-(void)_updateActiveAccount;
-(void)fetchFamilyInfoForActiveAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_authenticateActivityChanged:(id)arg1 ;
-(void)_performSynchronizedBlock:(/*^block*/id)arg1 ;
-(void)_signOutAccount:(id)arg1 eraseKeyChainData:(BOOL)arg2 ;
-(void)authenticateAccount:(id)arg1 withPassword:(id)arg2 allowPrompt:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setAuthenticationContext:(id)arg1 ;
-(void)_dequeueAuthenticationContextAndAuthenticate;
-(id)_popAuthenticationContext;
-(void)_handleAuthenticationContext:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)authenticateWithName:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)authenticateAccount:(id)arg1 allowPrompt:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

