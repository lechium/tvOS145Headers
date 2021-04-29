/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString, NSNumber;

@interface HMDCloudManagerModelFailureEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _model;
	NSNumber* _failureCode;
	NSString* _errorDomain;
	NSNumber* _errorCode;

}

@property (copy,readonly) NSString * model;                    //@synthesize model=_model - In the implementation block
@property (copy,readonly) NSNumber * failureCode;              //@synthesize failureCode=_failureCode - In the implementation block
@property (copy,readonly) NSString * errorDomain;              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (copy,readonly) NSNumber * errorCode;                //@synthesize errorCode=_errorCode - In the implementation block
-(NSString *)model;
-(NSString *)errorDomain;
-(NSNumber *)errorCode;
-(id)eventName;
-(id)attributeDescriptions;
-(id)serializedEvent;
-(NSNumber *)failureCode;
-(id)initWithModel:(id)arg1 failureCode:(unsigned long long)arg2 error:(id)arg3 ;
@end

