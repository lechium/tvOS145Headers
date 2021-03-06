/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TIInputMode, NSDate, TILanguageModelAdaptationContext;

@interface TILanguageModelOfflineLearningHandle : NSObject {

	BOOL _valid;
	TIInputMode* _inputMode;
	NSDate* _lastAdaptationDate;
	TILanguageModelAdaptationContext* _currentAdaptationContext;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                                              //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSDate * lastAdaptationDate;                                              //@synthesize lastAdaptationDate=_lastAdaptationDate - In the implementation block
@property (nonatomic,copy) TILanguageModelAdaptationContext * currentAdaptationContext;              //@synthesize currentAdaptationContext=_currentAdaptationContext - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;                                              //@synthesize valid=_valid - In the implementation block
+(id)handleForInputMode:(id)arg1 ;
+(id)handleForLanguageLikelihood;
-(void)load;
-(BOOL)isValid;
-(void)setValid:(BOOL)arg1 ;
-(TIInputMode *)inputMode;
-(id)initWithInputMode:(id)arg1 ;
-(void)didFinishLearning;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(TILanguageModelAdaptationContext *)currentAdaptationContext;
-(void)setLastAdaptationDate:(NSDate *)arg1 ;
-(NSDate *)lastAdaptationDate;
-(void)setCurrentAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
@end

