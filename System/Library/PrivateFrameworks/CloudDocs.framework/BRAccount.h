/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface BRAccount : NSObject {

	NSString* _accountID;
	NSData* _perAppAccountIdentifier;

}

@property (nonatomic,copy) NSData * perAppAccountIdentifier;              //@synthesize perAppAccountIdentifier=_perAppAccountIdentifier - In the implementation block
+(void)startAccountTokenChangeObserverIfNeeded;
+(BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)arg1 error:(id*)arg2 ;
+(BOOL)refreshCurrentLoggedInAccountWithError:(id*)arg1 ;
+(id)currentCachedLoggedInAccountWithError:(id*)arg1 ;
+(BOOL)forceLogoutAndClearStateWithError:(id*)arg1 ;
+(id)currentLoggedInAccountWithError:(id*)arg1 ;
+(BOOL)refreshCurrentLoggedInAccount;
-(id)initWithAccountID:(id)arg1 ;
-(NSData *)perAppAccountIdentifier;
-(void)setPerAppAccountIdentifier:(NSData *)arg1 ;
-(BOOL)loginWithError:(id*)arg1 ;
-(BOOL)logoutWithError:(id*)arg1 ;
-(id)containerWithPendingChanges;
-(BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasOptimizeStorageWithError:(id*)arg1 ;
-(BOOL)setOptimizeStorageEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)getEvictableSpace:(id*)arg1 error:(id*)arg2 ;
-(void)evictOldDocumentsWithHandler:(/*^block*/id)arg1 ;
@end

