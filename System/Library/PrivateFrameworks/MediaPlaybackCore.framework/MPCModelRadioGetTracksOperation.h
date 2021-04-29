/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class ICPlayActivityController, ICRadioGetTracksRequest, NSString;

@interface MPCModelRadioGetTracksOperation : MPAsyncOperation {

	ICPlayActivityController* _playActivityController;
	ICRadioGetTracksRequest* _request;
	NSString* _siriAssetInfo;
	void* _radioQueueFeederPointerForLogging;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)execute;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)_runStep:(id)arg1 withFinishHandler:(/*^block*/id)arg2 ;
-(id)_cacheTracksForStep:(id)arg1 ;
-(id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3 radioQueueFeeder:(id)arg4 ;
@end
