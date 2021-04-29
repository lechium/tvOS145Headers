/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber, EDAMClientSyncRateConfig;

@interface EDAMSyncState : FATObject {

	NSNumber* _currentTime;
	NSNumber* _fullSyncBefore;
	NSNumber* _updateCount;
	NSNumber* _uploaded;
	NSNumber* _userLastUpdated;
	NSNumber* _userMaxMessageEventId;
	NSNumber* _businessSummaryUpdated;
	NSNumber* _communicationEngineUpdateId;
	NSNumber* _currentDevicesUsed;
	NSNumber* _showChoiceScreen;
	EDAMClientSyncRateConfig* _clientSyncRateConfig;

}

@property (nonatomic,retain) NSNumber * currentTime;                                       //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSNumber * fullSyncBefore;                                    //@synthesize fullSyncBefore=_fullSyncBefore - In the implementation block
@property (nonatomic,retain) NSNumber * updateCount;                                       //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,retain) NSNumber * uploaded;                                          //@synthesize uploaded=_uploaded - In the implementation block
@property (nonatomic,retain) NSNumber * userLastUpdated;                                   //@synthesize userLastUpdated=_userLastUpdated - In the implementation block
@property (nonatomic,retain) NSNumber * userMaxMessageEventId;                             //@synthesize userMaxMessageEventId=_userMaxMessageEventId - In the implementation block
@property (nonatomic,retain) NSNumber * businessSummaryUpdated;                            //@synthesize businessSummaryUpdated=_businessSummaryUpdated - In the implementation block
@property (nonatomic,retain) NSNumber * communicationEngineUpdateId;                       //@synthesize communicationEngineUpdateId=_communicationEngineUpdateId - In the implementation block
@property (nonatomic,retain) NSNumber * currentDevicesUsed;                                //@synthesize currentDevicesUsed=_currentDevicesUsed - In the implementation block
@property (nonatomic,retain) NSNumber * showChoiceScreen;                                  //@synthesize showChoiceScreen=_showChoiceScreen - In the implementation block
@property (nonatomic,retain) EDAMClientSyncRateConfig * clientSyncRateConfig;              //@synthesize clientSyncRateConfig=_clientSyncRateConfig - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)updateCount;
-(void)setUpdateCount:(NSNumber *)arg1 ;
-(NSNumber *)currentTime;
-(void)setCurrentTime:(NSNumber *)arg1 ;
-(void)setUploaded:(NSNumber *)arg1 ;
-(NSNumber *)uploaded;
-(NSNumber *)fullSyncBefore;
-(void)setFullSyncBefore:(NSNumber *)arg1 ;
-(NSNumber *)userLastUpdated;
-(void)setUserLastUpdated:(NSNumber *)arg1 ;
-(NSNumber *)userMaxMessageEventId;
-(void)setUserMaxMessageEventId:(NSNumber *)arg1 ;
-(NSNumber *)businessSummaryUpdated;
-(void)setBusinessSummaryUpdated:(NSNumber *)arg1 ;
-(NSNumber *)communicationEngineUpdateId;
-(void)setCommunicationEngineUpdateId:(NSNumber *)arg1 ;
-(NSNumber *)currentDevicesUsed;
-(void)setCurrentDevicesUsed:(NSNumber *)arg1 ;
-(NSNumber *)showChoiceScreen;
-(void)setShowChoiceScreen:(NSNumber *)arg1 ;
-(EDAMClientSyncRateConfig *)clientSyncRateConfig;
-(void)setClientSyncRateConfig:(EDAMClientSyncRateConfig *)arg1 ;
@end

