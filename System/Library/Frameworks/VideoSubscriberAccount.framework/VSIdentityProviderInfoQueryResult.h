/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VSIdentityProvider, NSString;

@interface VSIdentityProviderInfoQueryResult : NSObject {

	VSIdentityProvider* _identityProvider;
	NSString* _designatedAppBundleIdentifier;

}

@property (nonatomic,copy) VSIdentityProvider * identityProvider;                 //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) NSString * designatedAppBundleIdentifier;              //@synthesize designatedAppBundleIdentifier=_designatedAppBundleIdentifier - In the implementation block
-(id)description;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(NSString *)designatedAppBundleIdentifier;
-(void)setDesignatedAppBundleIdentifier:(NSString *)arg1 ;
@end
