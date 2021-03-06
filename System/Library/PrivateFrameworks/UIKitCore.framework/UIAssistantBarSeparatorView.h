/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface UIAssistantBarSeparatorView : UIView {

	UIView* _innerSeparatorView;

}

@property (nonatomic,retain) UIView * innerSeparatorView;              //@synthesize innerSeparatorView=_innerSeparatorView - In the implementation block
+(double)preferredWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setInnerSeparatorView:(UIView *)arg1 ;
-(UIView *)innerSeparatorView;
-(BOOL)_usesLightStyle;
-(void)_updateVisualStyle;
@end

