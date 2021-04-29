/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSString;

@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest {

	BOOL _delegatedPlayback;
	NSString* _assetSourceStorefrontID;
	NSString* _cloudUniversalLibraryID;
	long long _requestType;
	unsigned long long _storeCloudID;
	long long _storePurchasedAdamID;
	long long _storeSubscriptionAdamID;

}

@property (nonatomic,copy) NSString * assetSourceStorefrontID;                               //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (nonatomic,copy) NSString * cloudUniversalLibraryID;                               //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
@property (assign,getter=isDelegatedPlayback,nonatomic) BOOL delegatedPlayback;              //@synthesize delegatedPlayback=_delegatedPlayback - In the implementation block
@property (assign,nonatomic) long long requestType;                                          //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long storeCloudID;                                //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (assign,nonatomic) long long storePurchasedAdamID;                                 //@synthesize storePurchasedAdamID=_storePurchasedAdamID - In the implementation block
@property (assign,nonatomic) long long storeSubscriptionAdamID;                              //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
-(long long)requestType;
-(void)setRequestType:(long long)arg1 ;
-(NSString *)assetSourceStorefrontID;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(long long)storeSubscriptionAdamID;
-(BOOL)isDelegatedPlayback;
-(void)setDelegatedPlayback:(BOOL)arg1 ;
-(unsigned long long)storeCloudID;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(long long)storePurchasedAdamID;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

