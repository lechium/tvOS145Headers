/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSVoiceTriggerAssetHandler.h>
#import <libobjc.A.dylib/CSVoiceTriggerAssetDownloadMonitorDelegate.h>
#import <libobjc.A.dylib/CSFirstUnlockMonitorDelegate.h>
#import <libobjc.A.dylib/CSLanguageCodeUpdateMonitorDelegate.h>

@class CSAsset, NSString;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate> {

	CSAsset* _cachedAsset;

}

@property (retain) CSAsset * cachedAsset;                           //@synthesize cachedAsset=_cachedAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)start;
-(void)getVoiceTriggerAsset:(/*^block*/id)arg1 ;
-(void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(void)setCachedAsset:(CSAsset *)arg1 ;
-(CSAsset *)cachedAsset;
-(void)_getVoiceTriggerAssetFromAssetManager:(/*^block*/id)arg1 ;
-(void)_checkNewAssetAvailablity;
-(void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(BOOL)arg2 ;
@end

