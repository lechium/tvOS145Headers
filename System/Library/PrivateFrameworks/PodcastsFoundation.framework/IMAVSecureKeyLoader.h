/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVContentKeySessionDelegate.h>

@protocol IMAVSecureKeyLoaderDelegate, MTSecureKeyRequestHandler, NSURLSessionDelegateAMSURLProtocolDelegate, MTSecureKeyRequestStorage;
@class AVContentKeySession, AVURLAsset, NSString, MTContentKeyRequest, NSData;

@interface IMAVSecureKeyLoader : NSObject <AVContentKeySessionDelegate> {

	BOOL _isRenewal;
	id<IMAVSecureKeyLoaderDelegate> _delegate;
	AVContentKeySession* _contentKeySession;
	AVURLAsset* _recipient;
	NSString* _contentAdamId;
	/*^block*/id _pendingCompletion;
	id<MTSecureKeyRequestHandler> _secureKeyRequestHandler;
	id<NSURLSessionDelegate><AMSURLProtocolDelegate> _urlProtocolDelegate;
	id<MTSecureKeyRequestStorage> _secureKeyRequestStorage;
	unsigned long long _useCase;
	MTContentKeyRequest* _savedRequestToUseForStopping;
	NSData* _savedRequestDataToUseForStopping;

}

@property (nonatomic,retain) AVContentKeySession * contentKeySession;                                           //@synthesize contentKeySession=_contentKeySession - In the implementation block
@property (nonatomic,retain) AVURLAsset * recipient;                                                            //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,retain) NSString * contentAdamId;                                                          //@synthesize contentAdamId=_contentAdamId - In the implementation block
@property (nonatomic,copy) id pendingCompletion;                                                                //@synthesize pendingCompletion=_pendingCompletion - In the implementation block
@property (assign,nonatomic) BOOL isRenewal;                                                                    //@synthesize isRenewal=_isRenewal - In the implementation block
@property (nonatomic,retain) id<MTSecureKeyRequestHandler> secureKeyRequestHandler;                             //@synthesize secureKeyRequestHandler=_secureKeyRequestHandler - In the implementation block
@property (nonatomic,retain) id<NSURLSessionDelegate><AMSURLProtocolDelegate> urlProtocolDelegate;              //@synthesize urlProtocolDelegate=_urlProtocolDelegate - In the implementation block
@property (nonatomic,retain) id<MTSecureKeyRequestStorage> secureKeyRequestStorage;                             //@synthesize secureKeyRequestStorage=_secureKeyRequestStorage - In the implementation block
@property (assign,nonatomic) unsigned long long useCase;                                                        //@synthesize useCase=_useCase - In the implementation block
@property (nonatomic,retain) MTContentKeyRequest * savedRequestToUseForStopping;                                //@synthesize savedRequestToUseForStopping=_savedRequestToUseForStopping - In the implementation block
@property (nonatomic,retain) NSData * savedRequestDataToUseForStopping;                                         //@synthesize savedRequestDataToUseForStopping=_savedRequestDataToUseForStopping - In the implementation block
@property (assign,nonatomic,__weak) id<IMAVSecureKeyLoaderDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IMAVSecureKeyLoaderDelegate>)delegate;
-(void)setDelegate:(id<IMAVSecureKeyLoaderDelegate>)arg1 ;
-(void)invalidateAndCancel;
-(void)setRecipient:(AVURLAsset *)arg1 ;
-(AVURLAsset *)recipient;
-(id)pendingCompletion;
-(void)setPendingCompletion:(id)arg1 ;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3 ;
-(void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2 ;
-(id)initWithRecipient:(id)arg1 useCase:(unsigned long long)arg2 urlProtocolDelegate:(id)arg3 ;
-(void)processContentKeyRequestWithKeyIdentifier:(id)arg1 contentAdamId:(id)arg2 isRenewal:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(AVContentKeySession *)contentKeySession;
-(NSString *)contentAdamId;
-(void)setContentAdamId:(NSString *)arg1 ;
-(void)setUrlProtocolDelegate:(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)arg1 ;
-(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)urlProtocolDelegate;
-(void)setSecureKeyRequestHandler:(id<MTSecureKeyRequestHandler>)arg1 ;
-(void)setSecureKeyRequestStorage:(id<MTSecureKeyRequestStorage>)arg1 ;
-(void)setUseCase:(unsigned long long)arg1 ;
-(void)setContentKeySession:(AVContentKeySession *)arg1 ;
-(void)setIsRenewal:(BOOL)arg1 ;
-(void)timeoutKeyRequest;
-(BOOL)_isOfflineAsset;
-(MTContentKeyRequest *)savedRequestToUseForStopping;
-(NSData *)savedRequestDataToUseForStopping;
-(id<MTSecureKeyRequestHandler>)secureKeyRequestHandler;
-(unsigned long long)useCase;
-(id<MTSecureKeyRequestStorage>)secureKeyRequestStorage;
-(void)setSavedRequestToUseForStopping:(MTContentKeyRequest *)arg1 ;
-(void)setSavedRequestDataToUseForStopping:(NSData *)arg1 ;
-(void)finishContentKeyRequest:(id)arg1 withResponse:(id)arg2 ;
-(void)processContentKeyRequest:(id)arg1 requestType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isRenewal;
-(void)processContentKeyRequestWithKeyRequestData:(id)arg1 isRenewal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendStopRequestForStreamingLicenseIfNecessary;
-(void)securelyInvalidateOfflineDataForRequests:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

