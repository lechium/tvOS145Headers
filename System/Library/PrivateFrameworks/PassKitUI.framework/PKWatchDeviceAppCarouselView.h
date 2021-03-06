/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKWatchHeroImageView, UIImageView, UIImage;

@interface PKWatchDeviceAppCarouselView : UIView {

	PKWatchHeroImageView* _watchDeviceImageView;
	UIImageView* _carouselImageView;
	UIImageView* _appIconImageView;
	UIImage* _appIconImage;

}

@property (nonatomic,retain) UIImage * appIconImage;              //@synthesize appIconImage=_appIconImage - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAppIconImage:(UIImage *)arg1 ;
-(UIImage *)appIconImage;
-(id)_carouselViewImage;
-(CGSize)_appIconSize;
@end

