/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, ACAccountStore;

@interface PSAccountEnumerator : NSObject {

	NSArray* _accounts;
	ACAccountStore* _accountStore;
	id _accountStoreDidChangeObserver;

}

@property (nonatomic,readonly) NSArray * accounts; 
-(void)dealloc;
-(NSArray *)accounts;
-(id)_accountStore;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)_visibleAccountTypeIDs;
-(id)accountsForcingRefresh:(BOOL)arg1 ;
-(void)_loadAccountsWithCompletion:(/*^block*/id)arg1 ;
@end

