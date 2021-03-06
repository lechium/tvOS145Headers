/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFConditionalOperatorParameter : WFEnumerationParameter {

	BOOL _usingLegacyOperatorBehavior;
	NSArray* _possibleStates;
	NSArray* _possibleContentOperators;
	long long _contentType;
	unsigned long long _displayableTimeUnits;

}

@property (nonatomic,readonly) NSArray * possibleStates;                             //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,readonly) NSArray * possibleContentOperators;                   //@synthesize possibleContentOperators=_possibleContentOperators - In the implementation block
@property (nonatomic,readonly) long long contentType;                                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) unsigned long long displayableTimeUnits;              //@synthesize displayableTimeUnits=_displayableTimeUnits - In the implementation block
@property (nonatomic,readonly) BOOL usingLegacyOperatorBehavior;                     //@synthesize usingLegacyOperatorBehavior=_usingLegacyOperatorBehavior - In the implementation block
-(long long)contentType;
-(Class)stateClass;
-(void)possibleStatesDidChange;
-(NSArray *)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(id)defaultSupportedVariableTypes;
-(id)importQuestionBehavior;
-(BOOL)allowsMultipleValues;
-(void)setPossibleContentOperators:(id)arg1 withContentType:(long long)arg2 displayableTimeUnits:(unsigned long long)arg3 usingLegacyOperatorBehavior:(BOOL)arg4 ;
-(NSArray *)possibleContentOperators;
-(unsigned long long)displayableTimeUnits;
-(BOOL)usingLegacyOperatorBehavior;
@end

