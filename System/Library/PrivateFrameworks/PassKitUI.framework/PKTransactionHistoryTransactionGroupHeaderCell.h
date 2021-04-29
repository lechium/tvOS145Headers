/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIImage, UIImageView, UIView, NSString;

@interface PKTransactionHistoryTransactionGroupHeaderCell : PKDashboardCollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	BOOL _isTemplateLayout;
	UIImage* _image;
	UIImageView* _imageView;
	UIView* _imageBackgroundView;
	BOOL _strokeImage;
	BOOL _useShadows;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL useShadows;                //@synthesize useShadows=_useShadows - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setupImageView;
-(void)setStrokeImage:(BOOL)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)_updateImageViewDynamicColors;
-(void)setUseShadows:(BOOL)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)useShadows;
@end
