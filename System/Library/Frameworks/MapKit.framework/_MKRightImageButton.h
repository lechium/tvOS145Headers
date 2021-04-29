/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UITapGestureRecognizer, NSArray, _MKUILabel, UIImageView, NSString, UIImage;

@interface _MKRightImageButton : UIControl {

	UITapGestureRecognizer* _gestureRecognizer;
	BOOL _titleConstraintsAdded;
	NSArray* _titleOnlyConstraints;
	NSArray* _titleAndImageConstraints;
	BOOL _highlighted;
	_MKUILabel* _titleLabel;
	UIImageView* _imageView;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) _MKUILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(BOOL)isHighlighted;
-(_MKUILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)viewForLastBaselineLayout;
@end

