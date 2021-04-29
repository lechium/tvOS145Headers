/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AMSURLSession;


@protocol AMSURLHandling <NSObject>
@property (assign,nonatomic,__weak) AMSURLSession * session; 
@required
-(AMSURLSession *)session;
-(void)setSession:(id)arg1;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4;
-(id)handleResponse:(id)arg1 task:(id)arg2;
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
-(id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3;
-(void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3;

@end

