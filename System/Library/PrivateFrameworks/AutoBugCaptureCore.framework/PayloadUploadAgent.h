/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NWUsageMonitor;

@interface PayloadUploadAgent : NSObject {

	NSObject*<OS_dispatch_queue> _uploadQueue;
	NSMutableDictionary* _pendingUploadMap;
	id _foregroundStateObserver;
	NWUsageMonitor* _usageMonitor;

}
+(id)sharedInstance;
+(void)reportFailureMetricForPayload:(id)arg1 ;
+(BOOL)uploadPayload:(id)arg1 ;
-(id)init;
-(void)scheduleUploadFor:(id)arg1 ;
-(void)scheduleUserPermissionRequestFor:(id)arg1 ;
-(void)processPendingUploadRequestFor:(id)arg1 ;
-(void)uploadPayloadsToRadarWithCaseID:(id)arg1 radarID:(id)arg2 token:(id)arg3 urgency:(long long)arg4 apnsIdentifier:(unsigned long long)arg5 ;
@end
