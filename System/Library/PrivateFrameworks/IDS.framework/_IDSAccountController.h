/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDSDaemonListenerProtocol.h>

@class NSMapTable, NSString, NSMutableSet, NSMutableDictionary, NSSet;

@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol> {

	id _delegateContext;
	NSMapTable* _delegateToInfo;
	NSString* _serviceToken;
	NSString* _service;
	NSMutableSet* _cachedAccounts;
	NSMutableSet* _enabledAccounts;
	NSMutableDictionary* _transactionIDToHandlersMap;
	BOOL _accountsLoaded;
	BOOL _isLocalAccountVisible;

}

@property (nonatomic,readonly) NSSet * accounts; 
@property (nonatomic,readonly) NSSet * internalAccounts; 
@property (nonatomic,readonly) NSSet * enabledAccounts; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)serviceName;
-(void)_connect;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSSet *)accounts;
-(NSSet *)enabledAccounts;
-(void)addAccount:(id)arg1 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_removeAccount:(id)arg1 ;
-(void)_removeAndDeregisterAccount:(id)arg1 ;
-(void)enableAccount:(id)arg1 ;
-(void)disableAccount:(id)arg1 ;
-(void)daemonDisconnected;
-(void)accountAdded:(id)arg1 ;
-(void)accountRemoved:(id)arg1 ;
-(void)accountUpdated:(id)arg1 ;
-(void)accountsChanged:(id)arg1 forTopic:(id)arg2 ;
-(void)accountEnabled:(id)arg1 onService:(id)arg2 ;
-(void)accountDisabled:(id)arg1 onService:(id)arg2 ;
-(void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3 ;
-(id)accountWithUniqueID:(id)arg1 ;
-(id)initWithService:(id)arg1 delegateContext:(id)arg2 ;
-(id)accountWithLoginID:(id)arg1 service:(id)arg2 ;
-(void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(void)_loadCachedAccounts;
-(void)_updateLocalAccountVisibility;
-(void)_loadCachedAccountsWithDictionaries:(id)arg1 ;
-(void)_updateDelegatesWithOldAccounts:(id)arg1 newAccounts:(id)arg2 ;
-(NSSet *)internalAccounts;
-(void)_setupAccountWithLoginID:(id)arg1 accountConfig:(id)arg2 authToken:(id)arg3 password:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

