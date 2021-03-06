/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriAnalytics/SiriAnalytics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface SiriAnalyticsXPCMessageEnvelope : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _timestamp;
	long long _messageType;
	NSData* _messageBody;

}

@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long messageType;                     //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy,readonly) NSData * messageBody;                 //@synthesize messageBody=_messageBody - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)timestamp;
-(long long)messageType;
-(NSData *)messageBody;
-(id)initWithTimestamp:(unsigned long long)arg1 messageType:(long long)arg2 messageBody:(id)arg3 ;
@end

