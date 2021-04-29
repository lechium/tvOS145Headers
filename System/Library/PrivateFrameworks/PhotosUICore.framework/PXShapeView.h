/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIBezierPath, UIColor;

@interface PXShapeView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;

}

@property (nonatomic,copy) UIBezierPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
+(Class)layerClass;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(id)shapeLayer;
@end
