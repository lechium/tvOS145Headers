/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource {

	void* _discoveryController;
	NSMutableArray* _discoveredTelevisions;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(void)dealloc;
-(void)setDiscoveryMode:(long long)arg1 ;
-(BOOL)devicePresenceDetected;
-(id)_discoveredTelevisions;
-(id)getRoutesForCategory:(id)arg1 ;
-(void)getPickedRouteHasVolumeControlWithCompletion:(/*^block*/id)arg1 ;
-(void)_onQueue_controllerDidDiscoverTelevision:(void*)arg1 ;
-(void)_onQueue_controllerDidRemoveTelevision:(void*)arg1 ;
@end

