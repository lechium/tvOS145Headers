/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BREvictItemOperation : BROperation {

	unsigned long long _section;
	NSURL* _url;
	/*^block*/id _evictionCompletionBlock;

}

@property (copy) id evictionCompletionBlock;              //@synthesize evictionCompletionBlock=_evictionCompletionBlock - In the implementation block
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setEvictionCompletionBlock:(id)arg1 ;
-(id)evictionCompletionBlock;
@end

