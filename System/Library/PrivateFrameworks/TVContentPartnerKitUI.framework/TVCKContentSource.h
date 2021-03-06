/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
@class NSAttributedString, NSShadow, UIColor;

@interface TVCKContentSource : NSObject {

	NSAttributedString* _attributedTitle;
	NSShadow* _shadow;
	UIColor* _borderColor;
	UIEdgeInsets _padding;
	UIEdgeInsets _borderWidths;

}

@property (nonatomic,copy) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                            //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                               //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                           //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderWidths;                       //@synthesize borderWidths=_borderWidths - In the implementation block
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(UIColor *)borderColor;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(NSShadow *)shadow;
-(UIEdgeInsets)borderWidths;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setBorderWidths:(UIEdgeInsets)arg1 ;
@end

