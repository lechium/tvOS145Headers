/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPNetworkObserver : NSObject {

	int _musicCellularNetworkingAllowedNotifyToken;
	int _videosPreferencesChangedToken;
	long long _networkUsageCount;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _videosAllowsCellularStreaming;

}

@property (nonatomic,readonly) BOOL isUsingNetwork; 
@property (assign,getter=isMusicCellularStreamingAllowed,nonatomic) BOOL musicCellularStreamingAllowed; 
@property (assign,getter=isVideoCellularStreamingAllowed,nonatomic) BOOL videoCellularStreamingAllowed; 
@property (assign,getter=isMusicCellularDownloadingAllowed,nonatomic) BOOL musicCellularDownloadingAllowed; 
@property (getter=isStoreCellularNetworkingAllowed,nonatomic,readonly) BOOL storeCellularNetworkingAllowed; 
+(id)sharedNetworkObserver;
-(id)init;
-(void)dealloc;
-(id)_init;
-(BOOL)isUsingNetwork;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(BOOL)isMusicCellularStreamingAllowed;
-(void)setMusicCellularStreamingAllowed:(BOOL)arg1 ;
-(BOOL)isVideoCellularStreamingAllowed;
-(void)setVideoCellularStreamingAllowed:(BOOL)arg1 ;
-(BOOL)isMusicCellularDownloadingAllowed;
-(void)setMusicCellularDownloadingAllowed:(BOOL)arg1 ;
-(BOOL)isStoreCellularNetworkingAllowed;
@end
