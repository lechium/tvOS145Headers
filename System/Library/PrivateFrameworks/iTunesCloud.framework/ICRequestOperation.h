/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICAsyncOperation.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSString;

@interface ICRequestOperation : ICAsyncOperation <NSProgressReporting> {

	/*^block*/id _completionHandler;
	NSProgress* _progress;

}

@property (nonatomic,retain) NSProgress * progress;                 //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)performRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performRequestOnOperationQueue:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

