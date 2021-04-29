/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVTertiaryView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLMediaBadgesElement, NSMutableSet, UIImageView;

@interface TVLMediaBadgesView : TVTertiaryView <ATVUpdatable> {

	TVLMediaBadgesElement* _mediaBadgesElement;
	NSMutableSet* _imageProxies;
	UIImageView* _videoFormatImageView;
	UIImageView* _audioFormatImageView;
	UIImageView* _closeCaptionView;

}

@property (nonatomic,retain) TVLMediaBadgesElement * mediaBadgesElement;              //@synthesize mediaBadgesElement=_mediaBadgesElement - In the implementation block
@property (nonatomic,retain) NSMutableSet * imageProxies;                             //@synthesize imageProxies=_imageProxies - In the implementation block
@property (nonatomic,retain) UIImageView * videoFormatImageView;                      //@synthesize videoFormatImageView=_videoFormatImageView - In the implementation block
@property (nonatomic,retain) UIImageView * audioFormatImageView;                      //@synthesize audioFormatImageView=_audioFormatImageView - In the implementation block
@property (nonatomic,retain) UIImageView * closeCaptionView;                          //@synthesize closeCaptionView=_closeCaptionView - In the implementation block
-(NSMutableSet *)imageProxies;
-(void)setImageProxies:(NSMutableSet *)arg1 ;
-(id)initWithMediaBadgesElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)loadImages;
-(TVLMediaBadgesElement *)mediaBadgesElement;
-(void)setMediaBadgesElement:(TVLMediaBadgesElement *)arg1 ;
-(UIImageView *)videoFormatImageView;
-(void)setVideoFormatImageView:(UIImageView *)arg1 ;
-(UIImageView *)audioFormatImageView;
-(void)setAudioFormatImageView:(UIImageView *)arg1 ;
-(UIImageView *)closeCaptionView;
-(void)setCloseCaptionView:(UIImageView *)arg1 ;
@end
