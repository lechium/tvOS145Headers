/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSAuditToken, NSArray, VSOptional, NSOperationQueue, VSDevice;

@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation {

	VSAuditToken* _auditToken;
	NSArray* _applicationAccountProviders;
	VSOptional* _result;
	NSOperationQueue* _subqueue;
	VSDevice* _currentDevice;

}

@property (nonatomic,retain) VSOptional * result;                              //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperationQueue * subqueue;                      //@synthesize subqueue=_subqueue - In the implementation block
@property (nonatomic,retain) VSDevice * currentDevice;                         //@synthesize currentDevice=_currentDevice - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                          //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy) NSArray * applicationAccountProviders;              //@synthesize applicationAccountProviders=_applicationAccountProviders - In the implementation block
-(id)init;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(VSDevice *)currentDevice;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(void)setCurrentDevice:(VSDevice *)arg1 ;
-(void)executionDidBegin;
-(NSArray *)applicationAccountProviders;
-(void)setApplicationAccountProviders:(NSArray *)arg1 ;
-(NSOperationQueue *)subqueue;
-(void)setSubqueue:(NSOperationQueue *)arg1 ;
@end

