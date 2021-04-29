/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedQuaternion : MDLAnimatedValue
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(SCD_Struct_MD20)floatQuaternionAtTime:(double)arg1 ;
-(SCD_Struct_MD20)doubleQuaternionAtTime:(double)arg1 ;
-(VtValue*)defaultVtValue;
-(unsigned long long)getFloatQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDoubleQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setFloatQuaternion:(SCD_Struct_MD20)arg1 atTime:(double)arg2 ;
-(void)setDoubleQuaternion:(SCD_Struct_MD20)arg1 atTime:(double)arg2 ;
-(void)resetWithFloatQuaternionArray:(const SCD_Struct_MD20*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDoubleQuaternionArray:(const SCD_Struct_MD20*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
@end

