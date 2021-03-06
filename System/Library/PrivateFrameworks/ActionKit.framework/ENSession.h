/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ENLinkedNoteStoreClientDelegate.h>
#import <libobjc.A.dylib/ENBusinessNoteStoreClientDelegate.h>
#import <libobjc.A.dylib/ENAuthenticatorDelegate.h>

@protocol ENSDKLogging, ENAuthenticator, OS_dispatch_queue;
@class NSString, EDAMUser, ENPreferencesStore, ENUserStoreClient, ENNoteStoreClient, ENBusinessNoteStoreClient, ENAuthCache, NSArray, NSDate, NSObject;

@interface ENSession : NSObject <ENLinkedNoteStoreClientDelegate, ENBusinessNoteStoreClientDelegate, ENAuthenticatorDelegate> {

	BOOL _isAuthenticated;
	BOOL _supportsLinkedAppNotebook;
	id<ENSDKLogging> _logger;
	NSString* _sourceApplication;
	long long _personalUploadUsage;
	long long _personalUploadLimit;
	long long _businessUploadUsage;
	long long _businessUploadLimit;
	id<ENAuthenticator> _authenticator;
	/*^block*/id _authenticationCompletion;
	NSString* _sessionHost;
	EDAMUser* _user;
	NSString* _primaryAuthenticationToken;
	EDAMUser* _businessUser;
	ENPreferencesStore* _preferences;
	ENUserStoreClient* _userStore;
	ENNoteStoreClient* _primaryNoteStore;
	ENBusinessNoteStoreClient* _businessNoteStore;
	ENAuthCache* _authCache;
	NSArray* _notebooksCache;
	NSDate* _notebooksCacheDate;
	NSObject*<OS_dispatch_queue> _thumbnailQueue;
	ENUserStoreClient* _userStorePendingRevocation;

}

