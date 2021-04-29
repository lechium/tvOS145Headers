/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface SPPowerAssertion : NSObject {

	unsigned _powerAssertionId;
	NSString* _reason;
	double _timeout;
	unsigned long long _type;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) NSString * reason;                                 //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned powerAssertionId;                       //@synthesize powerAssertionId=_powerAssertionId - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)reason;
-(unsigned long long)type;
-(void)setTimeout:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)timeout;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)assertionName;
-(void)drop;
-(void)_drop;
-(id)assertionType;
-(void)hold;
-(void)setPowerAssertionId:(unsigned)arg1 ;
-(unsigned)powerAssertionId;
-(id)powerAssertionOption;
-(id)initWithReason:(id)arg1 type:(unsigned long long)arg2 timeout:(double)arg3 ;
@end

