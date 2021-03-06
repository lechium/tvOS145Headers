/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class NSString, NSError, TVHKMediaLibrarySessionState, TVHKMediaLibraryRequestSession, NSOperationQueue;

@interface TVHKKeybagSynchronizeOperation : TVHKAsynchronousOperation {

	BOOL _useTokenEncryption;
	BOOL _success;
	unsigned _fairPlayContextID;
	NSString* _mediaServerName;
	NSError* _error;
	NSString* _keybagPath;
	TVHKMediaLibrarySessionState* _sessionState;
	TVHKMediaLibraryRequestSession* _requestSession;
	NSOperationQueue* _privateOperationQueue;

}

@property (assign,nonatomic) BOOL success;                                                 //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * keybagPath;                                          //@synthesize keybagPath=_keybagPath - In the implementation block
@property (assign,nonatomic) unsigned fairPlayContextID;                                   //@synthesize fairPlayContextID=_fairPlayContextID - In the implementation block
@property (nonatomic,copy) TVHKMediaLibrarySessionState * sessionState;                    //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,retain) TVHKMediaLibraryRequestSession * requestSession;              //@synthesize requestSession=_requestSession - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateOperationQueue;                     //@synthesize privateOperationQueue=_privateOperationQueue - In the implementation block
@property (assign,nonatomic) BOOL useTokenEncryption;                                      //@synthesize useTokenEncryption=_useTokenEncryption - In the implementation block
@property (nonatomic,copy) NSString * mediaServerName;                                     //@synthesize mediaServerName=_mediaServerName - In the implementation block
+(id)new;
+(id)_tokenAuthStateString:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(TVHKMediaLibrarySessionState *)sessionState;
-(void)setSessionState:(TVHKMediaLibrarySessionState *)arg1 ;
-(void)_completeWithError:(id)arg1 ;
-(NSString *)keybagPath;
-(void)setKeybagPath:(NSString *)arg1 ;
-(void)executionDidBegin;
-(unsigned)fairPlayContextID;
-(void)setFairPlayContextID:(unsigned)arg1 ;
-(TVHKMediaLibraryRequestSession *)requestSession;
-(void)setRequestSession:(TVHKMediaLibraryRequestSession *)arg1 ;
-(void)_stopObservingOperationQueue:(id)arg1 ;
-(NSString *)mediaServerName;
-(void)_startAuthorizedAccountsOperation;
-(NSOperationQueue *)privateOperationQueue;
-(id)_keybagAccountsWithAuthorizedAccounts:(id)arg1 ;
-(void)_fetchTokenWithKeybagAccount:(id)arg1 ;
-(void)_authorizeWithKeybagAccount:(id)arg1 tokenData:(id)arg2 ;
-(void)_startObservingOperationQueue:(id)arg1 ;
-(BOOL)useTokenEncryption;
-(id)_localKeybagUserIdentifiers;
-(id)_keybagAccountForUserIdentifier:(id)arg1 keybagAccounts:(id)arg2 ;
-(unsigned long long)_localKeybagStateForUserIdentifier:(id)arg1 keyList:(id)arg2 ;
-(id)initWithKeybagPath:(id)arg1 sessionState:(id)arg2 requestSession:(id)arg3 ;
-(void)setUseTokenEncryption:(BOOL)arg1 ;
-(void)setMediaServerName:(NSString *)arg1 ;
-(void)setPrivateOperationQueue:(NSOperationQueue *)arg1 ;
@end

