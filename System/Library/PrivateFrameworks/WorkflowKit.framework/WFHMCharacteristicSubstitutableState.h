/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class HMCharacteristic, NSString, NSDictionary;

@interface WFHMCharacteristicSubstitutableState : WFVariableSubstitutableParameterState {

	HMCharacteristic* _characteristic;
	NSString* _homeIdentifier;
	NSDictionary* _serializedCharacteristic;

}

@property (nonatomic,retain) NSDictionary * serializedCharacteristic;              //@synthesize serializedCharacteristic=_serializedCharacteristic - In the implementation block
@property (nonatomic,readonly) NSString * homeIdentifier;                          //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * characteristic;                  //@synthesize characteristic=_characteristic - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedRepresentation;
-(HMCharacteristic *)characteristic;
-(NSString *)homeIdentifier;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithCharacteristic:(id)arg1 homeIdentifier:(id)arg2 ;
-(NSDictionary *)serializedCharacteristic;
-(void)setSerializedCharacteristic:(NSDictionary *)arg1 ;
@end
