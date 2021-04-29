/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DNDSSysdiagnoseDataProvider.h>
#import <libobjc.A.dylib/DNDSLifetimeMonitor.h>

@protocol OS_dispatch_queue, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;
@class NSArray, NSObject, NSString;

@interface DNDSBaseLifetimeMonitor : NSObject <DNDSSysdiagnoseDataProvider, DNDSLifetimeMonitor> {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _activeLifetimeAssertionUUIDs;
	id<DNDSLifetimeMonitorDataSource> _dataSource;
	id<DNDSLifetimeMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSString * sysdiagnoseDataIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * activeLifetimeAssertionUUIDs;                    //@synthesize activeLifetimeAssertionUUIDs=_activeLifetimeAssertionUUIDs - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(Class)lifetimeClass;
-(id)init;
-(void)dealloc;
-(id<DNDSLifetimeMonitorDelegate>)delegate;
-(void)setDelegate:(id<DNDSLifetimeMonitorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<DNDSLifetimeMonitorDataSource>)dataSource;
-(void)setDataSource:(id<DNDSLifetimeMonitorDataSource>)arg1 ;
-(id)sysdiagnoseDataForDate:(id)arg1 ;
-(NSString *)sysdiagnoseDataIdentifier;
-(void)refreshMonitorFromQueueForDate:(id)arg1 ;
-(id)updateForModeAssertions:(id)arg1 date:(id)arg2 ;
-(NSArray *)activeLifetimeAssertionUUIDs;
-(void)refreshMonitorForDate:(id)arg1 ;
@end
