/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDLegacyPrimaryElectionLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _reason;
	NSString* _criteria;
	unsigned long long _availableResidentCount;

}

@property (copy) NSString * reason;                                        //@synthesize reason=_reason - In the implementation block
@property (copy) NSString * criteria;                                      //@synthesize criteria=_criteria - In the implementation block
@property (assign) unsigned long long availableResidentCount;              //@synthesize availableResidentCount=_availableResidentCount - In the implementation block
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(id)eventName;
-(NSString *)criteria;
-(void)setCriteria:(NSString *)arg1 ;
-(id)serializedEvent;
-(unsigned long long)availableResidentCount;
-(void)setAvailableResidentCount:(unsigned long long)arg1 ;
@end
