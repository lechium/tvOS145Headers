/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface _UIStatisticsIntegrator : NSObject {

	NSObject*<OS_dispatch_queue> _reportingQueue;

}
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
+(void)createSharedInstanceIfNecessary;
-(id)init;
-(void)setValue:(long long)arg1 forKey:(id)arg2 ;
-(void)resetDistributionForKey:(id)arg1 ;
-(void)resetDistributionToValue:(double)arg1 forKey:(id)arg2 ;
-(void)recordDistributionValue:(double)arg1 forKey:(id)arg2 ;
-(void)recordDistributionTime:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)resetValueForKey:(id)arg1 ;
-(void)incrementValueBy:(long long)arg1 forKey:(id)arg2 ;
-(void)batchRecord:(/*^block*/id)arg1 ;
@end

