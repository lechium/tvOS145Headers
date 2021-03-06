/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class BKSProcessAssertion, NSObject;

@interface MFTaskAssertion : NSObject {

	BKSProcessAssertion* _assertion;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithName:(id)arg1 ;
-(void)cancelTimer;
-(id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 preventIdleSleep:(BOOL)arg2 ;
@end

