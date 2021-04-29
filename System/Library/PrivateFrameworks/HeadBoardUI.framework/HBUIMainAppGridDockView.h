/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class TVSUIOuterShadowView;

@interface HBUIMainAppGridDockView : UICollectionReusableView {

	TVSUIOuterShadowView* _shadowView;

}

@property (nonatomic,readonly) TVSUIOuterShadowView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateLayerBorderWidth;
-(void)_updateShadowViewVisibility;
-(void)_updateIdleModeAttributes;
-(TVSUIOuterShadowView *)shadowView;
@end

