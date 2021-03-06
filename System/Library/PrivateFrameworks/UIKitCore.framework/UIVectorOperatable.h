/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIVectorOperatable <NSObject,NSCopying>
@required
+(id)zero;
+(id)epsilon;
-(id)copy;
-(BOOL)isUndefined;
-(id)addVector:(id)arg1;
-(id)getValue;
-(id)multiplyByScalar:(double)arg1;
-(BOOL)isApproximatelyEqualTo:(id)arg1;
-(id)interpolateTo:(id)arg1 progress:(double)arg2;
-(void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(SCD_Struct_UI139)arg5 state:(SCD_Struct_UI140)arg6 delta:(double)arg7;
-(BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
-(void)reinitWithVector:(id)arg1;
-(id)getNSValue;
-(id)multiplyByVector:(id)arg1;

@end

