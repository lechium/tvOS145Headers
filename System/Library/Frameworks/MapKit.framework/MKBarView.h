/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class MKBarViewOptions, CAShapeLayer, CAGradientLayer, NSLayoutConstraint;

@interface MKBarView : UIView {

	MKBarViewOptions* _options;
	CAShapeLayer* _barMaskLayer;
	CAGradientLayer* _filledGradientLayer;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,copy) MKBarViewOptions * options;              //@synthesize options=_options - In the implementation block
-(MKBarViewOptions *)options;
-(void)setOptions:(MKBarViewOptions *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setupBarFillLayer;
-(void)_setupViewAndConstraints;
-(const CGPathRef)_filledRectanglePath;
@end

