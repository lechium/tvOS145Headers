/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIFont, UIColor, NSString, UIImage;


@protocol TUICandidateViewStyle <NSObject>
@property (nonatomic,readonly) UIFont * candidateFont; 
@property (nonatomic,readonly) UIFont * annotationTextFont; 
@property (nonatomic,readonly) UIFont * alternativeTextFont; 
@property (nonatomic,readonly) UIFont * candidateNumberFont; 
@property (nonatomic,readonly) UIFont * sortControlFont; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * highlightedTextColor; 
@property (nonatomic,readonly) UIColor * alternativeTextColor; 
@property (nonatomic,readonly) UIColor * highlightedAlternativeTextColor; 
@property (nonatomic,readonly) UIColor * candidateNumberColor; 
@property (nonatomic,readonly) UIColor * highlightedCandidateNumberColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * cellBackgroundColor; 
@property (nonatomic,readonly) UIColor * arrowButtonBackgroundColor; 
@property (nonatomic,readonly) UIColor * gridBackgroundColor; 
@property (nonatomic,readonly) UIColor * highlightedBackgroundColor; 
@property (nonatomic,readonly) UIColor * highlightedRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * transliterationCandidateBackgroundColor; 
@property (nonatomic,readonly) UIColor * groupHeaderBackgroundColor; 
@property (nonatomic,readonly) UIColor * lineColor; 
@property (nonatomic,readonly) UIColor * sortControlColor; 
@property (nonatomic,readonly) UIColor * sortControlBackgroundColor; 
@property (nonatomic,copy,readonly) NSString * arrowButtonImageName; 
@property (nonatomic,readonly) UIImage * cellSeparatorImage; 
@property (nonatomic,readonly) UIImage * slottedCellSeparatorImage; 
@property (nonatomic,readonly) UIImage * leftEdgeSeparatorImage; 
@property (nonatomic,readonly) UIImage * rightEdgeSeparatorImage; 
@property (nonatomic,readonly) UIImage * arrowButtonSeparatorImage; 
@property (nonatomic,readonly) UIImage * cellBackgroundImage; 
@property (nonatomic,readonly) UIImage * highlightedCellBackgroundImage; 
@property (nonatomic,readonly) UIImage * transliterationCandidateBackgroundImage; 
@property (nonatomic,readonly) double rowHeight; 
@property (nonatomic,readonly) double arrowButtonHeight; 
@property (nonatomic,readonly) double cornerRadius; 
@property (nonatomic,readonly) unsigned long long maskedCorners; 
@property (nonatomic,readonly) unsigned long long gridMaskedCorners; 
@property (nonatomic,readonly) double foregroundOpacity; 
@property (nonatomic,readonly) double backgroundOpacity; 
@property (nonatomic,readonly) BOOL doNotClipToBounds; 
@property (nonatomic,readonly) long long layoutOrientation; 
@property (nonatomic,readonly) unsigned long long columnsCount; 
@property (nonatomic,readonly) unsigned long long maxNumberOfProactiveCells; 
@property (nonatomic,readonly) double minimumCellPadding; 
@property (nonatomic,readonly) double minimumCellWidth; 
@property (nonatomic,readonly) double singleSlottedCellMargin; 
@property (nonatomic,readonly) UIEdgeInsets extraCellPadding; 
@property (nonatomic,readonly) UIEdgeInsets arrowButtonPadding; 
@property (nonatomic,readonly) UIEdgeInsets gridPadding; 
@property (nonatomic,readonly) UIEdgeInsets gridLinePadding; 
@property (nonatomic,readonly) CGPoint gridLineOffset; 
@property (nonatomic,readonly) UIEdgeInsets sortControlPadding; 
@property (nonatomic,readonly) long long cellTextAlignment; 
@property (nonatomic,readonly) long long alternativeTextAlignment; 
@property (nonatomic,readonly) BOOL darkBackdrop; 
@property (nonatomic,readonly) BOOL scrollDisabled; 
@property (nonatomic,readonly) BOOL allowCandidateGridExpanding; 
@property (nonatomic,readonly) BOOL showsIndex; 
@property (nonatomic,readonly) BOOL showExtraLineBeforeFirstRow; 
@property (nonatomic,readonly) BOOL fillGridWithLines; 
@property (nonatomic,readonly) BOOL dontSelectLastItemByBackwardMoving; 
@property (nonatomic,readonly) BOOL showOneMoreCandidate; 
@property (nonatomic,readonly) BOOL disableSwitchingSortingMethodByTabKey; 
@property (nonatomic,readonly) BOOL skipInlineCandidate; 
@property (nonatomic,readonly) BOOL hidesPartialCandidates; 
@property (nonatomic,readonly) long long minimumNumberOfCandidates; 
@required
-(UIColor *)backgroundColor;
-(double)cornerRadius;
-(unsigned long long)maskedCorners;
-(UIColor *)lineColor;
-(UIColor *)textColor;
-(long long)layoutOrientation;
-(unsigned long long)columnsCount;
-(UIColor *)highlightedBackgroundColor;
-(double)rowHeight;
-(UIColor *)highlightedTextColor;
-(double)singleSlottedCellMargin;
-(UIEdgeInsets)gridPadding;
-(UIEdgeInsets)gridLinePadding;
-(CGPoint)gridLineOffset;
-(BOOL)showExtraLineBeforeFirstRow;
-(BOOL)fillGridWithLines;
-(BOOL)showsIndex;
-(UIEdgeInsets)extraCellPadding;
-(UIColor *)groupHeaderBackgroundColor;
-(UIFont *)candidateFont;
-(double)arrowButtonHeight;
-(UIImage *)rightEdgeSeparatorImage;
-(UIImage *)leftEdgeSeparatorImage;
-(BOOL)disableSwitchingSortingMethodByTabKey;
-(BOOL)doNotClipToBounds;
-(UIImage *)arrowButtonSeparatorImage;
-(UIColor *)sortControlBackgroundColor;
-(UIEdgeInsets)arrowButtonPadding;
-(UIEdgeInsets)sortControlPadding;
-(UIColor *)cellBackgroundColor;
-(UIImage *)cellBackgroundImage;
-(UIImage *)highlightedCellBackgroundImage;
-(BOOL)darkBackdrop;
-(UIColor *)transliterationCandidateBackgroundColor;
-(UIImage *)transliterationCandidateBackgroundImage;
-(UIColor *)alternativeTextColor;
-(UIColor *)highlightedAlternativeTextColor;
-(UIColor *)candidateNumberColor;
-(UIColor *)highlightedCandidateNumberColor;
-(long long)alternativeTextAlignment;
-(UIFont *)candidateNumberFont;
-(double)minimumCellPadding;
-(UIFont *)alternativeTextFont;
-(UIFont *)annotationTextFont;
-(double)minimumCellWidth;
-(UIImage *)slottedCellSeparatorImage;
-(double)backgroundOpacity;
-(double)foregroundOpacity;
-(long long)cellTextAlignment;
-(long long)minimumNumberOfCandidates;
-(BOOL)hidesPartialCandidates;
-(unsigned long long)maxNumberOfProactiveCells;
-(UIColor *)highlightedRowBackgroundColor;
-(BOOL)allowCandidateGridExpanding;
-(BOOL)scrollDisabled;
-(BOOL)showOneMoreCandidate;
-(BOOL)dontSelectLastItemByBackwardMoving;
-(BOOL)skipInlineCandidate;
-(unsigned long long)gridMaskedCorners;
-(UIColor *)gridBackgroundColor;
-(UIColor *)arrowButtonBackgroundColor;
-(NSString *)arrowButtonImageName;
-(UIColor *)sortControlColor;
-(UIFont *)sortControlFont;
-(UIImage *)cellSeparatorImage;

@end

