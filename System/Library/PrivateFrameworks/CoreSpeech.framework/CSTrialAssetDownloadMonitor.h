/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>

@class NSDictionary;

@interface CSTrialAssetDownloadMonitor : CSEventMonitor {

	NSDictionary* _trialClientDict;

}
+(id)sharedInstance;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)downloadAndNotifyTrialAssetsUpdateForNamespace:(id)arg1 onQueue:(id)arg2 ;
-(id)_trailStageDirectoryForAsset:(id)arg1 ;
-(BOOL)_validateDownloadedAssetForAssetType:(unsigned long long)arg1 ;
-(void)_notifyTrialAssetDownloadForAssetType:(unsigned long long)arg1 ;
@end
