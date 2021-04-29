/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFParameterState.h>

@protocol WFParameterState;
@class NSString;

@interface WFPropertyListParameterValue : NSObject <NSCopying, WFParameterState> {

	long long _valueType;
	id<WFParameterState> _state;

}

@property (nonatomic,readonly) long long valueType;                     //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) id<WFParameterState> state;              //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForValueType:(long long)arg1 ;
+(id)defaultStateForValueType:(long long)arg1 ;
+(Class)processedClassForValueType:(long long)arg1 ;
+(id)localizedTitleForValueType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id<WFParameterState>)state;
-(id)serializedRepresentation;
-(long long)valueType;
-(id)initWithNumber:(id)arg1 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithType:(long long)arg1 state:(id)arg2 ;
-(id)initWithStringState:(id)arg1 ;
-(id)initWithDictionaryState:(id)arg1 ;
-(id)initWithArrayState:(id)arg1 ;
-(id)initWithNumberState:(id)arg1 ;
-(id)initWithBooleanState:(id)arg1 ;
-(id)initWithBoolean:(id)arg1 ;
@end
