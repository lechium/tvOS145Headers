/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDStereoPairDailyCountLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	unsigned long long _smallHomePodPairCount;

}

@property (readonly) unsigned long long smallHomePodPairCount;              //@synthesize smallHomePodPairCount=_smallHomePodPairCount - In the implementation block
-(id)eventName;
-(id)serializedEvent;
-(unsigned long long)smallHomePodPairCount;
-(id)initWithSmallHomePodCount:(unsigned long long)arg1 ;
@end
