/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesQueueController.framework/CloudMediaServicesQueueController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMSCloudExtensionSession, NSString, NSDictionary, CMSPlayerPointer, CMSNetworkActivity, CMSDuetManager, MSPublicDBInfo;

@interface CMSMPNowPlayingInfoManager : NSObject {

	unsigned long long _retryCount;
	CMSCloudExtensionSession* _session;
	NSString* _serviceID;
	NSString* _bundleID;
	NSDictionary* _intentData;
	CMSPlayerPointer* _playerPointer;
	CMSNetworkActivity* _networkActivity;
	CMSDuetManager* _duetManager;
	MSPublicDBInfo* _publicInfo;

}

@property (nonatomic,retain) MSPublicDBInfo * publicInfo;                       //@synthesize publicInfo=_publicInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceID;                                //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSDictionary * intentData;                       //@synthesize intentData=_intentData - In the implementation block
@property (nonatomic,readonly) CMSPlayerPointer * playerPointer;                //@synthesize playerPointer=_playerPointer - In the implementation block
@property (nonatomic,retain) CMSNetworkActivity * networkActivity;              //@synthesize networkActivity=_networkActivity - In the implementation block
@property (nonatomic,retain) CMSDuetManager * duetManager;                      //@synthesize duetManager=_duetManager - In the implementation block
+(void)invalidateNowPlayingInfo;
-(id)description;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSDictionary *)intentData;
-(NSString *)serviceID;
-(void)setServiceID:(NSString *)arg1 ;
-(CMSNetworkActivity *)networkActivity;
-(void)setNetworkActivity:(CMSNetworkActivity *)arg1 ;
-(void)donateNowplayingInfo:(id)arg1 withPlaybackStatus:(id)arg2 ;
-(void)updateNowPlayingInfo:(id)arg1 ;
-(CMSPlayerPointer *)playerPointer;
-(void)_savePublicInfoForService;
-(void)setPublicInfo:(MSPublicDBInfo *)arg1 ;
-(void)_retryFetchPublicInfo;
-(id)initWithPlayerPointer:(id)arg1 session:(id)arg2 networkActivity:(id)arg3 duetManager:(id)arg4 ;
-(CMSDuetManager *)duetManager;
-(void)setDuetManager:(CMSDuetManager *)arg1 ;
-(MSPublicDBInfo *)publicInfo;
@end

