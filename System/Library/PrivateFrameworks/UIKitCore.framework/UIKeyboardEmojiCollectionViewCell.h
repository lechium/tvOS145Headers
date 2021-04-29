/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIKeyboardEmoji, UIView;

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {

	UILabel* _emojiLabel;
	BOOL _unreleasedHighlight;
	BOOL _noResultsCell;
	UILabel* _unreleasedBanner;
	UIKeyboardEmoji* _emoji;
	UIView* _navigationHighlightView;
	UILabel* _noResultsLabel;

}

@property (nonatomic,retain) UILabel * unreleasedBanner;                    //@synthesize unreleasedBanner=_unreleasedBanner - In the implementation block
@property (nonatomic,retain) UIView * navigationHighlightView;              //@synthesize navigationHighlightView=_navigationHighlightView - In the implementation block
@property (nonatomic,retain) UILabel * noResultsLabel;                      //@synthesize noResultsLabel=_noResultsLabel - In the implementation block
@property (nonatomic,copy) UIKeyboardEmoji * emoji;                         //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) long long emojiFontSize; 
@property (assign,nonatomic) BOOL unreleasedHighlight;                      //@synthesize unreleasedHighlight=_unreleasedHighlight - In the implementation block
@property (assign,nonatomic) BOOL noResultsCell;                            //@synthesize noResultsCell=_noResultsCell - In the implementation block
-(id)debugDescription;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIKeyboardEmoji *)emoji;
-(void)setEmoji:(UIKeyboardEmoji *)arg1 ;
-(UILabel *)noResultsLabel;
-(void)setNoResultsLabel:(UILabel *)arg1 ;
-(void)setUnreleasedHighlight:(BOOL)arg1 ;
-(void)setNoResultsCell:(BOOL)arg1 ;
-(void)setEmojiFontSize:(long long)arg1 ;
-(UILabel *)unreleasedBanner;
-(UIView *)navigationHighlightView;
-(void)setNavigationHighlightView:(UIView *)arg1 ;
-(long long)emojiFontSize;
-(void)setUnreleasedBanner:(UILabel *)arg1 ;
-(BOOL)unreleasedHighlight;
-(BOOL)noResultsCell;
@end
