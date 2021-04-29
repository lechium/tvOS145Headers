/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEODaemon;

@interface GEOServer : NSObject {

	GEODaemon* _daemon;

}

@property (assign,nonatomic,__weak) GEODaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
+(id)identifier;
+(BOOL)shouldStartImmediately;
+(Class)peerClass;
-(id)description;
-(void)setDaemon:(GEODaemon *)arg1 ;
-(GEODaemon *)daemon;
-(void)peerDidConnect:(id)arg1 ;
-(BOOL)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3 ;
-(void)peerDidDisconnect:(id)arg1 ;
@end

