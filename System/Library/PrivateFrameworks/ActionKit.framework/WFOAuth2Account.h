/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFAccount.h>

@class WFOAuth2Credential;

@interface WFOAuth2Account : WFAccount {

	WFOAuth2Credential* _credential;

}

@property (nonatomic,copy) WFOAuth2Credential * credential;              //@synthesize credential=_credential - In the implementation block
+(id)clientID;
+(id)responseType;
+(id)scopes;
+(id)sessionManager;
+(id)clientSecret;
+(id)redirectURI;
+(id)migrate:(id)arg1 ;
+(id)accountWithCredential:(id)arg1 ;
-(BOOL)isValid;
-(WFOAuth2Credential *)credential;
-(void)setCredential:(WFOAuth2Credential *)arg1 ;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
@end

