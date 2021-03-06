/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, NSAttributedString;

@interface TUIEmojiSearchResultCollectionViewCell : UICollectionViewCell {

	UILabel* _animationFromLabel;
	UILabel* _animationToLabel;
	unsigned long long _nestedAnimationCount;
	NSAttributedString* _displayedEmojiString;
	UILabel* _emojiLabel;

}

@property (nonatomic,readonly) UILabel * emojiLabel;                                 //@synthesize emojiLabel=_emojiLabel - In the implementation block
@property (nonatomic,retain) NSAttributedString * displayedEmojiString;              //@synthesize displayedEmojiString=_displayedEmojiString - In the implementation block
+(id)reuseIdentifier;
+(id)_createEmojiLabel;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setDisplayedEmojiString:(NSAttributedString *)arg1 ;
-(void)setDisplayedEmojiString:(id)arg1 animated:(BOOL)arg2 withAnimationOffset:(unsigned long long)arg3 ;
-(NSAttributedString *)displayedEmojiString;
-(UILabel *)emojiLabel;
@end

