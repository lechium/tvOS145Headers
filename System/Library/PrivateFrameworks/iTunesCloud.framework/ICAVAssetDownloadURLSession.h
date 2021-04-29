/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICURLSession.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegate.h>

@class NSString;

@interface ICAVAssetDownloadURLSession : ICURLSession <AVAssetDownloadDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_IC20)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_IC20)arg5 forMediaSelection:(id)arg6 ;
-(id)_createURLSessionWithConfiguration:(id)arg1 ;
-(id)_createURLSessionTaskForRequest:(id)arg1 usingSession:(id)arg2 ;
-(void)enqueueAVDownloadRequest:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enqueueAVDownloadRequest:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enqueueAggregateAssetDownloadRequest:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enqueueAggregateAssetDownloadRequest:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 resourceLoaderDelegate:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)enqueueAggregateAssetDownloadRequest:(id)arg1 toDestination:(id)arg2 withAVURLAsset:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end
