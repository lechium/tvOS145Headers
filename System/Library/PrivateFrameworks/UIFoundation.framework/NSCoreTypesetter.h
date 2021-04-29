/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTypesetter.h>

@protocol NSCoreTypesetterDelegate;
@class NSDictionary;

@interface NSCoreTypesetter : NSTypesetter {

	BOOL _wantsExtraLineFragment;
	BOOL _usesDefaultHyphenation;
	BOOL _allowsFontSubstitutionAffectingVerticalMetrics;
	BOOL _limitsLayoutForSuspiciousContents;
	/*^block*/id _laidOutLineFragment;
	id<NSCoreTypesetterDelegate> delegate;
	/*^block*/id _validateLineBreakIndex;
	NSDictionary* __extraLineFragmentAttributes;
	long long _layoutOrientation;
	NSRange characterRange;
	CGSize textContainerSize;

}

@property (copy) NSDictionary * _extraLineFragmentAttributes;                        //@synthesize _extraLineFragmentAttributes=__extraLineFragmentAttributes - In the implementation block
@property (assign) long long layoutOrientation;                                      //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign) NSRange characterRange; 
@property (assign) CGSize textContainerSize; 
@property (assign) BOOL wantsExtraLineFragment;                                      //@synthesize wantsExtraLineFragment=_wantsExtraLineFragment - In the implementation block
@property (copy) id laidOutLineFragment;                                             //@synthesize laidOutLineFragment=_laidOutLineFragment - In the implementation block
@property (__weak) id<NSCoreTypesetterDelegate> delegate; 
@property (assign) BOOL usesDefaultHyphenation;                                      //@synthesize usesDefaultHyphenation=_usesDefaultHyphenation - In the implementation block
@property (assign) BOOL allowsFontSubstitutionAffectingVerticalMetrics;              //@synthesize allowsFontSubstitutionAffectingVerticalMetrics=_allowsFontSubstitutionAffectingVerticalMetrics - In the implementation block
@property (assign) BOOL limitsLayoutForSuspiciousContents;                           //@synthesize limitsLayoutForSuspiciousContents=_limitsLayoutForSuspiciousContents - In the implementation block
@property (copy) id validateLineBreakIndex;                                          //@synthesize validateLineBreakIndex=_validateLineBreakIndex - In the implementation block
+(void)_lineMetricsForAttributes:(id)arg1 typesetterBehavior:(long long)arg2 usesFontLeading:(BOOL)arg3 applySpacings:(BOOL)arg4 usesSystemFontLeading:(BOOL)arg5 usesNegativeFontLeading:(BOOL)arg6 lineHeight:(double*)arg7 baselineOffset:(double*)arg8 spacing:(double*)arg9 applicationFrameworkContext:(long long)arg10 ;
+(void)_maximumAscentAndDescentForRuns:(CFArrayRef)arg1 ascender:(double*)arg2 descender:(double*)arg3 ;
-(id)init;
-(void)dealloc;
-(id<NSCoreTypesetterDelegate>)delegate;
-(void)setDelegate:(id<NSCoreTypesetterDelegate>)arg1 ;
-(void)layout;
-(NSRange)characterRange;
-(long long)layoutOrientation;
-(void)setCharacterRange:(NSRange)arg1 ;
-(void)setTextContainerSize:(CGSize)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)setValidateLineBreakIndex:(id)arg1 ;
-(void)setLaidOutLineFragment:(id)arg1 ;
-(void)setWantsExtraLineFragment:(BOOL)arg1 ;
-(BOOL)limitsLayoutForSuspiciousContents;
-(void)setLimitsLayoutForSuspiciousContents:(BOOL)arg1 ;
-(BOOL)usesDefaultHyphenation;
-(void)setUsesDefaultHyphenation:(BOOL)arg1 ;
-(BOOL)allowsFontSubstitutionAffectingVerticalMetrics;
-(void)setAllowsFontSubstitutionAffectingVerticalMetrics:(BOOL)arg1 ;
-(void)set_extraLineFragmentAttributes:(NSDictionary *)arg1 ;
-(SCD_Struct_NS40)_getLineMetricsForRange:(NSRange)arg1 attributes:(id)arg2 applySpacing:(BOOL)arg3 usesSystemFontLeading:(BOOL)arg4 usesNegativeFontLeading:(BOOL)arg5 ;
-(CGRect)_stringDrawingCoreTextEngineWithOriginalString:(id)arg1 rect:(CGRect)arg2 padding:(double)arg3 graphicsContext:(id)arg4 forceClipping:(BOOL)arg5 attributes:(id)arg6 stringDrawingOptions:(long long)arg7 drawingContext:(id)arg8 stringDrawingInterface:(SCD_Struct_NS41*)arg9 ;
-(CGSize)textContainerSize;
-(id)laidOutLineFragment;
-(int)_NSFastDrawString:(id)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 paragraphStyle:(id)arg4 typesetterBehavior:(long long)arg5 lineBreakMode:(long long)arg6 rect:(CGRect)arg7 padding:(double)arg8 graphicsContext:(id)arg9 baselineRendering:(BOOL)arg10 usesFontLeading:(BOOL)arg11 usesScreenFont:(BOOL)arg12 scrollable:(BOOL)arg13 syncAlignment:(BOOL)arg14 mirrored:(BOOL)arg15 boundingRectPointer:(CGRect*)arg16 baselineOffsetPointer:(double*)arg17 drawingContext:(id)arg18 ;
-(id)softHyphen;
-(BOOL)wantsExtraLineFragment;
-(id)validateLineBreakIndex;
-(NSDictionary *)_extraLineFragmentAttributes;
@end

