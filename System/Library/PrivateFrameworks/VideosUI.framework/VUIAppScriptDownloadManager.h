/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLSession, NSMutableDictionary, NSURL, NSURLSessionDataTask;

@interface VUIAppScriptDownloadManager : NSObject {

	NSURLSession* _session;
	NSMutableDictionary* _completionBlocksDict;
	NSURL* _currentURL;
	NSMutableDictionary* _appScriptDict;
	NSURLSessionDataTask* _task;

}

@property (nonatomic,retain) NSURL * currentURL;                               //@synthesize currentURL=_currentURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appScriptDict;              //@synthesize appScriptDict=_appScriptDict - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                      //@synthesize task=_task - In the implementation block
+(id)sharedInstance;
-(id)_init;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setCurrentURL:(NSURL *)arg1 ;
-(void)setAppScriptDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)appScriptDict;
-(NSURL *)currentURL;
-(void)fetchAppJavascript:(id)arg1 cachePolicy:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

