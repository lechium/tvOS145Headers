/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKSourceQueryClientInterface.h>

@protocol HKQueryServerInterface;
@class NSString;

@interface HKSourceQuery : HKQuery <HKSourceQueryClientInterface> {

	BOOL _hasDeliveredInitialResults;
	id<HKQueryServerInterface> _serverProxy;
	/*^block*/id _completionHandler;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id updateHandler;                        //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
+(void)configureServerInterface:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)completionHandler;
-(id)updateHandler;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)client_deliverSources:(id)arg1 forQuery:(id)arg2 ;
-(void)client_deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3 ;
-(id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

