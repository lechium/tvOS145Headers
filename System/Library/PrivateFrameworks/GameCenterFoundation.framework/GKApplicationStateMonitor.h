/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol LSApplicationWorkspaceObserverProtocol;
@class BKSApplicationStateMonitor, NSString;

@interface GKApplicationStateMonitor : NSObject <LSApplicationWorkspaceObserverProtocol> {

	id<LSApplicationWorkspaceObserverProtocol> _delegate;
	BKSApplicationStateMonitor* _applicationStateMonitor;

}

@property (nonatomic,retain) BKSApplicationStateMonitor * applicationStateMonitor;                    //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,copy) id handler; 
@property (assign,nonatomic,__weak) id<LSApplicationWorkspaceObserverProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<LSApplicationWorkspaceObserverProtocol>)delegate;
-(void)setDelegate:(id<LSApplicationWorkspaceObserverProtocol>)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)startObservingApplicationWorkspaceChanges;
-(BOOL)observingStateChangesForBundleID:(id)arg1 ;
-(void)startObservingStateChangesForBundleID:(id)arg1 ;
-(BKSApplicationStateMonitor *)applicationStateMonitor;
-(void)setApplicationStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
@end

