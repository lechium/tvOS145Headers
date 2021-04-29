/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSURLProtocolHandler.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>

@class ACAccount, NSMutableDictionary, NSString;

@interface AMSUIPaymentVerificationProtocolHandler : AMSURLProtocolHandler <NSURLSessionDelegate, AMSURLProtocolDelegate> {

	ACAccount* _account;
	NSMutableDictionary* _accountParameters;

}

@property (nonatomic,retain) ACAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountParameters;              //@synthesize accountParameters=_accountParameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_headersFromAccountParameters:(id)arg1 ;
+(id)_headersFromAccount:(id)arg1 ;
+(id)headersFromAccount:(id)arg1 accountParameters:(id)arg2 ;
+(void)_setHeaders:(id)arg1 on:(id)arg2 ;
+(id)requestAddingHeaders:(id)arg1 to:(id)arg2 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)accountParameters;
-(id)initWithAccount:(id)arg1 accountParameters:(id)arg2 ;
-(void)setAccountParameters:(NSMutableDictionary *)arg1 ;
@end

