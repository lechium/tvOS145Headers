/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerEnabledMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSDate, NSArray, NSString;

@interface CSVoiceTriggerDataCollector : NSObject <CSSiriClientBehaviorMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate> {

	NSMutableArray* _vteiList;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastVTEnableDate;
	NSDate* _lastVTDisableDate;
	NSArray* _privacyApprovedFields;

}

@property (nonatomic,retain) NSMutableArray * vteiList;                       //@synthesize vteiList=_vteiList - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * lastVTEnableDate;                       //@synthesize lastVTEnableDate=_lastVTEnableDate - In the implementation block
@property (nonatomic,retain) NSDate * lastVTDisableDate;                      //@synthesize lastVTDisableDate=_lastVTDisableDate - In the implementation block
@property (nonatomic,retain) NSArray * privacyApprovedFields;                 //@synthesize privacyApprovedFields=_privacyApprovedFields - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(id)fetchVoiceTriggerHeartBeatMetrics;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)_createAndSubmitRejectLoggingDictWithSource:(id)arg1 withPHSAcceptInfo:(id)arg2 ;
-(id)_filteredVTEIArray;
-(void)_submitToggleReport;
-(void)addVTRejectEntry:(id)arg1 truncateData:(BOOL)arg2 ;
-(void)addVTAcceptEntryAndSubmit:(id)arg1 ;
-(NSMutableArray *)vteiList;
-(void)setVteiList:(NSMutableArray *)arg1 ;
-(NSDate *)lastVTEnableDate;
-(void)setLastVTEnableDate:(NSDate *)arg1 ;
-(NSDate *)lastVTDisableDate;
-(void)setLastVTDisableDate:(NSDate *)arg1 ;
-(NSArray *)privacyApprovedFields;
-(void)setPrivacyApprovedFields:(NSArray *)arg1 ;
@end

