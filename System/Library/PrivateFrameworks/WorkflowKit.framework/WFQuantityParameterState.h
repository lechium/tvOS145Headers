/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class WFNumberStringSubstitutableState, NSString;

@interface WFQuantityParameterState : NSObject <WFParameterState> {

	WFNumberStringSubstitutableState* _magnitudeState;
	NSString* _unitString;

}

@property (nonatomic,readonly) WFNumberStringSubstitutableState * magnitudeState;              //@synthesize magnitudeState=_magnitudeState - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitString;                                     //@synthesize unitString=_unitString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedRepresentation;
-(NSString *)unitString;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithMagnitudeState:(id)arg1 unitString:(id)arg2 ;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(WFNumberStringSubstitutableState *)magnitudeState;
@end

