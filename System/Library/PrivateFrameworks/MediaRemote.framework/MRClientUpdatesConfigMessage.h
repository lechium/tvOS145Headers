/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRClientUpdatesConfigMessage : MRProtocolMessage {

	NSArray* _subscribedPlayerPaths;

}

@property (nonatomic,copy) NSArray * subscribedPlayerPaths;              //@synthesize subscribedPlayerPaths=_subscribedPlayerPaths - In the implementation block
@property (nonatomic,readonly) BOOL nowPlayingUpdates; 
@property (nonatomic,readonly) BOOL artworkUpdates; 
@property (nonatomic,readonly) BOOL volumeUpdates; 
@property (nonatomic,readonly) BOOL keyboardUpdates; 
@property (nonatomic,readonly) BOOL outputDeviceUpdates; 
@property (nonatomic,readonly) BOOL systemEndpointUpdates; 
-(unsigned long long)type;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(id)initWithNowPlayingUpdates:(BOOL)arg1 artworkUpdates:(BOOL)arg2 volumeUpdates:(BOOL)arg3 keyboardUpdates:(BOOL)arg4 outputDeviceUpdates:(BOOL)arg5 systemEndpointUpdates:(BOOL)arg6 subscribedPlayerPaths:(id)arg7 ;
-(BOOL)nowPlayingUpdates;
-(BOOL)artworkUpdates;
-(BOOL)volumeUpdates;
-(BOOL)keyboardUpdates;
-(BOOL)outputDeviceUpdates;
-(BOOL)systemEndpointUpdates;
-(NSArray *)subscribedPlayerPaths;
-(void)setSubscribedPlayerPaths:(NSArray *)arg1 ;
@end

