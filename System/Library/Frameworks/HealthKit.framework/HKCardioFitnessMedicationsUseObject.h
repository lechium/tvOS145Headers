/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HKCardioFitnessMedicationsUseObject : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _options;

}

@property (readonly) BOOL medicationsAreSet; 
@property (readonly) BOOL takingCalciumChannelBlockers; 
@property (readonly) BOOL takingBetaBlockers; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithCardioFitnessMedicationsUseOptions:(unsigned long long)arg1 ;
-(BOOL)takingCalciumChannelBlockers;
-(BOOL)takingBetaBlockers;
-(BOOL)medicationsAreSet;
@end

