/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface OBAnalyticsEvent : NSObject {

	NSString* _name;
	NSDictionary* _payload;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
+(id)eventWithName:(id)arg1 withPayload:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)payload;
-(void)setPayload:(NSDictionary *)arg1 ;
@end

