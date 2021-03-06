/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSFormatter, UILabel, NSString, UIFont, UIColor;

@interface AVAnimatingLabel : UIView {

	BOOL _isTextOverridden;
	BOOL _valuesRepresentDates;
	NSFormatter* _formatter;
	UILabel* _label;
	UIEdgeInsets _layoutInsets;

}

@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,retain) UILabel * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSFormatter * formatter;                //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) id labelValue; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic) UIEdgeInsets layoutInsets;              //@synthesize layoutInsets=_layoutInsets - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
+(Class)layerClass;
+(id)animatingNumberLabel;
+(id)animatingDurationLabel;
+(id)animatingDateLabelForTimeStyle:(unsigned long long)arg1 ;
-(BOOL)isEmpty;
-(double)timeInterval;
-(id)initWithCoder:(id)arg1 ;
-(NSFormatter *)formatter;
-(void)setFormatter:(NSFormatter *)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)labelValue;
-(void)setLabelValue:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(id)initWithFrame:(CGRect)arg1 formatter:(id)arg2 ;
-(id)animatingLabelLayer;
-(void)setLayoutInsets:(UIEdgeInsets)arg1 ;
-(id)labelPresentationValue;
-(UIEdgeInsets)layoutInsets;
-(void)setTimeInterval:(double)arg1 animated:(BOOL)arg2 ;
-(void)setTimeInterval:(double)arg1 ;
@end

