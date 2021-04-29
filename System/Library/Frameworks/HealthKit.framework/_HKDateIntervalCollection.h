/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDateComponents;

@interface _HKDateIntervalCollection : NSObject <NSCopying, NSSecureCoding> {

	double _approximateIntervalDuration;
	NSDate* _anchorDate;
	NSDateComponents* _intervalComponents;

}

@property (nonatomic,copy,readonly) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * intervalComponents;              //@synthesize intervalComponents=_intervalComponents - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)anchorDate;
-(NSDateComponents *)intervalComponents;
-(id)dateIntervalAtIndex:(long long)arg1 ;
-(id)dateIntervalContainingDate:(id)arg1 index:(long long*)arg2 ;
-(id)initWithAnchorDate:(id)arg1 intervalComponents:(id)arg2 ;
-(id)dateIntervalForIntervalsContainingInterval:(id)arg1 ;
@end