@property (assign,nonatomic) BOOL supportsLinkedAppNotebook;                              //@synthesize supportsLinkedAppNotebook=_supportsLinkedAppNotebook - In the implementation block
@property (nonatomic,retain) EDAMUser * businessUser;                                     //@synthesize businessUser=_businessUser - In the implementation block
@property (nonatomic,retain) ENPreferencesStore * preferences;                            //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) ENUserStoreClient * userStore;                               //@synthesize userStore=_userStore - In the implementation block
@property (nonatomic,retain) ENNoteStoreClient * primaryNoteStore;                        //@synthesize primaryNoteStore=_primaryNoteStore - In the implementation block
@property (nonatomic,retain) ENBusinessNoteStoreClient * businessNoteStore;               //@synthesize businessNoteStore=_businessNoteStore - In the implementation block
@property (nonatomic,retain) ENAuthCache * authCache;                                     //@synthesize authCache=_authCache - In the implementation block
@property (nonatomic,retain) NSArray * notebooksCache;                                    //@synthesize notebooksCache=_notebooksCache - In the implementation block
@property (nonatomic,retain) NSDate * notebooksCacheDate;                                 //@synthesize notebooksCacheDate=_notebooksCacheDate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> thumbnailQueue;                 //@synthesize thumbnailQueue=_thumbnailQueue - In the implementation block
@property (nonatomic,retain) ENUserStoreClient * userStorePendingRevocation;              //@synthesize userStorePendingRevocation=_userStorePendingRevocation - In the implementation block
@property (assign,nonatomic) long long personalUploadUsage;                               //@synthesize personalUploadUsage=_personalUploadUsage - In the implementation block
@property (assign,nonatomic) long long personalUploadLimit;                               //@synthesize personalUploadLimit=_personalUploadLimit - In the implementation block
@property (assign,nonatomic) long long businessUploadUsage;                               //@synthesize businessUploadUsage=_businessUploadUsage - In the implementation block
@property (assign,nonatomic) long long businessUploadLimit;                               //@synthesize businessUploadLimit=_businessUploadLimit - In the implementation block
@property (nonatomic,retain) id<ENSDKLogging> logger;                                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) NSString * sourceApplication;                                  //@synthesize sourceApplication=_sourceApplication - In the implementation block
@property (assign,nonatomic) BOOL isAuthenticated;                                        //@synthesize isAuthenticated=_isAuthenticated - In the implementation block
@property (nonatomic,readonly) BOOL isAuthenticationInProgress; 
@property (nonatomic,readonly) BOOL isPremiumUser; 
@property (nonatomic,readonly) BOOL isBusinessUser; 
@property (nonatomic,readonly) NSString * userDisplayName; 
@property (nonatomic,readonly) NSString * businessDisplayName; 
@property (nonatomic,retain) id<ENAuthenticator> authenticator;                           //@synthesize authenticator=_authenticator - In the implementation block
@property (nonatomic,copy) id authenticationCompletion;                                   //@synthesize authenticationCompletion=_authenticationCompletion - In the implementation block
@property (nonatomic,copy) NSString * sessionHost;                                        //@synthesize sessionHost=_sessionHost - In the implementation block
@property (nonatomic,retain) EDAMUser * user;                                             //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * primaryAuthenticationToken;                         //@synthesize primaryAuthenticationToken=_primaryAuthenticationToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
+(id)consumerSecret;
+(id)consumerKey;
+(id)keychainAccessGroup;
+(BOOL)checkSharedSessionSettings;
+(void)setSharedSessionConsumerKey:(id)arg1 consumerSecret:(id)arg2 optionalHost:(id)arg3 ;
+(void)setSharedSessionDeveloperToken:(id)arg1 noteStoreUrl:(id)arg2 ;
+(void)setDisableRefreshingNotebooksCacheOnLaunch:(BOOL)arg1 ;
+(void)setSecurityApplicationGroupIdentifier:(id)arg1 ;
+(void)setKeychainGroup:(id)arg1 ;
+(id)sessionHostOverride;
+(id)developerToken;
+(id)bundleSeedID;
-(id)init;
-(void)dealloc;
-(EDAMUser *)user;
-(id<ENAuthenticator>)authenticator;
-(void)setAuthenticator:(id<ENAuthenticator>)arg1 ;
-(void)setUser:(EDAMUser *)arg1 ;
-(id<ENSDKLogging>)logger;
-(BOOL)isAuthenticated;
-(ENPreferencesStore *)preferences;
-(void)setPreferences:(ENPreferencesStore *)arg1 ;
-(NSString *)sourceApplication;
-(void)setSourceApplication:(NSString *)arg1 ;
-(int)userID;
-(void)setLogger:(id<ENSDKLogging>)arg1 ;
-(void)startup;
-(void)setSessionHost:(NSString *)arg1 ;
-(NSString *)userDisplayName;
-(id)credentialStore;
-(void)setIsAuthenticated:(BOOL)arg1 ;
-(BOOL)handleOpenURL:(id)arg1 ;
-(void)addCredentials:(id)arg1 ;
-(id)credentialsForHost:(id)arg1 ;
-(id)userStoreUrl;
-(id)userStoreClientForBootstrapping;
-(void)authenticatorDidAuthenticateWithCredentials:(id)arg1 authInfo:(id)arg2 ;
-(void)authenticatorDidFailWithError:(id)arg1 ;
-(id)noteStoreUrlForBusinessStoreClient:(id)arg1 ;
-(id)authenticationTokenForBusinessStoreClient:(id)arg1 ;
-(id)authenticationTokenForLinkedNotebookRef:(id)arg1 ;
-(void)selectInitialSessionHost;
-(void)performPostAuthentication;
-(void)refreshUploadUsage;
-(void)completeAuthenticationWithError:(id)arg1 ;
-(BOOL)isAuthenticationInProgress;
-(BOOL)isPremiumUser;
-(BOOL)isBusinessUser;
-(NSString *)businessDisplayName;
-(BOOL)appNotebookIsLinked;
-(void)unauthenticate;
-(void)unauthenticateWithoutRevokingAccessToken;
-(void)unauthenticateAndRevokeAccessToken:(BOOL)arg1 ;
-(void)listNotebooksWithCompletion:(/*^block*/id)arg1 ;
-(void)listWritableNotebooksWithCompletion:(/*^block*/id)arg1 ;
-(void)listNotebooks_listNotebooksWithContext:(id)arg1 ;
-(void)listNotebooks_listSharedNotebooksWithContext:(id)arg1 ;
-(void)listNotebooks_listLinkedNotebooksWithContext:(id)arg1 ;
-(void)listNotebooks_fetchSharedBusinessNotebooksWithContext:(id)arg1 ;
-(void)listNotebooks_fetchBusinessNotebooksWithContext:(id)arg1 ;
-(void)listNotebooks_processBusinessNotebooksWithContext:(id)arg1 ;
-(void)listNotebooks_fetchSharedNotebooksWithContext:(id)arg1 ;
-(void)listNotebooks_completePendingSharedNotebookWithContext:(id)arg1 ;
-(void)listNotebooks_processSharedNotebooksWithContext:(id)arg1 ;
-(void)listNotebooks_prepareResultsWithContext:(id)arg1 ;
-(void)listNotebooks_completeWithContext:(id)arg1 error:(id)arg2 ;
-(void)listNotebooks_cleanCache;
-(void)uploadNote:(id)arg1 notebook:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)uploadNote:(id)arg1 policy:(long long)arg2 toNotebook:(id)arg3 orReplaceNote:(id)arg4 progress:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)uploadNote_determineDestinationWithContext:(id)arg1 ;
-(void)uploadNote_updateWithContext:(id)arg1 ;
-(void)uploadNote_findLinkedAppNotebookWithContext:(id)arg1 ;
-(void)uploadNote_findSharedAppNotebookWithContext:(id)arg1 ;
-(void)uploadNote_createWithContext:(id)arg1 ;
-(void)uploadNote_completeWithContext:(id)arg1 error:(id)arg2 ;
-(void)shareNote:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteNote:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)findNotesWithSearch:(id)arg1 inNotebook:(id)arg2 orScope:(unsigned long long)arg3 sortOrder:(unsigned long long)arg4 maxResults:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)findNotes_listNotebooksWithContext:(id)arg1 ;
-(void)findNotes_findInPersonalScopeWithContext:(id)arg1 ;
-(void)findNotes_findInBusinessScopeWithContext:(id)arg1 ;
-(void)findNotes_findInLinkedScopeWithContext:(id)arg1 ;
-(void)findNotes_nextFindInLinkedScopeWithContext:(id)arg1 ;
-(void)findNotes_processResultsWithContext:(id)arg1 ;
-(void)findNotes_completeWithContext:(id)arg1 error:(id)arg2 ;
-(void)downloadNote:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)downloadThumbnailForNote:(id)arg1 maxDimension:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isErrorDueToRestrictedAuth:(id)arg1 ;
-(void)saveCredentialStore:(id)arg1 ;
-(id)primaryCredentials;
-(id)validBusinessAuthenticationResult;
-(ENAuthCache *)authCache;
-(void)notifyAuthenticationChanged;
-(ENUserStoreClient *)userStore;
-(ENNoteStoreClient *)primaryNoteStore;
-(ENBusinessNoteStoreClient *)businessNoteStore;
-(id)noteStoreForLinkedNotebook:(id)arg1 ;
-(id)noteStoreForNoteRef:(id)arg1 ;
-(id)noteStoreForNotebook:(id)arg1 ;
-(id)shardIdForNoteRef:(id)arg1 ;
-(id)authenticationTokenForNoteRef:(id)arg1 ;
-(id)currentProfileName;
-(void)setCurrentProfileNameFromHost:(id)arg1 ;
-(void)storeClientFailedAuthentication:(id)arg1 ;
-(long long)personalUploadUsage;
-(void)setPersonalUploadUsage:(long long)arg1 ;
-(long long)personalUploadLimit;
-(void)setPersonalUploadLimit:(long long)arg1 ;
-(long long)businessUploadUsage;
-(void)setBusinessUploadUsage:(long long)arg1 ;
-(long long)businessUploadLimit;
-(void)setBusinessUploadLimit:(long long)arg1 ;
-(id)authenticationCompletion;
-(void)setAuthenticationCompletion:(id)arg1 ;
-(NSString *)sessionHost;
-(NSString *)primaryAuthenticationToken;
-(void)setPrimaryAuthenticationToken:(NSString *)arg1 ;
-(BOOL)supportsLinkedAppNotebook;
-(void)setSupportsLinkedAppNotebook:(BOOL)arg1 ;
-(EDAMUser *)businessUser;
-(void)setBusinessUser:(EDAMUser *)arg1 ;
-(void)setUserStore:(ENUserStoreClient *)arg1 ;
-(void)setPrimaryNoteStore:(ENNoteStoreClient *)arg1 ;
-(void)setBusinessNoteStore:(ENBusinessNoteStoreClient *)arg1 ;
-(void)setAuthCache:(ENAuthCache *)arg1 ;
-(NSArray *)notebooksCache;
-(void)setNotebooksCache:(NSArray *)arg1 ;
-(NSDate *)notebooksCacheDate;
-(void)setNotebooksCacheDate:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_queue>)thumbnailQueue;
-(void)setThumbnailQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ENUserStoreClient *)userStorePendingRevocation;
-(void)setUserStorePendingRevocation:(ENUserStoreClient *)arg1 ;
@end

