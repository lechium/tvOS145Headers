/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UILabel, UIView;

@interface SiriUIReviewItemCell : SiriUIContentCollectionViewCell {

	UILabel* _commentLabel;
	UILabel* _authorLabel;
	UIView* _ratingView;
	UIOffset _ratingOffset;
	long long _characterLimit;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) long long characterLimit;                //@synthesize characterLimit=_characterLimit - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
+(id)_commentLabelFont;
+(id)_authorFontAttribute;
+(id)_displayTextForComment:(id)arg1 characterLimit:(long long)arg2 ;
+(UIEdgeInsets)_defaultEdgeInsets;
+(long long)defaultCharacterLimit;
+(id)_authorDateFontAttribute;
+(CGSize)sizeThatFits:(CGSize)arg1 withReview:(id)arg2 characterLimit:(long long)arg3 ;
-(void)prepareForReuse;
-(UIEdgeInsets)contentInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_setComment:(id)arg1 ;
-(void)_setRatingView:(id)arg1 ;
-(void)_setAuthor:(id)arg1 andDate:(id)arg2 timeZoneId:(id)arg3 hasRatingView:(BOOL)arg4 ;
-(id)_relativeStringFromDate:(id)arg1 ;
-(void)configureWithReview:(id)arg1 ratingView:(id)arg2 offset:(UIOffset)arg3 ;
-(long long)characterLimit;
-(void)setCharacterLimit:(long long)arg1 ;
@end

