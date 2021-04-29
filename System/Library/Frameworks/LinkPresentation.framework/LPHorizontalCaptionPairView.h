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

@class LPTextView, LPCaptionButtonPresentationProperties, UIButton;

@interface LPHorizontalCaptionPairView : LPComponentView <LPTextStyleable, LPContentInsettable> {

	LPTextView* _leftView;
	LPTextView* _rightView;
	LPCaptionButtonPresentationProperties* _buttonProperties;
	UIEdgeInsets _contentInset;
	long long _balancingMode;
	UIButton* _button;

}
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)descender;
-(double)ascender;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(double)firstLineLeading;
-(double)lastLineDescent;
-(long long)computedNumberOfLines;
-(void)setOverrideMaximumNumberOfLines:(long long)arg1 ;
-(CGSize)_layoutCaptionPairForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(id)initWithLeadingText:(id)arg1 leadingStyle:(id)arg2 trailingText:(id)arg3 trailingStyle:(id)arg4 button:(id)arg5 balancingMode:(long long)arg6 ;
-(void)layoutComponentView;
@end
