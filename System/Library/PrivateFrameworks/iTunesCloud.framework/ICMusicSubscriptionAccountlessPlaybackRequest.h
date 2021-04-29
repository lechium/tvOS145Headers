/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionAccountlessPlaybackRequest : NSObject {

	NSString* _assetSourceStorefrontID;
	ICStoreRequestContext* _requestContext;
	long long _qualityOfService;
	long long _storeSubscriptionAdamID;

}

@property (nonatomic,copy) NSString * assetSourceStorefrontID;                           //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                 //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) long long storeSubscriptionAdamID;                        //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(id)performWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 storeSubscriptionAdamID:(long long)arg2 ;
-(NSString *)assetSourceStorefrontID;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(long long)storeSubscriptionAdamID;
@end

