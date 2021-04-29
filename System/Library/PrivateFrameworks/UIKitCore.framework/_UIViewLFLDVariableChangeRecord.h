/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIViewLFLDChangeRecord.h>

@class NSISVariable, UIView;

@interface _UIViewLFLDVariableChangeRecord : _UIViewLFLDChangeRecord {

	NSISVariable* _variable;
	double _value;
	UIView* _variableDelegate;

}

@property (nonatomic,readonly) NSISVariable * variable;                //@synthesize variable=_variable - In the implementation block
@property (nonatomic,readonly) double value;                           //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) UIView * variableDelegate;              //@synthesize variableDelegate=_variableDelegate - In the implementation block
-(id)description;
-(double)value;
-(NSISVariable *)variable;
-(id)initWithVariable:(id)arg1 inLayoutEngine:(id)arg2 ;
-(UIView *)variableDelegate;
@end

