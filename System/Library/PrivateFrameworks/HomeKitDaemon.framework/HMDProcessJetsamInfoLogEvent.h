/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDProcessJetsamInfoLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _jetsamReason;

}

@property (nonatomic,copy,readonly) NSString * jetsamReason;              //@synthesize jetsamReason=_jetsamReason - In the implementation block
-(id)eventName;
-(id)serializedEvent;
-(id)initWithJetsamReason:(id)arg1 ;
-(NSString *)jetsamReason;
@end

