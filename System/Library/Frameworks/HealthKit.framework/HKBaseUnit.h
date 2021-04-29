/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKUnit.h>
#import <libobjc.A.dylib/_HKFactor.h>

@class NSString, _HKBaseDimension;

@interface HKBaseUnit : HKUnit <_HKFactor> {

	NSString* _unitString;
	NSString* _prefix;
	NSString* _root;
	BOOL _uniqued;
	double _proportionalSize;

}

@property (nonatomic,readonly) double proportionalSize;                   //@synthesize proportionalSize=_proportionalSize - In the implementation block
@property (nonatomic,readonly) _HKBaseDimension * dimension; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)unitFromString:(id)arg1 ;
+(id)_uniquedUnitWithPrefix:(id)arg1 rootUnit:(id)arg2 ;
+(id)_uniquedRootUnit:(id)arg1 ;
+(id)_uniquedUnitWithPrefix:(id)arg1 conversionConstant:(id)arg2 rootUnit:(id)arg3 ;
+(id)_uniquedRootUnitFromDefinition:(SCD_Struct_HK25)arg1 ;
+(id)_rootUnitWithDefinition:(SCD_Struct_HK25)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(_HKBaseDimension *)dimension;
-(id)unitString;
-(id)_baseUnits;
-(id)_computeBaseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
-(double)proportionalSize;
-(id)_unitByPrefixing:(id)arg1 withConversionConstant:(id)arg2 ;
-(id)_initWithUnitString:(id)arg1 proportionalSize:(double)arg2 scaleOffset:(double)arg3 ;
@end

