/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@protocol UIKBKeyViewContentView;
@class UIView, UIKBBackdropView;

@interface UIKBViewBackedKeyView : UIKBKeyView {

	UIView*<UIKBKeyViewContentView> _contentView;
	UIKBBackdropView* _backdropView;

}

@property (nonatomic,retain) UIKBBackdropView * backdropView;                          //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView*<UIKBKeyViewContentView> contentView;              //@synthesize contentView=_contentView - In the implementation block
-(UIView*<UIKBKeyViewContentView>)contentView;
-(void)setContentView:(UIView*<UIKBKeyViewContentView>)arg1 ;
-(void)layoutSubviews;
-(UIKBBackdropView *)backdropView;
-(void)setBackdropView:(UIKBBackdropView *)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)setDrawFrame:(CGRect)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)renderFlagsForTraits:(id)arg1 ;
-(void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
@end

