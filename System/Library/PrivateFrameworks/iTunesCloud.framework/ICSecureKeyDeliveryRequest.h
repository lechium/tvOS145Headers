/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, ICRequestContext, NSNumber;

@interface ICSecureKeyDeliveryRequest : NSObject <NSCopying> {

	BOOL _skippedRentalCheckout;
	BOOL _ITunesStoreRequest;
	BOOL _shouldIncludeDeviceGUID;
	BOOL _isOfflineDownload;
	NSURL* _certificateURL;
	NSString* _contentURI;
	NSURL* _keyServerURL;
	long long _leaseActionType;
	ICRequestContext* _requestContext;
	long long _rentalID;
	long long _qualityOfService;
	/*^block*/id _serverPlaybackContextDataCreationHandler;
	/*^block*/id _asyncServerPlaybackContextDataCreationHandler;
	long long _requestProtocolType;
	NSNumber* _adamID;

}

@property (nonatomic,copy) NSURL * certificateURL;                                             //@synthesize certificateURL=_certificateURL - In the implementation block
@property (nonatomic,copy) NSString * contentURI;                                              //@synthesize contentURI=_contentURI - In the implementation block
@property (nonatomic,copy) NSURL * keyServerURL;                                               //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (assign,nonatomic) long long leaseActionType;                                        //@synthesize leaseActionType=_leaseActionType - In the implementation block
@property (nonatomic,copy) ICRequestContext * requestContext;                                  //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) long long rentalID;                                               //@synthesize rentalID=_rentalID - In the implementation block
@property (assign,nonatomic) BOOL skippedRentalCheckout;                                       //@synthesize skippedRentalCheckout=_skippedRentalCheckout - In the implementation block
@property (assign,getter=isITunesStoreRequest,nonatomic) BOOL ITunesStoreRequest;              //@synthesize ITunesStoreRequest=_ITunesStoreRequest - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                       //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) id serverPlaybackContextDataCreationHandler;                        //@synthesize serverPlaybackContextDataCreationHandler=_serverPlaybackContextDataCreationHandler - In the implementation block
@property (nonatomic,copy) id asyncServerPlaybackContextDataCreationHandler;                   //@synthesize asyncServerPlaybackContextDataCreationHandler=_asyncServerPlaybackContextDataCreationHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeDeviceGUID;                                     //@synthesize shouldIncludeDeviceGUID=_shouldIncludeDeviceGUID - In the implementation block
@property (assign,nonatomic) long long requestProtocolType;                                    //@synthesize requestProtocolType=_requestProtocolType - In the implementation block
@property (assign,nonatomic) BOOL isOfflineDownload;                                           //@synthesize isOfflineDownload=_isOfflineDownload - In the implementation block
@property (nonatomic,copy) NSNumber * adamID;                                                  //@synthesize adamID=_adamID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(ICRequestContext *)requestContext;
-(void)setRequestContext:(ICRequestContext *)arg1 ;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(void)setITunesStoreRequest:(BOOL)arg1 ;
-(long long)rentalID;
-(void)setRentalID:(long long)arg1 ;
-(BOOL)skippedRentalCheckout;
-(NSURL *)certificateURL;
-(NSURL *)keyServerURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(void)setKeyServerURL:(NSURL *)arg1 ;
-(BOOL)isITunesStoreRequest;
-(void)setSkippedRentalCheckout:(BOOL)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)configureUsingAssetResourceLoadingRequest:(id)arg1 ;
-(void)configureUsingContentKeyRequest:(id)arg1 ;
-(NSString *)contentURI;
-(void)setContentURI:(NSString *)arg1 ;
-(long long)leaseActionType;
-(void)setLeaseActionType:(long long)arg1 ;
-(id)serverPlaybackContextDataCreationHandler;
-(void)setServerPlaybackContextDataCreationHandler:(id)arg1 ;
-(id)asyncServerPlaybackContextDataCreationHandler;
-(void)setAsyncServerPlaybackContextDataCreationHandler:(id)arg1 ;
-(BOOL)shouldIncludeDeviceGUID;
-(void)setShouldIncludeDeviceGUID:(BOOL)arg1 ;
-(long long)requestProtocolType;
-(void)setRequestProtocolType:(long long)arg1 ;
-(BOOL)isOfflineDownload;
-(void)setIsOfflineDownload:(BOOL)arg1 ;
@end

