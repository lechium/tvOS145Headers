/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface PKPhysicalCardArtworkView : UIView {

	UIImageView* _artworkImageView;
	UILabel* _nameLabel;
	UIImage* _artworkImage;
	NSString* _nameOnCard;

}

@property (nonatomic,retain) UIImage * artworkImage;              //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy) NSString * nameOnCard;                 //@synthesize nameOnCard=_nameOnCard - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)nameOnCard;
-(void)setNameOnCard:(NSString *)arg1 ;
-(UIImage *)artworkImage;
-(void)setArtworkImage:(UIImage *)arg1 ;
@end
