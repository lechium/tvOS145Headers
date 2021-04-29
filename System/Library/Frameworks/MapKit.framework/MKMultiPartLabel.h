/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UITextView, NSDictionary, MKMultiPartAttributedString, UIFont, UIColor, _MKMultiPartLabelMetrics, NSString;

@interface MKMultiPartLabel : UIView {

	UITextView* _textView;
	CGRect _previousBounds;
	NSDictionary* _cachedTextAttributes;
	NSDictionary* _lastAppliedNonColorAttributes;
	BOOL _highlighted;
	MKMultiPartAttributedString* _multiPartString;
	UIFont* _font;
	UIColor* _textColor;
	long long _textAlignment;
	UIColor* _highlightedTextColor;
	_MKMultiPartLabelMetrics* _data;

}

@property (nonatomic,retain) _MKMultiPartLabelMetrics * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) MKMultiPartAttributedString * multiPartString;              //@synthesize multiPartString=_multiPartString - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIFont * font;                                              //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                        //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textInset; 
@property (nonatomic,retain) UIColor * highlightedTextColor;                             //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
+(id)_formattedStringsCache;
-(_MKMultiPartLabelMetrics *)data;
-(void)setData:(_MKMultiPartLabelMetrics *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)_updateStrings;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2 ;
-(void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2 ;
-(unsigned long long)numberOfLines;
-(long long)textAlignment;
-(UIColor *)highlightedTextColor;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_setupTextView;
-(void)_updateColorsForCurrentState;
-(void)setMultiPartString:(MKMultiPartAttributedString *)arg1 ;
-(id)_attributedAdjustedMultiPartStringFromString:(id)arg1 ;
-(void)_updateTextViewTextAndInvalidateLayout:(id)arg1 ;
-(id)_addDefaultAttributesToAttributedString:(id)arg1 ;
-(id)_textAttributes;
-(UIEdgeInsets)textInset;
-(void)setTextInset:(UIEdgeInsets)arg1 ;
-(MKMultiPartAttributedString *)multiPartString;
@end

