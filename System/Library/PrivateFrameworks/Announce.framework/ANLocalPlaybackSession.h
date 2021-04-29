/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ANLocalPlaybackSessionServiceInterfaceDelegate.h>

@protocol ANLocalPlaybackSessionDelegate;
@class NSUUID, NSXPCConnection, NSDictionary, NSString;

@interface ANLocalPlaybackSession : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate> {

	NSUUID* _endpointIdentifier;
	id<ANLocalPlaybackSessionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSUUID * endpointIdentifier;                                   //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * lastPlayedAnnouncementInfo; 
@property (nonatomic,readonly) unsigned long long playbackState; 
@property (assign,nonatomic,__weak) id<ANLocalPlaybackSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<ANLocalPlaybackSessionDelegate>)delegate;
-(void)setDelegate:(id<ANLocalPlaybackSessionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)_start;
-(NSUUID *)endpointIdentifier;
-(unsigned long long)playbackState;
-(void)lastPlayedAnnouncementInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)announcementsWillStartPlaying:(unsigned long long)arg1 ;
-(void)announcementsStateUpdate:(unsigned long long)arg1 ;
-(id)initWithEndpointIdentifier:(id)arg1 ;
-(void)didReceiveAnnouncement:(id)arg1 forGroupID:(id)arg2 ;
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendPlaybackCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopPlayingAnnouncementsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)playAnnouncements;
-(void)playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 startingAt:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopPlayingAnnouncements;
-(void)nextAnnouncementWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)previousAnnouncementWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)lastPlayedAnnouncementInfo;
@end

