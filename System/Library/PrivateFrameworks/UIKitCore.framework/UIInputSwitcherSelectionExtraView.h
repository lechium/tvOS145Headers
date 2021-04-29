/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKeyboardMenuView;

@interface UIInputSwitcherSelectionExtraView : UIView {

	double m_pointerOffset;
	unsigned long long _roundedCorners;
	UIKeyboardMenuView* _menu;
	CGRect _keyRect;

}

@property (assign,nonatomic) double pointerOffset; 
@property (assign,nonatomic) CGRect keyRect;                                 //@synthesize keyRect=_keyRect - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;              //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (assign,nonatomic) UIKeyboardMenuView * menu;                      //@synthesize menu=_menu - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIKeyboardMenuView *)menu;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(unsigned long long)roundedCorners;
-(CGRect)keyRect;
-(double)pointerOffset;
-(void)setPointerOffset:(double)arg1 ;
-(void)setKeyRect:(CGRect)arg1 ;
@end

