/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIImageLoader.h>

@class NSURLRequest, NSURLSession, NSURLSessionTask;

@interface _UINSURLRequestImageLoader : _UIImageLoader {

	NSURLRequest* _request;
	NSURLSession* _session;
	NSURLSessionTask* _task;

}
-(id)_error;
-(id)initWithURLRequest:(id)arg1 session:(id)arg2 ;
-(void)_really_loadImage:(/*^block*/id)arg1 ;
-(BOOL)_really_cancel;
@end

