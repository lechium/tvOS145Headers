/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCLayer.h>

@interface MLCDropoutLayer : MLCLayer {

	float _rate;
	unsigned long long _seed;

}

@property (nonatomic,readonly) float rate;                           //@synthesize rate=_rate - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;              //@synthesize seed=_seed - In the implementation block
+(id)layerWithRate:(float)arg1 seed:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)seed;
-(float)rate;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(id)initWithRate:(float)arg1 seed:(unsigned long long)arg2 ;
@end

