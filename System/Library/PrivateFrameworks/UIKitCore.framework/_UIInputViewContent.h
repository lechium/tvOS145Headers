/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIInputView;

@interface _UIInputViewContent : UIView {

	double _contentHeight;
	double _contentWidth;
	UIInputView* _inputView;
	unsigned long long _unclippableCorners;

}

@property (assign,nonatomic) unsigned long long _unclippableCorners;              //@synthesize unclippableCorners=_unclippableCorners - In the implementation block
-(void)addSubview:(id)arg1 ;
-(CGSize)_contentSize;
-(BOOL)_isToolbar;
-(CGSize)_sizeFittingContentViews;
-(id)initWithFrame:(CGRect)arg1 inputView:(id)arg2 ;
-(void)_setToolbarBackgroundImage:(id)arg1 ;
-(void)_setToolbarBackgroundViewWithImage:(id)arg1 ;
-(void)_updateCornerClipping;
-(unsigned long long)_unclippableCorners;
-(void)set_unclippableCorners:(unsigned long long)arg1 ;
@end

