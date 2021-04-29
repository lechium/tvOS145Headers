/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OSAnalytics/OSAnalytics-Structs.h>
#import <OSAnalytics/OSAReport.h>
#import <OSAnalytics/OSAConcreteReport.h>

@class NSString, NSMutableArray, NSSet;

@interface OSAJetsamReport : OSAReport <OSAConcreteReport> {

	NSString* _largestProcess;
	NSString* _largestActiveApp;
	NSMutableArray* _killedActiveApps;
	unsigned long long _wiredBytes;
	unsigned _killed_or_suspended_count;
	BOOL _isSuspendedOnlyJetsam;
	jetsam_snapshot* _snapshot;
	NSString* _event_reason;
	unsigned long long _event_code;
	BOOL _aleFlag;
	NSSet* _visibilityEndowmentState;
	NSSet* _audioAssertionState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(jetsam_snapshot*)fetchSnapshotWithFlags:(unsigned)arg1 error:(id*)arg2 ;
+(long long)_daysSince1970;
+(int)instrumentEventsWithAudioAssertionState:(id)arg1 visibliltyEndowmentState:(id)arg2 ;
-(void)dealloc;
-(id)problemType;
-(BOOL)isActionable;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)saveWithOptions:(id)arg1 ;
-(id)additionalIPSMetadata;
-(void)instrumentEvents:(BOOL)arg1 ;
-(void)acquireJetsamDataWithFlags:(unsigned)arg1 ;
-(BOOL)alreadyDumpedSuspendedJetsamLogToday;
-(void)_setDumpedSuspendedJetsamLog;
-(id)initWithIncidentID:(id)arg1 visibilityEndowmentState:(id)arg2 audioAssertionState:(id)arg3 ;
-(void)acquireJetsamData;
-(void)_getSnapshotWithFlags:(unsigned)arg1 ;
@end
