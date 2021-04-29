/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVXTaskTrackingDelegate.h>

@protocol SVXPerforming, SVXTaskTrackingCenterDelegate;
@class NSMutableSet, NSString;

@interface SVXTaskTrackingCenter : NSObject <SVXTaskTrackingDelegate> {

	id<SVXPerforming> _performer;
	NSMutableSet* _contexts;
	id<SVXTaskTrackingCenterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)taskTrackerDidEnd:(id)arg1 ;
-(void)taskTracker:(id)arg1 childWillBegin:(id)arg2 ;
-(void)_beginContext:(id)arg1 ;
-(void)_endContext:(id)arg1 ;
-(void)_endContextsPassingTest:(/*^block*/id)arg1 ;
-(id)initWithPerformer:(id)arg1 delegate:(id)arg2 ;
-(id)beginTrackingTaskWithContext:(id)arg1 instrumentationContext:(id)arg2 ;
-(void)endTrackingTaskWithContext:(id)arg1 ;
-(void)endTrackingTasksPassingTest:(/*^block*/id)arg1 ;
-(void)endTrackingAllTasks;
-(void)getContextsOfAllTrackedTasksUsingBlock:(/*^block*/id)arg1 ;
@end

