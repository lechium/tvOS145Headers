/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSTrialAssetDownloadMonitorDelegate.h>

@class CSTrialAssetDownloadMonitor, NSString;

@interface CSSpeakerRecognitionAssetDownloadMonitor : CSEventMonitor <CSTrialAssetDownloadMonitorDelegate> {

	int _notifyToken;
	unsigned long long _lastUpdatedAssetType;
	CSTrialAssetDownloadMonitor* _trialAssetMonitor;

}

@property (nonatomic,retain) CSTrialAssetDownloadMonitor * trialAssetMonitor;              //@synthesize trialAssetMonitor=_trialAssetMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 ;
-(const char*)_notificationKey;
-(void)_didInstalledNewAsset;
-(void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(BOOL)arg2 assetType:(unsigned long long)arg3 ;
-(CSTrialAssetDownloadMonitor *)trialAssetMonitor;
-(void)setTrialAssetMonitor:(CSTrialAssetDownloadMonitor *)arg1 ;
@end
