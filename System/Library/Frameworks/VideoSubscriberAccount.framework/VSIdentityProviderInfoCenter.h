/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@protocol OS_dispatch_queue;
@class VSPreferences, NSObject, NSOperationQueue, VSAccountStore, VSIdentityProvider, NSString, NSError, VSRemoteNotifier;

@interface VSIdentityProviderInfoCenter : NSObject <VSRemoteNotifierDelegate> {

	BOOL _cachedIsSetTopBox;
	BOOL _setupCompleted;
	BOOL _ignoredFirstNotification;
	VSPreferences* _preferences;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSOperationQueue* _privateQueue;
	VSAccountStore* _accountStore;
	VSIdentityProvider* _cachedIdentityProvider;
	NSString* _cachedDesignatedAppBundleIdentifier;
	NSError* _currentError;
	VSRemoteNotifier* _remoteNotifier;

}

@property (nonatomic,retain) VSPreferences * preferences;                                 //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                    //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                             //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSAccountStore * accountStore;                               //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * cachedIdentityProvider;                 //@synthesize cachedIdentityProvider=_cachedIdentityProvider - In the implementation block
@property (nonatomic,retain) NSString * cachedDesignatedAppBundleIdentifier;              //@synthesize cachedDesignatedAppBundleIdentifier=_cachedDesignatedAppBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL cachedIsSetTopBox;                                      //@synthesize cachedIsSetTopBox=_cachedIsSetTopBox - In the implementation block
@property (assign,nonatomic) BOOL setupCompleted;                                         //@synthesize setupCompleted=_setupCompleted - In the implementation block
@property (assign,nonatomic) BOOL ignoredFirstNotification;                               //@synthesize ignoredFirstNotification=_ignoredFirstNotification - In the implementation block
@property (nonatomic,retain) NSError * currentError;                                      //@synthesize currentError=_currentError - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                           //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCenter;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(VSAccountStore *)accountStore;
-(VSPreferences *)preferences;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(NSError *)currentError;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(void)_accountStoreDidChange;
-(VSIdentityProvider *)cachedIdentityProvider;
-(NSString *)cachedDesignatedAppBundleIdentifier;
-(BOOL)setupCompleted;
-(void)setSetupCompleted:(BOOL)arg1 ;
-(void)_refresh:(/*^block*/id)arg1 ;
-(BOOL)ignoredFirstNotification;
-(void)setIgnoredFirstNotification:(BOOL)arg1 ;
-(void)_postdentityProviderInfoDidChangeNotification;
-(void)setCachedIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)setCurrentError:(NSError *)arg1 ;
-(void)setCachedIsSetTopBox:(BOOL)arg1 ;
-(void)setCachedDesignatedAppBundleIdentifier:(NSString *)arg1 ;
-(void)fetchIdentityProviderAppBundleIdFromDeveloperSettings:(/*^block*/id)arg1 ;
-(void)fetchAccountAndIdentityProvider:(/*^block*/id)arg1 ;
-(void)_developerSettingsDidChange;
-(void)enqueueInfoQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)enqueueIdentityProviderAppsQueryWithCompletion:(/*^block*/id)arg1 ;
-(id)_value:(id)arg1 withDefault:(id)arg2 ;
-(BOOL)cachedIsSetTopBox;
@end

