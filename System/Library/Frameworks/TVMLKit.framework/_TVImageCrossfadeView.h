/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, UIImageView, __TVImageLoaderQueue, NSArray;

@interface _TVImageCrossfadeView : UIView {

	NSTimer* _crossfadeTimer;
	UIImageView* _imageView;
	__TVImageLoaderQueue* _loaderQueue;
	NSArray* _imageProxies;
	double _crossfadePeriod;
	double _crossfadeDuration;
	UIEdgeInsets _padding;

}

@property (nonatomic,copy) NSArray * imageProxies;                  //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                  //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double crossfadePeriod;                //@synthesize crossfadePeriod=_crossfadePeriod - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;              //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
-(void)dealloc;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_startTimer;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(double)crossfadeDuration;
-(void)setCrossfadeDuration:(double)arg1 ;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(void)_loadNextImage:(id)arg1 ;
-(void)_crossfadeToImage:(id)arg1 ;
-(double)crossfadePeriod;
-(void)setCrossfadePeriod:(double)arg1 ;
@end

