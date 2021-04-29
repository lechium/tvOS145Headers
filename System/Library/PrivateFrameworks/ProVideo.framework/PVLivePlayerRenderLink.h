/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@class PVLivePlayer;

@interface PVLivePlayerRenderLink : NSObject {

	SCD_Struct_PV21 _lastTime;
	unsigned _throttledFPS;
	HGSynchronizable* _lock;
	PVLivePlayer* _player;

}
-(id)init;
-(void)dealloc;
-(void)teardown;
-(void)rebuild;
-(unsigned)_throttledRenderLinkFPS_NoLock;
-(unsigned)throttledFPS;
-(BOOL)skipThrottledRenderLinkTime:(SCD_Struct_PV21)arg1 ;
-(void)registerWithPlayer:(id)arg1 ;
-(BOOL)setThrottledFPS:(unsigned)arg1 ;
-(unsigned)thermalPolicyThrottledFPS;
-(void)signalPlayer:(SCD_Struct_PV21)arg1 ;
-(void)signalDroppedRenderLink;
@end

