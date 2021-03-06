/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSString;

@interface ASCBorderView : UIView {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                            //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) NSString * cornerCurve; 
@property (assign,nonatomic) unsigned long long cornerMask; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(double)cornerRadius;
-(NSString *)cornerCurve;
-(void)setCornerCurve:(NSString *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCornerMask:(unsigned long long)arg1 ;
-(void)updateBorderColor;
-(unsigned long long)cornerMask;
@end

