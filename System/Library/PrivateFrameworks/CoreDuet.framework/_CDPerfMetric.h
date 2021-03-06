/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreDuet/CoreDuet-Structs.h>
@class NSString, _CDPerfMetricFamily, NSDate;

@interface _CDPerfMetric : NSObject {

	os_unfair_lock_s _lock;
	unsigned long long _count;
	double _lastElapsedTime;
	double _minimumElapsedTime;
	double _maximumElapsedTime;
	double _totalElapsedTime;
	double _lastUpdateTime;
	unsigned long long _lastResultCount;
	unsigned long long _errorCount;
	NSString* _name;
	NSString* _string;
	_CDPerfMetricFamily* _family;

}

@property (__weak,readonly) _CDPerfMetricFamily * family;              //@synthesize family=_family - In the implementation block
@property (readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (readonly) NSString * string;                                //@synthesize string=_string - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) NSDate * lastUpdate; 
@property (readonly) double lastElapsedTime; 
@property (readonly) double totalElapsedTime;                          //@synthesize totalElapsedTime=_totalElapsedTime - In the implementation block
@property (readonly) double minimumElapsedTime; 
@property (readonly) double maximumElapsedTime; 
@property (readonly) double averageElapsedTime; 
@property (readonly) unsigned long long lastResultCount; 
@property (readonly) unsigned long long errorCount; 
-(NSString *)name;
-(NSString *)string;
-(unsigned long long)count;
-(unsigned long long)errorCount;
-(_CDPerfMetricFamily *)family;
-(id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3 ;
-(double)lastElapsedTime;
-(double)minimumElapsedTime;
-(double)maximumElapsedTime;
-(double)averageElapsedTime;
-(NSDate *)lastUpdate;
-(unsigned long long)lastResultCount;
-(double)totalElapsedTime;
@end

