/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIInputSwitcherTableCellBackgroundView;

@interface UIInputSwitcherTableCell : UITableViewCell {

	BOOL _usesDarkTheme;
	BOOL _usesStraightLeftEdge;
	BOOL _first;
	BOOL _last;
	UIEdgeInsets _interactiveInsets;

}

@property (nonatomic,retain) UIInputSwitcherTableCellBackgroundView * backgroundView; 
@property (assign,nonatomic) BOOL usesDarkTheme;                                                   //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) BOOL usesStraightLeftEdge;                                            //@synthesize usesStraightLeftEdge=_usesStraightLeftEdge - In the implementation block
@property (assign,getter=isFirst,nonatomic) BOOL first;                                            //@synthesize first=_first - In the implementation block
@property (assign,getter=isLast,nonatomic) BOOL last;                                              //@synthesize last=_last - In the implementation block
@property (assign,nonatomic) UIEdgeInsets interactiveInsets;                                       //@synthesize interactiveInsets=_interactiveInsets - In the implementation block
+(id)reuseIdentifier;
-(void)setFirst:(BOOL)arg1 ;
-(void)setLast:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)usesDarkTheme;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isLast;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)usesStraightLeftEdge;
-(BOOL)isFirst;
-(void)_updateRoundedCorners;
-(void)setUsesStraightLeftEdge:(BOOL)arg1 ;
-(UIEdgeInsets)interactiveInsets;
-(void)setInteractiveInsets:(UIEdgeInsets)arg1 ;
@end

