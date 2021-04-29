/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSDictionary;

@interface IDSWiFiSetupAttemptMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned long long _attemptType;
	unsigned long long _msDuration;
	unsigned long long _result;
	NSString* _client;

}

@property (nonatomic,readonly) unsigned long long attemptType;              //@synthesize attemptType=_attemptType - In the implementation block
@property (nonatomic,readonly) unsigned long long msDuration;               //@synthesize msDuration=_msDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long result;                   //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSString * client;                           //@synthesize client=_client - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)client;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)result;
-(unsigned long long)attemptType;
-(unsigned long long)msDuration;
-(id)initWithAttemptType:(unsigned long long)arg1 msDuration:(unsigned long long)arg2 result:(unsigned long long)arg3 client:(id)arg4 ;
@end
