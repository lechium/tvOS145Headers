/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKMedicalDateInterval;

@interface HKMedicationDosage : NSObject <NSSecureCoding, NSCopying> {

	NSString* _instruction;
	HKMedicalDateInterval* _timingPeriod;

}

@property (nonatomic,copy,readonly) NSString * instruction;                            //@synthesize instruction=_instruction - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDateInterval * timingPeriod;              //@synthesize timingPeriod=_timingPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dosageWithInstruction:(id)arg1 timingPeriod:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)instruction;
-(id)initWithInstruction:(id)arg1 timingPeriod:(id)arg2 ;
-(HKMedicalDateInterval *)timingPeriod;
@end

