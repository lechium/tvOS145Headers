/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLForegroundMonitorDelegate.h>

@class PLForegroundMonitor, NSString;

@interface PLCameraAppWatcher : NSObject <PLForegroundMonitorDelegate> {

	BOOL _isCameraRunning;
	PLForegroundMonitor* _foregroundMonitor;

}

@property (nonatomic,readonly) PLForegroundMonitor * foregroundMonitor;              //@synthesize foregroundMonitor=_foregroundMonitor - In the implementation block
@property (nonatomic,readonly) BOOL isCameraRunning;                                 //@synthesize isCameraRunning=_isCameraRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isCameraRunning;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3 ;
-(PLForegroundMonitor *)foregroundMonitor;
@end

