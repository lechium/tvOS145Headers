/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CHStroke;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHTextInputTargetContentInfo, NSLocale, CHDrawing, CHTokenizedTextResult;

@interface CHTextInputGesture : NSObject {

	BOOL _preferCharacterLevel;
	long long _gestureType;
	CHTextInputTargetContentInfo* _targetContentInfo;
	NSLocale* _locale;
	CHDrawing* _normalizedDrawing;
	CHDrawing* _originalDrawing;
	id<CHStroke> _lastStroke;
	CHTokenizedTextResult* __textResult;
	NSRange __storedAffectedRange;

}

@property (nonatomic,retain) CHTokenizedTextResult * _textResult;                             //@synthesize _textResult=__textResult - In the implementation block
@property (assign,nonatomic) NSRange _storedAffectedRange;                                    //@synthesize _storedAffectedRange=__storedAffectedRange - In the implementation block
@property (assign,nonatomic) long long gestureType;                                           //@synthesize gestureType=_gestureType - In the implementation block
@property (nonatomic,readonly) CHTextInputTargetContentInfo * targetContentInfo;              //@synthesize targetContentInfo=_targetContentInfo - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) CHDrawing * normalizedDrawing;                                 //@synthesize normalizedDrawing=_normalizedDrawing - In the implementation block
@property (nonatomic,readonly) CHDrawing * originalDrawing;                                   //@synthesize originalDrawing=_originalDrawing - In the implementation block
@property (nonatomic,readonly) BOOL preferCharacterLevel;                                     //@synthesize preferCharacterLevel=_preferCharacterLevel - In the implementation block
@property (nonatomic,readonly) id<CHStroke> lastStroke;                                       //@synthesize lastStroke=_lastStroke - In the implementation block
+(NSRange)_affectedRangeByRefiningShapeBasedGesture:(NSRange)arg1 resultType:(long long)arg2 drawing:(id)arg3 targetContentInfo:(id)arg4 ;
+(BOOL)_isShapeBasedRangeRefinementSupportedForResultType:(long long)arg1 ;
+(void)_shouldExpandToFullTokensForScriptInString:(id)arg1 withRange:(NSRange)arg2 shouldExpandStart:(BOOL*)arg3 shouldExpandEnd:(BOOL*)arg4 ;
+(NSRange)rangeOfTokenAtCharacterIndex:(long long)arg1 inString:(id)arg2 locale:(id)arg3 ;
+(BOOL)isVerticalBarShapeFromLineResult:(id)arg1 originalDrawing:(id)arg2 isDirectionDownward:(BOOL*)arg3 ;
+(long long)_cursorPositionForPoint:(CGPoint)arg1 referenceString:(id)arg2 referenceCharRects:(CGRect*)arg3 searchingRange:(NSRange)arg4 ;
+(id)verticalBarGestureFromLineResult:(id)arg1 currentGesture:(id)arg2 ;
+(BOOL)isEditGestureForDrawing:(id)arg1 targetContentInfo:(id)arg2 tentativeResultType:(long long)arg3 ;
+(BOOL)shouldReclassifyGestureType:(long long)arg1 ;
+(BOOL)isDrawingCenterOnBlank:(id)arg1 targetContentInfo:(id)arg2 insertionLocation:(long long*)arg3 ;
-(void)dealloc;
-(NSLocale *)locale;
-(void)setGestureType:(long long)arg1 ;
-(long long)gestureType;
-(id)textResult;
-(CHTokenizedTextResult *)_textResult;
-(CHTextInputTargetContentInfo *)targetContentInfo;
-(NSRange)_affectedRangeByAdjustingForProtectedCharacters:(NSRange)arg1 ;
-(NSRange)_affectedRangeByRemovingTerminatingNewLines:(NSRange)arg1 ;
-(NSRange)_affectedRangeByTrimmingSpaces:(NSRange)arg1 ;
-(NSRange)_affectedRangeByAdjustingToTokensIfNeeded:(NSRange)arg1 allowSubtoken:(BOOL)arg2 didExpand:(BOOL*)arg3 ;
-(CHDrawing *)originalDrawing;
-(id<CHStroke>)lastStroke;
-(BOOL)preferCharacterLevel;
-(CHDrawing *)normalizedDrawing;
-(id)initWithGestureType:(long long)arg1 targetContentInfo:(id)arg2 locale:(id)arg3 normalizedDrawing:(id)arg4 originalDrawing:(id)arg5 lastStroke:(id)arg6 preferCharacterLevel:(BOOL)arg7 ;
-(void)set_textResult:(CHTokenizedTextResult *)arg1 ;
-(void)set_storedAffectedRange:(NSRange)arg1 ;
-(void)getAffectedRange:(NSRange*)arg1 expandedToFullTokens:(BOOL*)arg2 ;
-(NSRange)_storedAffectedRange;
@end
