/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMHeartRateData : CMLogItem {

	BOOL _error;
	double _heartRate;
	double _confidence;
	NSDate* _startDate;
	long long _dataSource;
	long long _mode;

}

@property (nonatomic,readonly) double heartRate;                  //@synthesize heartRate=_heartRate - In the implementation block
@property (nonatomic,readonly) double confidence;                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) BOOL error;                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) long long mode;                    //@synthesize mode=_mode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataSourceName:(long long)arg1 ;
+(id)modeName:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)error;
-(double)confidence;
-(NSDate *)startDate;
-(long long)mode;
-(long long)dataSource;
-(double)heartRate;
-(id)initWithHeartRate:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 startDate:(id)arg4 error:(BOOL)arg5 dataSource:(long long)arg6 mode:(long long)arg7 ;
@end

