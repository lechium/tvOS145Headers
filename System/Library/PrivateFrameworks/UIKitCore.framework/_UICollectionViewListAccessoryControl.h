/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol UITableConstants;
@class UIImageView, UIColor;

@interface _UICollectionViewListAccessoryControl : UIControl {

	UIImageView* _imageView;
	BOOL _needsImageViewUpdate;
	long long _type;
	id<UITableConstants> _constants;
	UIColor* _accessoryTintColor;
	UIColor* _accessoryBackgroundColor;

}

@property (assign,nonatomic) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id<UITableConstants> constants;                  //@synthesize constants=_constants - In the implementation block
@property (nonatomic,retain) UIColor * accessoryTintColor;                    //@synthesize accessoryTintColor=_accessoryTintColor - In the implementation block
@property (nonatomic,retain) UIColor * accessoryBackgroundColor;              //@synthesize accessoryBackgroundColor=_accessoryBackgroundColor - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setSelected:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_updateImageViewIfNeeded;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)initWithType:(long long)arg1 constants:(id)arg2 ;
-(void)addActionHandler:(/*^block*/id)arg1 ;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(void)setAccessoryTintColor:(UIColor *)arg1 ;
-(void)setAccessoryBackgroundColor:(UIColor *)arg1 ;
-(id<UITableConstants>)constants;
-(void)_setNeedsImageViewUpdate;
-(UIColor *)accessoryTintColor;
-(id)_renderedImage;
-(UIColor *)accessoryBackgroundColor;
@end

