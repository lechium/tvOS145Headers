/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface HMDCoreDuetLogEventData : NSObject {

	NSDictionary* _metadata;
	NSString* _value;

}

@property (copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (copy,readonly) NSString * value;                     //@synthesize value=_value - In the implementation block
-(NSString *)value;
-(NSDictionary *)metadata;
-(id)initWithMetadata:(id)arg1 value:(id)arg2 ;
@end

