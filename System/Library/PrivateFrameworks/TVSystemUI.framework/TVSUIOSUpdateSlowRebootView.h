/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface TVSUIOSUpdateSlowRebootView : UIView {

	UILabel* _text;
	UIButton* _restart;
	/*^block*/id _rebootAction;

}

@property (nonatomic,copy) id rebootAction;              //@synthesize rebootAction=_rebootAction - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredFocusEnvironments;
-(void)setRebootAction:(id)arg1 ;
-(void)_didSelectRestart:(id)arg1 ;
-(id)rebootAction;
@end

