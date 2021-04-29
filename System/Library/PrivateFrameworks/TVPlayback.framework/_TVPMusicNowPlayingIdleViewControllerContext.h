/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPMediaItem;
@class UIViewController;

@interface _TVPMusicNowPlayingIdleViewControllerContext : NSObject {

	BOOL _finished;
	id<TVPMediaItem> _mediaItem;
	UIViewController* _idleViewController;

}

@property (nonatomic,readonly) id<TVPMediaItem> mediaItem;                         //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) UIViewController * idleViewController;              //@synthesize idleViewController=_idleViewController - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                    //@synthesize finished=_finished - In the implementation block
-(BOOL)isFinished;
-(id<TVPMediaItem>)mediaItem;
-(id)initWithMediaItem:(id)arg1 ;
-(void)finishWithIdleViewController:(id)arg1 ;
-(UIViewController *)idleViewController;
@end

