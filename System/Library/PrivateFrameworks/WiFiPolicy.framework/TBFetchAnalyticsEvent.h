/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TBAnalyticsEvent.h>

@class NSNumber, NSString, NSError, NSDate, NSDictionary;

@interface TBFetchAnalyticsEvent : NSObject <TBAnalyticsEvent> {

	unsigned long long _source;
	unsigned long long _type;
	unsigned long long _trigger;
	NSNumber* _duration;
	NSNumber* _requestCount;
	NSNumber* _resultCount;
	NSString* _tileKey;
	NSError* _error;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned long long source;                     //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long trigger;                    //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSNumber * requestCount;                       //@synthesize requestCount=_requestCount - In the implementation block
@property (nonatomic,retain) NSNumber * resultCount;                        //@synthesize resultCount=_resultCount - In the implementation block
@property (nonatomic,retain) NSString * tileKey;                            //@synthesize tileKey=_tileKey - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDictionary * eventDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchEventWithSource:(unsigned long long)arg1 type:(unsigned long long)arg2 trigger:(unsigned long long)arg3 duration:(id)arg4 requestCount:(id)arg5 resultCount:(id)arg6 error:(id)arg7 tileKey:(id)arg8 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSDate *)date;
-(unsigned long long)type;
-(NSError *)error;
-(unsigned long long)source;
-(void)setError:(NSError *)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(NSNumber *)resultCount;
-(NSNumber *)duration;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDuration:(NSNumber *)arg1 ;
-(unsigned long long)trigger;
-(void)setRequestCount:(NSNumber *)arg1 ;
-(NSNumber *)requestCount;
-(void)setTrigger:(unsigned long long)arg1 ;
-(NSString *)tileKey;
-(NSString *)eventName;
-(void)setTileKey:(NSString *)arg1 ;
-(NSDictionary *)eventDictionary;
-(void)setResultCount:(NSNumber *)arg1 ;
@end

