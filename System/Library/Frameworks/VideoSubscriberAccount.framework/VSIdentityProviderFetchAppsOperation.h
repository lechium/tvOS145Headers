/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, VSAuditToken, NSOperationQueue;

@interface VSIdentityProviderFetchAppsOperation : VSAsyncOperation {

	VSOptional* _identityProviderID;
	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) VSOptional * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSOptional * identityProviderID;              //@synthesize identityProviderID=_identityProviderID - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
-(id)init;
-(void)cancel;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)executionDidBegin;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)setIdentityProviderID:(VSOptional *)arg1 ;
-(VSOptional *)identityProviderID;
@end

