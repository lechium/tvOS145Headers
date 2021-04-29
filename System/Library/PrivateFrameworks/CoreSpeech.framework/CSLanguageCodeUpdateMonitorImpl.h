/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSLanguageCodeUpdateMonitor.h>

@interface CSLanguageCodeUpdateMonitorImpl : CSLanguageCodeUpdateMonitor {

	int _notifyToken;

}
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2 ;
-(void)_didReceiveLanguageCodeUpdate;
-(void)notifySiriLanguageCodeChanged:(id)arg1 ;
@end

