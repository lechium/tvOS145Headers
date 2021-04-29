/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSAuditToken, VSOptional, NSURLSessionTask, NSOperationQueue;

@interface VSVerificationStateResetOperation : VSAsyncOperation {

	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSURLSessionTask* _resetStateTask;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) NSURLSessionTask * resetStateTask;              //@synthesize resetStateTask=_resetStateTask - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSOptional * result;                            //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
-(id)init;
-(void)cancel;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)executionDidBegin;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)setResetStateTask:(NSURLSessionTask *)arg1 ;
-(void)_resetVerificationStateWithURL:(id)arg1 ;
-(NSURLSessionTask *)resetStateTask;
@end
