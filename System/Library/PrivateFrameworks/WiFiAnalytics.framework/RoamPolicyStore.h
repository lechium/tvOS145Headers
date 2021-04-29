/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AnalyticsStoreMOHandler;

@interface RoamPolicyStore : NSObject {

	BOOL _enabled;
	AnalyticsStoreMOHandler* _roamPolicyMOHandler;

}

@property (nonatomic,retain) AnalyticsStoreMOHandler * roamPolicyMOHandler;              //@synthesize roamPolicyMOHandler=_roamPolicyMOHandler - In the implementation block
@property (assign) BOOL enabled;                                                         //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithAnalyticsStore:(id)arg1 ;
-(BOOL)buildRoamPoliciesForNetwork:(id)arg1 bssid:(id)arg2 ;
-(BOOL)buildRoamCacheInfoForNetwork:(id)arg1 bssid:(id)arg2 ;
-(BOOL)monitorDeploymentChanges:(id)arg1 ssid:(id)arg2 roamStatus:(unsigned long long)arg3 originBssid:(id)arg4 targetBssid:(id)arg5 ;
-(void)resetAdaptiveRoamingStateMachine:(id)arg1 bssid:(id)arg2 ;
-(AnalyticsStoreMOHandler *)roamPolicyMOHandler;
-(BOOL)doWeHaveEnoughSamplesToBuildChanList:(unsigned long long)arg1 ;
-(void)deriveNeighborChannelsFromRoamTargetsChannels:(id)arg1 bssid:(id)arg2 ssid:(id)arg3 ;
-(BOOL)doWeHaveEnoughSamplesToDeriveRSSITrigger:(unsigned long long)arg1 ;
-(id)deriveRoamInfo:(id)arg1 ssid:(id)arg2 numRoamSamplesCollectedSoFar:(unsigned long long)arg3 ;
-(void)deriveBadRoams:(id)arg1 ;
-(void)predictPath:(id)arg1 ;
-(void)listOutMostUsedRoamReasons:(unsigned long long)arg1 roamReason:(unsigned long long)arg2 ;
-(void)listOutTimeSpentOnBss:(unsigned long long)arg1 timeSpentOnBss:(unsigned long long)arg2 motionState:(long long)arg3 ;
-(void)checkForFrequentRoams:(unsigned long long)arg1 date:(id)arg2 motionState:(long long)arg3 ;
-(void)listOutMostUsedSourceRssi:(id)arg1 neighborCount:(unsigned long long)arg2 sourceRssi:(long long)arg3 ;
-(void)listOutLazyRoamScanInfo:(id)arg1 neighborCount:(unsigned long long)arg2 sourceRssi:(long long)arg3 ;
-(void)listOutReassocRoams:(id)arg1 neighborCount:(unsigned long long)arg2 sourceRssi:(long long)arg3 ;
-(void)listOutLinkLossSuppressionRoams:(unsigned long long)arg1 ;
-(void)listOutBTMRoams:(unsigned long long)arg1 ;
-(void)storeNeighborsInfoLearningsFromRoamInfo:(id)arg1 neighborCount:(unsigned long long)arg2 ;
-(BOOL)inRange:(long long)arg1 high:(long long)arg2 value:(long long)arg3 ;
-(BOOL)isHomeEnvironment:(id)arg1 ;
-(BOOL)checkForNewBSSAddition:(id)arg1 bssid:(id)arg2 ;
-(void)updateCoreDataWithNewChannelInfo:(long long)arg1 bssid:(id)arg2 ssid:(id)arg3 ;
-(BOOL)doWeHaveEnoughSamplesToBuildRoamCache:(unsigned long long)arg1 ;
-(void)locateTheNeighbor:(unsigned long long)arg1 cacheRssi:(long long)arg2 ;
-(void)storeNeighborsInfoLearningsFromRoamCacheInfo:(id)arg1 neighborCount:(unsigned long long)arg2 ;
-(void)setDeploymentFromRoamInfo:(id)arg1 neighborCount:(unsigned long long)arg2 ;
-(void)setDeploymentFromRoamCacheInfo:(id)arg1 neighborCount:(unsigned long long)arg2 ;
-(BOOL)isWorkEnvironment:(id)arg1 ;
-(BOOL)isNetworkQualifiedForAdaptiveRoaming:(id)arg1 ;
-(void)deriveRoamTriggerInfoFromRoamObjects:(id)arg1 numRoamSamplesCollectedSoFar:(unsigned long long)arg2 bssid:(id)arg3 ssid:(id)arg4 ;
-(void)findDeploymentType:(unsigned long long)arg1 ;
-(id)collectRoamCandidates:(id)arg1 roamSamplesToCollect:(unsigned long long)arg2 ;
-(void)setRoamPolicyMOHandler:(AnalyticsStoreMOHandler *)arg1 ;
@end

