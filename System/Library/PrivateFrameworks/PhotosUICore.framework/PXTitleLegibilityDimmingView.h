/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@protocol NSCopying;
@class CALayer, CABackdropLayer, NSString;

@interface PXTitleLegibilityDimmingView : UIView <PXGReusableView> {

	CALayer* _filterLayer;
	CABackdropLayer* _backdropLayer;
	id<NSCopying> _userData;
	NSString* _gradientImageName;
	CGRect _clippingRect;

}

@property (nonatomic,retain) NSString * gradientImageName;              //@synthesize gradientImageName=_gradientImageName - In the implementation block
@property (nonatomic,copy) id<NSCopying> userData;                      //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                       //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserData:(id<NSCopying>)arg1 ;
-(id<NSCopying>)userData;
-(void)layoutSubviews;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)becomeReusable;
-(void)setGradientImageName:(NSString *)arg1 ;
-(NSString *)gradientImageName;
@end

