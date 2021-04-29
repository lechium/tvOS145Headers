/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSeriesSample.h>
#import <libobjc.A.dylib/_HKBinarySample.h>

@class NSData, NSNumber, NSString;

@interface HKHeartbeatSeriesSample : HKSeriesSample <_HKBinarySample> {

	NSData* _heartbeatData;
	long long _numberOfDataPoints;
	NSNumber* _cachedMinBeatsPerMinute;
	NSNumber* _cachedMaxBeatsPerMinute;

}

@property (readonly) NSNumber * _minimumBeatsPerMinute; 
@property (readonly) NSNumber * _maximumBeatsPerMinute; 
@property (readonly) long long numberOfDataPoints;                   //@synthesize numberOfDataPoints=_numberOfDataPoints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
+(id)_heartbeatSeriesSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 ;
+(id)_heartbeatSeriesSampleFromCSV:(id)arg1 startDate:(id)arg2 metadata:(id)arg3 error:(out id*)arg4 ;
+(id)heartbeatSequenceSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 ;
+(id)heartBeatSequenceSampleFromCSV:(id)arg1 startDate:(id)arg2 metadata:(id)arg3 error:(out id*)arg4 ;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)payload;
-(long long)numberOfDataPoints;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(BOOL)_shouldNotifyOnInsert;
-(void)_enumerateHeartbeatDataWithBlock:(/*^block*/id)arg1 ;
-(void)_setPayload:(id)arg1 ;
-(void)_computeMinimumAndMaximumBeatsPerMinute;
-(void)enumerateHeartbeatDataWithBlock:(/*^block*/id)arg1 ;
-(NSNumber *)_minimumBeatsPerMinute;
-(NSNumber *)_maximumBeatsPerMinute;
@end

