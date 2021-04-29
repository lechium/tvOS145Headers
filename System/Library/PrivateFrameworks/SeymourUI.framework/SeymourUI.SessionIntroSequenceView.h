/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface SeymourUI.SessionIntroSequenceView : UIView {

	 presenter;
	 countdownPosition;
	 countdownView;
	 playButtonView;
	 spinnerView;

}

@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect bounds; 
-(void)accessibilityUpdateCountdownToStep:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didTouchDownPlayIcon:(id)arg1 ;
-(void)didTouchUpInsidePlayIcon:(id)arg1 ;
-(void)didTouchUpOutsidePlayIcon:(id)arg1 ;
@end
