/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShareTokenOperation : BROperation {

	NSURL* _fileURL;
	/*^block*/id _shareTokenCompletionBlock;
	/*^block*/id _shareAndBaseTokenCompletionBlock;

}

@property (copy) id shareTokenCompletionBlock;                     //@synthesize shareTokenCompletionBlock=_shareTokenCompletionBlock - In the implementation block
@property (copy) id shareAndBaseTokenCompletionBlock;              //@synthesize shareAndBaseTokenCompletionBlock=_shareAndBaseTokenCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)shareTokenCompletionBlock;
-(void)setShareTokenCompletionBlock:(id)arg1 ;
-(id)shareAndBaseTokenCompletionBlock;
-(void)setShareAndBaseTokenCompletionBlock:(id)arg1 ;
@end

