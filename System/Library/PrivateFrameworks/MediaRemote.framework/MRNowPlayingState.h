/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, MRPlaybackQueue, NSString, MRPlayerPath, MRPlaybackQueueRequest, _MRSetStateMessageProtobuf, NSDictionary, NSData;

@interface MRNowPlayingState : NSObject <NSCopying> {

	BOOL _hasPlaybackState;
	BOOL _hasPlaybackStateTimestamp;
	unsigned _playbackState;
	NSArray* _supportedCommands;
	MRPlaybackQueue* _playbackQueue;
	NSString* _displayID;
	NSString* _displayName;
	MRPlayerPath* _playerPath;
	MRPlaybackQueueRequest* _request;
	double _playbackStateTimestamp;
	unsigned long long _playbackQueueCapabilities;

}

@property (nonatomic,readonly) _MRSetStateMessageProtobuf * protobuf; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,copy) NSArray * supportedCommands;                                 //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,copy) MRPlaybackQueue * playbackQueue;                             //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,copy) NSString * displayID;                                        //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) MRPlayerPath * playerPath;                                   //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) MRPlaybackQueueRequest * request;                            //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackState;                                     //@synthesize hasPlaybackState=_hasPlaybackState - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                                    //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackStateTimestamp;                            //@synthesize hasPlaybackStateTimestamp=_hasPlaybackStateTimestamp - In the implementation block
@property (assign,nonatomic) double playbackStateTimestamp;                             //@synthesize playbackStateTimestamp=_playbackStateTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL containsArtwork; 
@property (assign,nonatomic) unsigned long long playbackQueueCapabilities;              //@synthesize playbackQueueCapabilities=_playbackQueueCapabilities - In the implementation block
@property (nonatomic,readonly) NSData * data; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(MRPlaybackQueueRequest *)request;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)displayID;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setRequest:(MRPlaybackQueueRequest *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(_MRSetStateMessageProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(MRPlayerPath *)playerPath;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(void)setDisplayID:(NSString *)arg1 ;
-(NSArray *)supportedCommands;
-(unsigned)playbackState;
-(void)setPlaybackQueue:(MRPlaybackQueue *)arg1 ;
-(void)setPlaybackState:(unsigned)arg1 ;
-(MRPlaybackQueue *)playbackQueue;
-(unsigned long long)playbackQueueCapabilities;
-(BOOL)hasPlaybackState;
-(double)playbackStateTimestamp;
-(BOOL)hasPlaybackStateTimestamp;
-(void)setPlaybackQueueCapabilities:(unsigned long long)arg1 ;
-(void)setHasPlaybackState:(BOOL)arg1 ;
-(void)setPlaybackStateTimestamp:(double)arg1 ;
-(void)setHasPlaybackStateTimestamp:(BOOL)arg1 ;
-(BOOL)containsArtwork;
-(id)copyWithoutArtwork;
@end

