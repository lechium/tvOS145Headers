/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TUICandidateViewStyle;
@class NSString, UILabel;

@interface TUICandidateInlineTextView : UIView {

	NSString* _text;
	id<TUICandidateViewStyle> _style;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;              //@synthesize style=_style - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateLabels;
@end

