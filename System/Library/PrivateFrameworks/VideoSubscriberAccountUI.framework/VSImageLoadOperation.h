/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSItemProvider, VSAuditToken, VSOptional, NSURLSessionTask;

@interface VSImageLoadOperation : VSAsyncOperation {

	NSItemProvider* _itemProvider;
	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSURLSessionTask* _task;
	CGSize _preferredImageSize;

}

@property (nonatomic,retain) VSOptional * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                      //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,readonly) CGSize preferredImageSize;                  //@synthesize preferredImageSize=_preferredImageSize - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
-(id)init;
-(void)cancel;
-(VSAuditToken *)auditToken;
-(NSItemProvider *)itemProvider;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(void)executionDidBegin;
-(CGSize)preferredImageSize;
-(id)initWithItemProvider:(id)arg1 preferredImageSize:(CGSize)arg2 ;
-(void)_finishWithImageData:(id)arg1 orError:(id)arg2 ;
-(void)_beginFetchingDataFromURL:(id)arg1 ;
@end

