/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _TVSMHighContrastFocusView : UIView {

	UIView* _innerFocusRing;

}

@property (nonatomic,readonly) UIView * innerFocusRing;              //@synthesize innerFocusRing=_innerFocusRing - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)_updateForAccessibilityChange;
-(UIView *)innerFocusRing;
@end

