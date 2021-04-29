/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, PLForegroundMonitorDelegate;
@class NSMutableSet, NSObject, BKSApplicationStateMonitor;

@interface PLForegroundMonitor : NSObject {

	NSMutableSet* _foregroundBundleIDs;
	NSObject*<OS_dispatch_queue> _applicationStateMonitorQueue;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	id<PLForegroundMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLForegroundMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<PLForegroundMonitorDelegate>)delegate;
-(void)setDelegate:(id<PLForegroundMonitorDelegate>)arg1 ;
-(void)_applicationChangeToFG:(id)arg1 ;
-(void)_applicationChangeToBG:(id)arg1 ;
-(void)_locked_applicationDidMoveToForeground:(id)arg1 ;
-(void)_locked_applicationDidMoveToBackground:(id)arg1 ;
-(void)_handleApplicationStateMonitorNotificationWithUserInfo:(id)arg1 ;
@end

