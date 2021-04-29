/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, BBSettingsGateway, BBObserver, NSObject, NSString;

@interface UNSSettingsGateway : NSObject <BBObserverDelegate> {

	NSMutableArray* _observers;
	BBSettingsGateway* _settingsGateway;
	BBObserver* _settingsObserver;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)allSectionInfo;
-(id)sectionInfoForSectionID:(id)arg1 ;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(void)observer:(id)arg1 updateGlobalSettings:(id)arg2 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)globalContentPreviewSetting;
-(void)setGlobalContentPreviewSetting:(long long)arg1 ;
-(long long)globalSpokenNotificationSetting;
-(void)setGlobalSpokenNotificationSetting:(long long)arg1 ;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(id)allEffectiveSectionInfo;
-(id)sectionInfoForSectionIDs:(id)arg1 ;
-(id)effectiveSectionInfoForSectionID:(id)arg1 ;
-(id)effectiveSectionInfoForSectionIDs:(id)arg1 ;
-(void)_queue_addObserver:(id)arg1 ;
-(void)_queue_removeObserver:(id)arg1 ;
-(void)_queue_setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(id)_queue_effectiveSectionInfoForSectionID:(id)arg1 ;
-(id)_queue_sectionInfoForSectionID:(id)arg1 ;
-(id)_queue_effectiveSectionInfosForSectionIDs:(id)arg1 ;
-(id)_queue_sectionInfosForSectionIDs:(id)arg1 ;
-(void)_queue_getSectionInfoForSectionIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_queue_allEffectiveSectionInfos;
-(id)_queue_allSectionInfos;
-(long long)_queue_globalContentPreviewSetting;
-(void)_queue_setGlobalContentPreviewSetting:(long long)arg1 ;
-(long long)_queue_globalSpokenNotificationSetting;
-(void)_queue_setGlobalSpokenNotificationSetting:(long long)arg1 ;
@end

