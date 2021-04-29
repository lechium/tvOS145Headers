/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface VideosUI.VerticalStackView : UIView {

	 platterView;
	 $__lazy_storage_$_expandableView;
	 $__lazy_storage_$_panelView;
	 footerView;
	 layout;
	 focusEnvironments;

}

@property (assign,nonatomic) long long overrideUserInterfaceStyle; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(void)setOverrideUserInterfaceStyle:(long long)arg1 ;
-(long long)overrideUserInterfaceStyle;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
@end

