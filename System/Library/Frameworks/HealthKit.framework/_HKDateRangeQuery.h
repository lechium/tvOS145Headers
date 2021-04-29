/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKDateRangeQueryClientInterface.h>

@class NSString;

@interface _HKDateRangeQuery : HKQuery <HKDateRangeQueryClientInterface> {

	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(id)initWithDateIntervalHandler:(/*^block*/id)arg1 ;
-(void)client_deliverDateIntervals:(id)arg1 forQuery:(id)arg2 ;
@end

