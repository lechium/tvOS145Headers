/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFAction, NSString;

@interface WFMeasurementUnitPickerParameter : WFEnumerationParameter <WFActionEventObserver> {

	WFAction* _action;

}

@property (assign,nonatomic,__weak) WFAction * action;              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(BOOL)isHidden;
-(id)defaultSerializedRepresentation;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(Class)singleStateClass;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)currentUnitType;
@end

