/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GKNoiseSource.h>

@interface GKConstantNoiseSource : GKNoiseSource {

	double _value;

}

@property (assign,nonatomic) double value;              //@synthesize value=_value - In the implementation block
+(id)constantNoiseWithValue:(double)arg1 ;
-(id)init;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)initWithValue:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
@end

