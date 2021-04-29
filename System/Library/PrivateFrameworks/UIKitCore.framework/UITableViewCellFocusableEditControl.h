/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCellEditControl.h>

@class _UIFloatingContentView;

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {

	_UIFloatingContentView* _focusedFloatingContentView;

}
-(void)setSelected:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_currentImage;
-(void)_ensureFocusedFloatingContentView;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(BOOL)wantsImageShadow;
-(void)_updateFloatingViewForCurrentTraits;
-(BOOL)_shouldHandlePressEvent:(id)arg1 ;
@end
