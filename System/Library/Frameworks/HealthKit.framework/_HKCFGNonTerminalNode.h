/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKCFGNode.h>

@class NSArray, _HKCFGReplacementRule;

@interface _HKCFGNonTerminalNode : _HKCFGNode {

	NSArray* _nodes;
	id _value;
	_HKCFGReplacementRule* _rule;

}

@property (nonatomic,readonly) _HKCFGReplacementRule * rule;              //@synthesize rule=_rule - In the implementation block
+(id)nodeWithChildren:(id)arg1 rule:(id)arg2 rangeOfString:(NSRange)arg3 ;
-(id)evaluate;
-(_HKCFGReplacementRule *)rule;
@end

