/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2RequestContext.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface NEIKEv2DeleteIKEContext : NEIKEv2RequestContext {

	BOOL _responseNeeded;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (assign,nonatomic) BOOL responseNeeded;                                     //@synthesize responseNeeded=_responseNeeded - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id callback;                                               //@synthesize callback=_callback - In the implementation block
-(id)description;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)sendCallbackSuccess:(BOOL)arg1 session:(id)arg2 ;
-(BOOL)responseNeeded;
-(id)initDeleteIKEWithResponse:(BOOL)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)setResponseNeeded:(BOOL)arg1 ;
@end

