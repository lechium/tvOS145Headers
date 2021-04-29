/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface MCProcessAssertion : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(void)_createAssertion;
-(void)_releaseAssertion;
@end

