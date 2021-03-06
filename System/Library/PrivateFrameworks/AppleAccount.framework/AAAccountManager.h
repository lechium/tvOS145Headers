/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSMutableArray* _accounts;
	NSMutableArray* _originalAccounts;
	id _accountStoreDidChangeObserver;

}
+(id)sharedManager;
-(void)dealloc;
-(void)reloadAccounts;
-(id)accounts;
-(id)accountWithIdentifier:(id)arg1 ;
-(id)_accountStore;
-(id)primaryAccount;
-(void)updateAccount:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)accountsEnabledForDataclass:(id)arg1 ;
-(id)accountWithUsername:(id)arg1 ;
-(id)accountWithPersonID:(id)arg1 ;
-(void)saveAllAccounts;
@end

