/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/HomeKitEventRouter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMEEvent, NSString;

@interface HMEEventInfo : NSObject <NSSecureCoding> {

	HMEEvent* _event;
	NSString* _topic;

}

@property (nonatomic,readonly) HMEEvent * event;                   //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSString * topic;              //@synthesize topic=_topic - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fromProtobuff:(id)arg1 ;
+(id)eventInfoFromProtoData:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMEEvent *)event;
-(NSString *)topic;
-(id)pbEventInfo;
-(id)initWithEvent:(id)arg1 topic:(id)arg2 ;
@end
