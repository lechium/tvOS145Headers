/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIColor, NSArray;

@interface UITableViewCellSelectedBackground : UIView {

	UIVisualEffectView* _selectionEffectsView;
	BOOL _multiselect;
	long long _selectionStyle;
	UIColor* _multiselectBackgroundColor;
	UIColor* _selectionTintColor;
	UIColor* _noneStyleBackgroundColor;

}

@property (assign,nonatomic) long long selectionStyle;                           //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,retain) UIColor * multiselectBackgroundColor;               //@synthesize multiselectBackgroundColor=_multiselectBackgroundColor - In the implementation block
@property (assign,getter=isMultiselect,nonatomic) BOOL multiselect;              //@synthesize multiselect=_multiselect - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor;                       //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
@property (nonatomic,copy) NSArray * selectionEffects; 
@property (nonatomic,retain) UIColor * noneStyleBackgroundColor;                 //@synthesize noneStyleBackgroundColor=_noneStyleBackgroundColor - In the implementation block
-(void)layoutSubviews;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)tintColorDidChange;
-(UIColor *)selectionTintColor;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(void)updateBackgroundColor;
-(void)setMultiselect:(BOOL)arg1 ;
-(NSArray *)selectionEffects;
-(void)setSelectionEffects:(NSArray *)arg1 ;
-(void)setNoneStyleBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)multiselectBackgroundColor;
-(void)setMultiselectBackgroundColor:(UIColor *)arg1 ;
-(BOOL)isMultiselect;
-(UIColor *)noneStyleBackgroundColor;
@end

