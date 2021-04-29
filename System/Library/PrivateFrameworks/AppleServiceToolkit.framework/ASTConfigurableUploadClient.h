/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/ASTUploadClient.h>

@protocol ASTUploadClientDelegate, NSURLRequestFactory;
@class ASTSession, NSMutableDictionary, NSURLSession, NSString;

@interface ASTConfigurableUploadClient : NSObject <NSURLSessionTaskDelegate, ASTUploadClient> {

	ASTSession* _session;
	id<ASTUploadClientDelegate> _delegate;
	NSMutableDictionary* _taskMap;
	NSURLSession* _urlSession;
	id<NSURLRequestFactory> _urlFactory;

}

@property (__weak) ASTSession * session;                                      //@synthesize session=_session - In the implementation block
@property (__weak) id<ASTUploadClientDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableDictionary * taskMap;                             //@synthesize taskMap=_taskMap - In the implementation block
@property (nonatomic,retain) NSURLSession * urlSession;                       //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) id<NSURLRequestFactory> urlFactory;              //@synthesize urlFactory=_urlFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ASTUploadClientDelegate>)delegate;
-(void)setDelegate:(id<ASTUploadClientDelegate>)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(ASTSession *)session;
-(void)setSession:(ASTSession *)arg1 ;
-(NSURLSession *)urlSession;
-(void)setTaskMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)taskMap;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(id)initWithASTSession:(id)arg1 withURLSession:(id)arg2 withURLRequestFactory:(id)arg3 withDelegate:(id)arg4 ;
-(unsigned long long)queueUploadWithSourceUrl:(id)arg1 ;
-(unsigned long long)queueUploadWithSourceData:(id)arg1 ;
-(id)initWithURLSession:(id)arg1 withURLRequestFactory:(id)arg2 withDelegate:(id)arg3 ;
-(id<NSURLRequestFactory>)urlFactory;
-(void)uploadTaskDidComplete:(unsigned long long)arg1 withResponse:(id)arg2 andError:(id)arg3 ;
-(unsigned long long)uploadWithObject:(id)arg1 ;
-(id)initWithASTSession:(id)arg1 withDelegate:(id)arg2 ;
-(void)cancelUploadWithId:(unsigned long long)arg1 ;
-(void)cancelAll;
-(void)setUrlFactory:(id<NSURLRequestFactory>)arg1 ;
@end

