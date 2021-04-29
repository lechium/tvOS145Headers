/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUMathExpressionBase.h>

@interface MUMathExpressionFloatBased : MUMathExpressionBase {

	FunctionInterpreter<float>* mInterpreter;

}
+(float)invalidResult;
+(float)evaluateString:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)stringValue;
-(void)cleanup;
-(float)evaluate;
-(BOOL)isConstant;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(void)setVariableValues:(id)arg1 ;
-(void)setValue:(float)arg1 forVariable:(id)arg2 ;
-(void)resetAllVariables;
-(void)_resetVariableIndicies;
-(float)valueForVariable:(id)arg1 ;
-(void)replaceVariable:(id)arg1 withValue:(float)arg2 ;
-(BOOL)isValueIllegal:(float)arg1 ;
@end
