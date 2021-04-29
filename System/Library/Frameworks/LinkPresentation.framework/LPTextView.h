/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/LPTextStyleable.h>
#import <libobjc.A.dylib/LPContentInsettable.h>

@class UILabel, LPTextViewStyle, NSAttributedString;

@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable> {

	UILabel* _textView;
	long long _overrideMaximumNumberOfLines;
	UIEdgeInsets _contentInset;
	LPTextViewStyle* _style;
	NSAttributedString* _attributedString;
	double _ascender;
	double _descender;

}

@property (nonatomic,retain,readonly) NSAttributedString * attributedString; 
@property (nonatomic,retain,readonly) LPTextViewStyle * style; 
-(id)init;
-(LPTextViewStyle *)style;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSAttributedString *)attributedString;
-(double)descender;
-(double)ascender;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)firstBaselineAnchor;
-(id)lastBaselineAnchor;
-(id)initWithText:(id)arg1 style:(id)arg2 ;
-(BOOL)_lp_isLTR;
-(double)firstLineLeading;
-(double)lastLineDescent;
-(long long)computedNumberOfLines;
-(void)setOverrideMaximumNumberOfLines:(long long)arg1 ;
-(void)layoutComponentView;
-(id)_createTextViewWithAttributedString:(id)arg1 style:(id)arg2 ;
-(void)_buildSubviewsIfNeeded;
-(long long)effectiveMaximumNumberOfLines;
-(UIEdgeInsets)effectiveInsets;
@end
