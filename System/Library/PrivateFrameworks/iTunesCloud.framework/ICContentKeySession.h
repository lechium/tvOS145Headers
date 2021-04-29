/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVContentKeySessionDelegate.h>

@protocol ICContentKeyStoreProtocol, OS_dispatch_queue, OS_dispatch_semaphore;
@class NSURL, AVContentKeySession, ICStoreRequestContext, NSNumber, NSObject, NSMutableSet, ICUnfairLock, NSString;

@interface ICContentKeySession : NSObject <AVContentKeySessionDelegate> {

	NSURL* _keyServerURL;
	NSURL* _keyCertificateURL;
	AVContentKeySession* _contentKeySession;
	ICStoreRequestContext* _requestContext;
	NSNumber* _adamID;
	id<ICContentKeyStoreProtocol> _keyStore;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _pendingKeyIdentifiers;
	ICUnfairLock* _lock;
	NSObject*<OS_dispatch_semaphore> _waitForKeysSemaphore;
	BOOL _forceRefresh;
	BOOL _requestOfflineKeys;

}

@property (nonatomic,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) NSURL * keyServerURL;                                    //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (nonatomic,copy) NSURL * keyCertificateURL;                               //@synthesize keyCertificateURL=_keyCertificateURL - In the implementation block
@property (nonatomic,copy) NSNumber * adamID;                                       //@synthesize adamID=_adamID - In the implementation block
@property (assign,nonatomic) BOOL forceRefresh;                                     //@synthesize forceRefresh=_forceRefresh - In the implementation block
@property (assign,nonatomic) BOOL requestOfflineKeys;                               //@synthesize requestOfflineKeys=_requestOfflineKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(ICStoreRequestContext *)requestContext;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(void)removeAsset:(id)arg1 ;
-(NSURL *)keyServerURL;
-(void)setKeyServerURL:(NSURL *)arg1 ;
-(void)addAsset:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 keyStore:(id)arg2 ;
-(void)preloadExistingKeys;
-(void)setForceRefresh:(BOOL)arg1 ;
-(void)setRequestOfflineKeys:(BOOL)arg1 ;
-(void)waitForAllKeysToProcess;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2 ;
-(NSURL *)keyCertificateURL;
-(void)setKeyCertificateURL:(NSURL *)arg1 ;
-(void)processKeyWithIdentifier:(id)arg1 ;
-(void)_performKeyDeliveryRequestForContentKeyRequest:(id)arg1 offlineDownload:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)forceRefresh;
-(BOOL)requestOfflineKeys;
@end
