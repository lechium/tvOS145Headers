/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WKVideoLayerRemote : CALayer {

	WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter>* _mediaPlayerPrivateRemote;
	RetainPtr<CAContext>* _context;
	unique_ptr<WebCore::Timer, std::__1::default_delete<WebCore::Timer>>* _resolveBoundsTimer;
	BOOL _shouldRestartWhenTimerFires;
	Seconds _delay;
	CGRect _videoLayerFrame;

}

@property (assign,nonatomic) MediaPlayerPrivateRemote* mediaPlayerPrivateRemote; 
@property (assign,nonatomic) CGRect videoLayerFrame;                                          //@synthesize videoLayerFrame=_videoLayerFrame - In the implementation block
-(id)init;
-(void)layoutSublayers;
-(CGRect)videoLayerFrame;
-(void)setVideoLayerFrame:(CGRect)arg1 ;
-(MediaPlayerPrivateRemote*)mediaPlayerPrivateRemote;
-(void)setMediaPlayerPrivateRemote:(MediaPlayerPrivateRemote*)arg1 ;
-(void)resolveBounds;
@end

