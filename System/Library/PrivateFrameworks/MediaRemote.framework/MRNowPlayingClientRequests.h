/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@class NSMutableArray, MRClient, NSArray;

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {

	NSMutableArray* _playerClients;
	MRClient* _client;
	NSArray* _nowPlayingClients;

}

@property (nonatomic,readonly) MRClient * client;                        //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSArray * nowPlayingClients;              //@synthesize nowPlayingClients=_nowPlayingClients - In the implementation block
-(id)debugDescription;
-(MRClient *)client;
-(id)initWithClient:(id)arg1 ;
-(NSArray *)nowPlayingClients;
-(void)restoreNowPlayingClientState;
-(id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(void)removePlayer:(id)arg1 ;
@end

