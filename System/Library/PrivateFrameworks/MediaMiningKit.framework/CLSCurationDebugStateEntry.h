/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CLSCurationDebugStateEntry : NSObject {

	unsigned long long _state;
	NSString* _reason;
	NSString* _agent;
	NSString* _stage;

}

@property (readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (readonly) NSString * agent;                      //@synthesize agent=_agent - In the implementation block
@property (readonly) NSString * stage;                      //@synthesize stage=_stage - In the implementation block
-(NSString *)reason;
-(unsigned long long)state;
-(NSString *)stage;
-(NSString *)agent;
-(id)initWithState:(unsigned long long)arg1 reason:(id)arg2 agent:(id)arg3 stage:(id)arg4 ;
@end
