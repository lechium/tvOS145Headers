/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlaybackProgressAnimation.h>

@protocol TVConstantRatePlaybackProgressAnimationDelegate;
@interface _TVPConstantRatePlaybackProgressAnimation : TVPlaybackProgressAnimation {

	id<TVConstantRatePlaybackProgressAnimationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVConstantRatePlaybackProgressAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TVConstantRatePlaybackProgressAnimationDelegate>)delegate;
-(void)setDelegate:(id<TVConstantRatePlaybackProgressAnimationDelegate>)arg1 ;
-(BOOL)isFinished;
-(double)currentPlaybackTime;
@end

