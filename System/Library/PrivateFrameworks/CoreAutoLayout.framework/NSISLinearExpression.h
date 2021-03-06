/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSISEngine;

@interface NSISLinearExpression : NSObject <NSFastEnumeration> {

	NSISEngine* engine;
	SCD_Struct_NS13* linExp;

}

@property (assign) double constant; 
@property (readonly) NSISEngine * engine; 
+(void)initialize;
+(id)newExpressionWithCapacity:(unsigned long long)arg1 engine:(id)arg2 ;
+(id)newExpressionWithCapacity:(unsigned long long)arg1 ;
+(id)acquireFromPoolForUseCase:(long long)arg1 ;
+(id)acquireFromPoolForUseCase:(long long)arg1 engine:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)scaleBy:(double)arg1 ;
-(double)constant;
-(NSISEngine *)engine;
-(void)setConstant:(double)arg1 ;
-(id)initWithEngine:(id)arg1 ;
-(void)returnToPool;
-(BOOL)isConstant;
-(unsigned long long)variableCount;
-(void)verifyInternalIntegrity;
-(void)removeVariable:(id)arg1 ;
-(void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)addVariable:(id)arg1 coefficient:(double)arg2 ;
-(double)incrementConstant:(double)arg1 ;
-(void)enumerateVariablesAndCoefficients:(/*^block*/id)arg1 ;
-(id)variablesArray;
-(double)coefficientForVariable:(id)arg1 ;
-(void)setCoefficient:(double)arg1 forVariable:(id)arg2 ;
-(void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3 ;
-(void)addExpression:(id)arg1 times:(double)arg2 ;
-(void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 ;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(/*^block*/id)arg4 processVariableDroppedFromReceiver:(/*^block*/id)arg5 ;
-(void)enumerateVariables:(/*^block*/id)arg1 ;
-(BOOL)enumerateVariablesAndCoefficientsUntil:(/*^block*/id)arg1 ;
-(id)copyContentsAndReturnToPool;
@end

