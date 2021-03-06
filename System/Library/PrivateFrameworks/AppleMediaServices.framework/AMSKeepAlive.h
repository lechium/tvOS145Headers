/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface AMSKeepAlive : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _logKey;
	NSString* _name;
	long long _style;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long style;              //@synthesize style=_style - In the implementation block
+(void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(/*^block*/id)arg3 ;
+(id)keepAliveWithName:(id)arg1 style:(long long)arg2 ;
+(void)_accessAssertionCache:(/*^block*/id)arg1 ;
+(void)_handleAssertionExpiration;
+(id)keepAliveWithFormat:(id)arg1 ;
+(id)keepAliveWithName:(id)arg1 ;
-(NSString *)name;
-(void)dealloc;
-(void)invalidate;
-(id)initWithName:(id)arg1 ;
-(long long)style;
-(id)_assertionName;
-(id)_cacheKey;
-(id)initWithName:(id)arg1 style:(long long)arg2 ;
-(void)_takeOSTransaction;
-(void)_takeProcessAssertion;
-(void)_startLogTimer;
-(void)_removeProcessAssertion;
-(void)_removeOSTransaction;
@end

