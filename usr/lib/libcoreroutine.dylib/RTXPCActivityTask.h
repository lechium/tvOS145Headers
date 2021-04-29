/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface RTXPCActivityTask : NSObject {

	NSString* _identifier;
	NSObject*<OS_xpc_object> _activity;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,copy,readonly) id handler;                                //@synthesize handler=_handler - In the implementation block
-(id)init;
-(NSString *)identifier;
-(id)handler;
-(NSObject*<OS_xpc_object>)activity;
-(id)initWithIdentifier:(id)arg1 activity:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

