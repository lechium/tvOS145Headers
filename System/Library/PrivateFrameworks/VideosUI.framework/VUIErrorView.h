/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIErrorLayout, VUILabel;

@interface VUIErrorView : UIView {

	VUIErrorLayout* _layout;
	VUILabel* _titleLabel;
	VUILabel* _descriptionLabel;
	VUILabel* _debugTextLabel;
	VUILabel* _debugTextLabel2;

}

@property (nonatomic,retain) VUIErrorLayout * layout;                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) VUILabel * debugTextLabel;                //@synthesize debugTextLabel=_debugTextLabel - In the implementation block
@property (nonatomic,retain) VUILabel * debugTextLabel2;               //@synthesize debugTextLabel2=_debugTextLabel2 - In the implementation block
-(VUIErrorLayout *)layout;
-(void)setLayout:(VUIErrorLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)descriptionLabel;
-(void)setDescriptionLabel:(VUILabel *)arg1 ;
-(VUILabel *)debugTextLabel;
-(void)setDebugTextLabel:(VUILabel *)arg1 ;
-(void)setDebugTextLabel2:(VUILabel *)arg1 ;
-(CGSize)layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(VUILabel *)debugTextLabel2;
@end

