/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFParameter.h>

@class NSSet;

@interface WFArrayParameter : WFParameter {

	BOOL _supportsVariables;
	NSSet* _allowedValueTypes;

}

@property (nonatomic,readonly) BOOL supportsVariables;                 //@synthesize supportsVariables=_supportsVariables - In the implementation block
@property (nonatomic,readonly) NSSet * allowedValueTypes;              //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
-(id)defaultSerializedRepresentation;
-(Class)stateClass;
-(id)initWithDefinition:(id)arg1 ;
-(id)defaultSupportedVariableTypes;
-(NSSet *)allowedValueTypes;
-(BOOL)supportsVariables;
@end

