/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface HKDaemonTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)transactionWithName:(id)arg1 ;
+(id)transactionWithOwner:(id)arg1 ;
+(id)transactionWithOwner:(id)arg1 activityName:(id)arg2 ;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_initWithName:(id)arg1 ;
@end

