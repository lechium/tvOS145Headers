/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LSInstallProgressProtocol <NSObject>
@required
-(void)addObserver;
-(void)_lsPing:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeObserver;
-(void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(BOOL)arg3;
-(void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(/*^block*/id)arg4;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/id)arg2;

@end

