/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _UISearchBarPromptContainerView : UIView {

	long long _barMetrics;
	UILabel* _promptLabel;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) long long barMetrics;                   //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) UILabel * promptLabel;                  //@synthesize promptLabel=_promptLabel - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UILabel *)promptLabel;
-(void)setPromptLabel:(UILabel *)arg1 ;
-(long long)barMetrics;
-(void)setBarMetrics:(long long)arg1 ;
-(BOOL)useMini;
-(BOOL)_isKnownUISearchBarComponentContainer;
@end

