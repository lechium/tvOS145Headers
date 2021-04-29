/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView, UIImageView, UIVisualEffectView;

@interface HBUIMainAppGridTopShelfContainerView : UICollectionReusableView {

	BOOL _snapshotting;
	double _blurFractionComplete;
	UIView* _topShelfContentView;
	unsigned long long _snapshotRequestToken;
	UIImageView* _contentSnapshotOverlayView;
	UIVisualEffectView* _visualEffectView;

}

@property (assign,nonatomic) unsigned long long snapshotRequestToken;                //@synthesize snapshotRequestToken=_snapshotRequestToken - In the implementation block
@property (nonatomic,retain) UIImageView * contentSnapshotOverlayView;               //@synthesize contentSnapshotOverlayView=_contentSnapshotOverlayView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                  //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (getter=isSnapshotting,nonatomic,readonly) BOOL snapshotting;              //@synthesize snapshotting=_snapshotting - In the implementation block
@property (nonatomic,retain) UIView * topShelfContentView;                           //@synthesize topShelfContentView=_topShelfContentView - In the implementation block
@property (assign,nonatomic) double blurFractionComplete;                            //@synthesize blurFractionComplete=_blurFractionComplete - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)_willBeginSystemSnapshot:(id)arg1 ;
-(void)_didCompleteSystemSnapshot:(id)arg1 ;
-(UIView *)topShelfContentView;
-(void)setBlurFractionComplete:(double)arg1 ;
-(BOOL)isSnapshotting;
-(void)setContentSnapshotOverlayView:(UIImageView *)arg1 ;
-(void)_updateBlurState;
-(double)blurFractionComplete;
-(void)setSnapshotRequestToken:(unsigned long long)arg1 ;
-(UIImageView *)contentSnapshotOverlayView;
-(unsigned long long)snapshotRequestToken;
-(void)setTopShelfContentView:(UIView *)arg1 ;
@end

