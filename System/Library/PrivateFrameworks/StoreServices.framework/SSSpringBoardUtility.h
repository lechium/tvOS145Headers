/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SSSpringBoardUtility : NSObject
+(id)_dispatchQueue;
+(void)wakeAppUsingRequest:(id)arg1 ;
+(id)_dispatchQueueSpringBoard;
+(BOOL)launchApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)_getProcessID:(int*)arg1 forApplicationIdentifier:(id)arg2 ;
+(void)_setApplicationState:(unsigned)arg1 forClientID:(id)arg2 ;
+(id)_applicationStateMonitor;
+(id)_getApplicationInfoForIdentifier:(id)arg1 key:(id)arg2 ;
+(id)_stateCache;
+(id)_dispatchQueueNotifications;
@end

