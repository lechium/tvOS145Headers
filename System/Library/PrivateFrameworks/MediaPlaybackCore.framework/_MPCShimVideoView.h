/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MPCVideoView.h>

@class NSString, AVPlayerLayer;

@interface _MPCShimVideoView : UIView <MPCVideoView> {

	BOOL readyForDisplay;
	NSString* videoGravity;
	AVPlayerLayer* _playerLayer;
	CGSize preferredContentSize;

}

@property (nonatomic,readonly) AVPlayerLayer * playerLayer;                                //@synthesize playerLayer=_playerLayer - In the implementation block
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVideoGravity:(NSString *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(CGSize)preferredContentSize;
-(NSString *)videoGravity;
-(BOOL)isReadyForDisplay;
-(id)initWithPlayerLayer:(id)arg1 ;
@end
