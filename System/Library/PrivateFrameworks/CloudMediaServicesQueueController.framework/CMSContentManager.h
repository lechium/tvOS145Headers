/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesQueueController.framework/CloudMediaServicesQueueController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSURL, NSString, NSDate, NSObject, CMSCloudExtensionSession, CMSPlaybackQueueController, CMSPlayerPointer, CMSMPNowPlayingInfoManager, CMSDuetManager, NSDictionary, CMSNetworkActivity;

@interface CMSContentManager : NSObject {

	NSURL* _referrerPagingURL;
	NSURL* _nextContentURL;
	NSURL* _previousContentURL;
	NSString* _queueFirstContentIdentifier;
	NSString* _queueLastContentIdentifier;
	NSDate* _queueExpirationDate;
	NSObject*<OS_dispatch_source> _updateContentTimer;
	CMSCloudExtensionSession* _session;
	CMSPlaybackQueueController* _queueController;
	CMSPlayerPointer* _playerPointer;
	CMSMPNowPlayingInfoManager* _MPInfoManager;
	CMSDuetManager* _duetManager;
	NSDictionary* _jsonDataFromURL;
	CMSNetworkActivity* _parentNetworkActivity;
	CMSNetworkActivity* _queueSegmentNetworkActivity;

}

@property (nonatomic,retain) NSDictionary * jsonDataFromURL;                                //@synthesize jsonDataFromURL=_jsonDataFromURL - In the implementation block
@property (nonatomic,retain) CMSNetworkActivity * parentNetworkActivity;                    //@synthesize parentNetworkActivity=_parentNetworkActivity - In the implementation block
@property (nonatomic,retain) CMSNetworkActivity * queueSegmentNetworkActivity;              //@synthesize queueSegmentNetworkActivity=_queueSegmentNetworkActivity - In the implementation block
@property (nonatomic,readonly) CMSCloudExtensionSession * session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) CMSPlaybackQueueController * queueController;                  //@synthesize queueController=_queueController - In the implementation block
@property (nonatomic,retain) CMSPlayerPointer * playerPointer;                              //@synthesize playerPointer=_playerPointer - In the implementation block
@property (nonatomic,retain) CMSMPNowPlayingInfoManager * MPInfoManager;                    //@synthesize MPInfoManager=_MPInfoManager - In the implementation block
@property (nonatomic,retain) CMSDuetManager * duetManager;                                  //@synthesize duetManager=_duetManager - In the implementation block
+(BOOL)isContentValid;
-(void)dealloc;
-(CMSCloudExtensionSession *)session;
-(CMSPlaybackQueueController *)queueController;
-(void)closeSession;
-(void)setQueueController:(CMSPlaybackQueueController *)arg1 ;
-(void)invalidateTimer;
-(CMSNetworkActivity *)parentNetworkActivity;
-(BOOL)canRequestAdditionalSegment:(unsigned long long)arg1 ;
-(void)queueController:(id)arg1 report:(unsigned long long)arg2 nowPlaying:(id)arg3 previous:(id)arg4 timestamp:(id)arg5 ;
-(void)requestDataForSegment:(unsigned long long)arg1 transition:(unsigned long long)arg2 playerContext:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(CMSMPNowPlayingInfoManager *)MPInfoManager;
-(void)setParentNetworkActivity:(CMSNetworkActivity *)arg1 ;
-(CMSPlayerPointer *)playerPointer;
-(void)setPlayerPointer:(CMSPlayerPointer *)arg1 ;
-(CMSDuetManager *)duetManager;
-(void)setDuetManager:(CMSDuetManager *)arg1 ;
-(void)_initializeDuetManagerWithBundleID:(id)arg1 ;
-(void)_initializeMPNowPlayingInfoManager:(id)arg1 ;
-(void)updateMetaData:(id)arg1 ;
-(void)setJsonDataFromURL:(NSDictionary *)arg1 ;
-(NSDictionary *)jsonDataFromURL;
-(id)_getPagingURL:(unsigned long long)arg1 ;
-(id)updatePagingUrlTemplate:(id)arg1 transition:(unsigned long long)arg2 playerContext:(id)arg3 ;
-(void)updateQueueSegment:(id)arg1 forUserActivityDictionary:(id)arg2 withInitialNetworkActivity:(id)arg3 andParentNetworkActivity:(id)arg4 playerPointer:(id)arg5 ;
-(void)_handleReportResponseForSession:(id)arg1 userActivityDictionary:(id)arg2 queueSegment:(id)arg3 queueController:(id)arg4 ;
-(id)initWithSession:(id)arg1 initialQueueSegment:(id)arg2 forUserActivityDictionary:(id)arg3 withInitialNetworkActivity:(id)arg4 andParentNetworkActivity:(id)arg5 playerPointer:(id)arg6 ;
-(void)queueController:(id)arg1 reportContentFailure:(id)arg2 whilePlaying:(id)arg3 nowPlaying:(id)arg4 timestamp:(id)arg5 ;
-(void)setMPInfoManager:(CMSMPNowPlayingInfoManager *)arg1 ;
-(CMSNetworkActivity *)queueSegmentNetworkActivity;
-(void)setQueueSegmentNetworkActivity:(CMSNetworkActivity *)arg1 ;
@end

