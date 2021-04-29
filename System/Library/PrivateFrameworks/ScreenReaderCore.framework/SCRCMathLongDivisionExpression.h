/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@class SCRCMathExpression;

@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression {

	SCRCMathExpression* _divisor;

}

@property (nonatomic,retain) SCRCMathExpression * divisor;              //@synthesize divisor=_divisor - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(void)setDivisor:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)divisor;
@end

