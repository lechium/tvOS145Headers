/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary;

@interface VSIdentityProviderStorefrontParser : NSObject {

	NSArray* _allIdentityProviders;
	NSArray* _allStorefronts;
	NSDictionary* _storefrontsByCountryCode;
	NSDictionary* _providersByStorefront;

}

@property (nonatomic,retain) NSDictionary * storefrontsByCountryCode;                          //@synthesize storefrontsByCountryCode=_storefrontsByCountryCode - In the implementation block
@property (nonatomic,retain) NSDictionary * providersByStorefront;                             //@synthesize providersByStorefront=_providersByStorefront - In the implementation block
@property (nonatomic,copy) NSArray * allIdentityProviders;                                     //@synthesize allIdentityProviders=_allIdentityProviders - In the implementation block
@property (nonatomic,copy) NSArray * allStorefronts;                                           //@synthesize allStorefronts=_allStorefronts - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * identityProvidersByStorefront; 
@property (nonatomic,copy,readonly) NSArray * tvProviderSupportedStorefronts; 
-(id)init;
-(void)setAllIdentityProviders:(NSArray *)arg1 ;
-(NSArray *)allStorefronts;
-(void)setAllStorefronts:(NSArray *)arg1 ;
-(NSDictionary *)identityProvidersByStorefront;
-(NSArray *)tvProviderSupportedStorefronts;
-(NSArray *)allIdentityProviders;
-(void)setStorefrontsByCountryCode:(NSDictionary *)arg1 ;
-(NSDictionary *)storefrontsByCountryCode;
-(void)setProvidersByStorefront:(NSDictionary *)arg1 ;
-(NSDictionary *)providersByStorefront;
-(id)providersForStorefront:(id)arg1 ;
@end
