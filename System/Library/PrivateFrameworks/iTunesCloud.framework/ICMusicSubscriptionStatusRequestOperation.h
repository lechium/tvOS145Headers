/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation {

	BOOL _allowsFuseHeaderEnrichment;
	ICMusicSubscriptionStatusRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICMusicSubscriptionStatusRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL allowsFuseHeaderEnrichment;                                //@synthesize allowsFuseHeaderEnrichment=_allowsFuseHeaderEnrichment - In the implementation block
@property (nonatomic,copy) id responseHandler;                                               //@synthesize responseHandler=_responseHandler - In the implementation block
-(ICMusicSubscriptionStatusRequest *)request;
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)responseHandler;
-(void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2 ;
-(BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1 ;
-(BOOL)allowsFuseHeaderEnrichment;
-(void)setAllowsFuseHeaderEnrichment:(BOOL)arg1 ;
@end

