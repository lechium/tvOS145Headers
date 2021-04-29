/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextFieldMetricsProvider.h>

@class NSString;

@interface _UITextFieldPaddedMetricsProvider : NSObject <_UITextFieldMetricsProvider> {

	BOOL _canIntrinsicHeightExceedContentHeight;
	double _minimumIntrinsicHeight;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) double minimumIntrinsicHeight;                           //@synthesize minimumIntrinsicHeight=_minimumIntrinsicHeight - In the implementation block
@property (assign,nonatomic) BOOL canIntrinsicHeightExceedContentHeight;              //@synthesize canIntrinsicHeightExceedContentHeight=_canIntrinsicHeightExceedContentHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                    //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) BOOL shouldExtendCaretHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(id)initWithPerEdgePadding:(UIEdgeInsets)arg1 ;
-(double)minimumIntrinsicHeight;
-(CGRect)contentFrameForBounds:(CGRect)arg1 ;
-(CGSize)intrinsicSizeForContentSize:(CGSize)arg1 ;
-(BOOL)shouldExtendCaretHeight;
-(id)initWithSymmetricalPadding:(CGSize)arg1 ;
-(void)setMinimumIntrinsicHeight:(double)arg1 ;
-(BOOL)canIntrinsicHeightExceedContentHeight;
-(void)setCanIntrinsicHeightExceedContentHeight:(BOOL)arg1 ;
@end
