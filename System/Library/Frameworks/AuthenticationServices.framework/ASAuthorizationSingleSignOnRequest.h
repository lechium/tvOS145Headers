/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthenticationServices/ASAuthorizationOpenIDRequest.h>

@class NSArray;

@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest {

	NSArray* _authorizationOptions;

}

@property (nonatomic,copy) NSArray * authorizationOptions;              //@synthesize authorizationOptions=_authorizationOptions - In the implementation block
-(NSArray *)authorizationOptions;
-(void)setAuthorizationOptions:(NSArray *)arg1 ;
@end

