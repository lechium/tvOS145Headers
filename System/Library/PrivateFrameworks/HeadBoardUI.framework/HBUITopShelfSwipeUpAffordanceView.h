/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface HBUITopShelfSwipeUpAffordanceView : UIView {

	BOOL _textLabelHidden;
	UILabel* _textLabel;

}

@property (getter=_textLabel,nonatomic,readonly) UILabel * textLabel;                    //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,getter=isTextLabelHidden,nonatomic) BOOL textLabelHidden;              //@synthesize textLabelHidden=_textLabelHidden - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_textLabel;
-(void)_applicationDidBecomeActive;
-(void)setTextLabelHidden:(BOOL)arg1 ;
-(void)_updateTextLabelText:(BOOL)arg1 ;
-(BOOL)isTextLabelHidden;
@end
