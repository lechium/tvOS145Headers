/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableIndexSet, NSIndexSet;

@interface HKHeartRateSummaryStatisticsBucket : NSObject <NSSecureCoding> {

	NSMutableIndexSet* _heartRatesInBeatsPerMinute;
	long long _bucketIndex;

}

@property (nonatomic,readonly) long long bucketIndex;                                //@synthesize bucketIndex=_bucketIndex - In the implementation block
@property (nonatomic,readonly) NSIndexSet * heartRatesInBeatsPerMinute;              //@synthesize heartRatesInBeatsPerMinute=_heartRatesInBeatsPerMinute - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)bucketIndex;
-(NSIndexSet *)heartRatesInBeatsPerMinute;
-(id)initWithBucketIndex:(long long)arg1 ;
-(void)addHeartRateInBeatsPerMinute:(long long)arg1 ;
@end

