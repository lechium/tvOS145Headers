/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _MRCommandOptionsProtobuf : PBCodable <NSCopying> {

	double _playbackPosition;
	long long _radioStationID;
	unsigned long long _trackID;
	NSString* _commandID;
	NSString* _contentItemID;
	NSString* _contextID;
	NSString* _destinationAppDisplayID;
	NSString* _homeKitUserIdentifier;
	NSString* _insertAfterContentItemID;
	NSString* _insertBeforeContentItemID;
	NSData* _languageOption;
	NSString* _mediaType;
	NSString* _nowPlayingContentItemID;
	NSData* _playbackQueueContext;
	int _playbackQueueDestinationOffset;
	int _playbackQueueInsertionPosition;
	int _playbackQueueOffset;
	float _playbackRate;
	NSData* _playbackSession;
	NSString* _playbackSessionFilePath;
	NSString* _playbackSessionIdentifier;
	NSData* _playbackSessionMetadata;
	int _playbackSessionPriority;
	NSString* _playbackSessionRevision;
	NSString* _playbackSessionType;
	int _queueEndAction;
	NSString* _radioStationHash;
	float _rating;
	NSString* _remoteControlInterface;
	int _repeatMode;
	int _replaceIntent;
	int _sendOptions;
	NSString* _senderID;
	int _shuffleMode;
	float _skipInterval;
	NSString* _sourceID;
	NSString* _stationURL;
	NSData* _systemAppPlaybackQueueData;
	NSData* _userIdentityData;
	BOOL _beginSeek;
	BOOL _endSeek;
	BOOL _externalPlayerCommand;
	BOOL _negative;
	BOOL _preservesQueueEndAction;
	BOOL _preservesRepeatMode;
	BOOL _preservesShuffleMode;
	BOOL _requestDefermentToPlaybackQueuePosition;
	BOOL _shouldBeginRadioPlayback;
	BOOL _shouldOverrideManuallyCuratedQueue;
	BOOL _trueCompletion;
	BOOL _verifySupportedCommands;
	SCD_Struct_MR23 _has;

}

@property (nonatomic,readonly) BOOL hasSourceID; 
@property (nonatomic,retain) NSString * sourceID;                                          //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaType; 
@property (nonatomic,retain) NSString * mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) BOOL hasExternalPlayerCommand; 
@property (assign,nonatomic) BOOL externalPlayerCommand;                                   //@synthesize externalPlayerCommand=_externalPlayerCommand - In the implementation block
@property (assign,nonatomic) BOOL hasSkipInterval; 
@property (assign,nonatomic) float skipInterval;                                           //@synthesize skipInterval=_skipInterval - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackRate; 
@property (assign,nonatomic) float playbackRate;                                           //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) BOOL hasRating; 
@property (assign,nonatomic) float rating;                                                 //@synthesize rating=_rating - In the implementation block
@property (assign,nonatomic) BOOL hasNegative; 
@property (assign,nonatomic) BOOL negative;                                                //@synthesize negative=_negative - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackPosition; 
@property (assign,nonatomic) double playbackPosition;                                      //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                               //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                              //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,readonly) BOOL hasContextID; 
@property (nonatomic,retain) NSString * contextID;                                         //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) BOOL hasTrackID; 
@property (assign,nonatomic) unsigned long long trackID;                                   //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationID; 
@property (assign,nonatomic) long long radioStationID;                                     //@synthesize radioStationID=_radioStationID - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationHash; 
@property (nonatomic,retain) NSString * radioStationHash;                                  //@synthesize radioStationHash=_radioStationHash - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemAppPlaybackQueueData; 
@property (nonatomic,retain) NSData * systemAppPlaybackQueueData;                          //@synthesize systemAppPlaybackQueueData=_systemAppPlaybackQueueData - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationAppDisplayID; 
@property (nonatomic,retain) NSString * destinationAppDisplayID;                           //@synthesize destinationAppDisplayID=_destinationAppDisplayID - In the implementation block
@property (assign,nonatomic) BOOL hasSendOptions; 
@property (assign,nonatomic) int sendOptions;                                              //@synthesize sendOptions=_sendOptions - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDefermentToPlaybackQueuePosition; 
@property (assign,nonatomic) BOOL requestDefermentToPlaybackQueuePosition;                 //@synthesize requestDefermentToPlaybackQueuePosition=_requestDefermentToPlaybackQueuePosition - In the implementation block
@property (assign,nonatomic) BOOL hasShouldOverrideManuallyCuratedQueue; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedQueue;                      //@synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue - In the implementation block
@property (nonatomic,readonly) BOOL hasStationURL; 
@property (nonatomic,retain) NSString * stationURL;                                        //@synthesize stationURL=_stationURL - In the implementation block
@property (assign,nonatomic) BOOL hasShouldBeginRadioPlayback; 
@property (assign,nonatomic) BOOL shouldBeginRadioPlayback;                                //@synthesize shouldBeginRadioPlayback=_shouldBeginRadioPlayback - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackQueueInsertionPosition; 
@property (assign,nonatomic) int playbackQueueInsertionPosition;                           //@synthesize playbackQueueInsertionPosition=_playbackQueueInsertionPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasContentItemID; 
@property (nonatomic,retain) NSString * contentItemID;                                     //@synthesize contentItemID=_contentItemID - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackQueueOffset; 
@property (assign,nonatomic) int playbackQueueOffset;                                      //@synthesize playbackQueueOffset=_playbackQueueOffset - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackQueueDestinationOffset; 
@property (assign,nonatomic) int playbackQueueDestinationOffset;                           //@synthesize playbackQueueDestinationOffset=_playbackQueueDestinationOffset - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageOption; 
@property (nonatomic,retain) NSData * languageOption;                                      //@synthesize languageOption=_languageOption - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueueContext; 
@property (nonatomic,retain) NSData * playbackQueueContext;                                //@synthesize playbackQueueContext=_playbackQueueContext - In the implementation block
@property (nonatomic,readonly) BOOL hasInsertAfterContentItemID; 
@property (nonatomic,retain) NSString * insertAfterContentItemID;                          //@synthesize insertAfterContentItemID=_insertAfterContentItemID - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingContentItemID; 
@property (nonatomic,retain) NSString * nowPlayingContentItemID;                           //@synthesize nowPlayingContentItemID=_nowPlayingContentItemID - In the implementation block
@property (assign,nonatomic) BOOL hasReplaceIntent; 
@property (assign,nonatomic) int replaceIntent;                                            //@synthesize replaceIntent=_replaceIntent - In the implementation block
@property (nonatomic,readonly) BOOL hasCommandID; 
@property (nonatomic,retain) NSString * commandID;                                         //@synthesize commandID=_commandID - In the implementation block
@property (nonatomic,readonly) BOOL hasSenderID; 
@property (nonatomic,retain) NSString * senderID;                                          //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteControlInterface; 
@property (nonatomic,retain) NSString * remoteControlInterface;                            //@synthesize remoteControlInterface=_remoteControlInterface - In the implementation block
@property (assign,nonatomic) BOOL hasBeginSeek; 
@property (assign,nonatomic) BOOL beginSeek;                                               //@synthesize beginSeek=_beginSeek - In the implementation block
@property (assign,nonatomic) BOOL hasEndSeek; 
@property (assign,nonatomic) BOOL endSeek;                                                 //@synthesize endSeek=_endSeek - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackSession; 
@property (nonatomic,retain) NSData * playbackSession;                                     //@synthesize playbackSession=_playbackSession - In the implementation block
@property (nonatomic,readonly) BOOL hasUserIdentityData; 
@property (nonatomic,retain) NSData * userIdentityData;                                    //@synthesize userIdentityData=_userIdentityData - In the implementation block
@property (nonatomic,readonly) BOOL hasInsertBeforeContentItemID; 
@property (nonatomic,retain) NSString * insertBeforeContentItemID;                         //@synthesize insertBeforeContentItemID=_insertBeforeContentItemID - In the implementation block
@property (assign,nonatomic) BOOL hasQueueEndAction; 
@property (assign,nonatomic) int queueEndAction;                                           //@synthesize queueEndAction=_queueEndAction - In the implementation block
@property (assign,nonatomic) BOOL hasPreservesRepeatMode; 
@property (assign,nonatomic) BOOL preservesRepeatMode;                                     //@synthesize preservesRepeatMode=_preservesRepeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasPreservesShuffleMode; 
@property (assign,nonatomic) BOOL preservesShuffleMode;                                    //@synthesize preservesShuffleMode=_preservesShuffleMode - In the implementation block
@property (assign,nonatomic) BOOL hasPreservesQueueEndAction; 
@property (assign,nonatomic) BOOL preservesQueueEndAction;                                 //@synthesize preservesQueueEndAction=_preservesQueueEndAction - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeKitUserIdentifier; 
@property (nonatomic,retain) NSString * homeKitUserIdentifier;                             //@synthesize homeKitUserIdentifier=_homeKitUserIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVerifySupportedCommands; 
@property (assign,nonatomic) BOOL verifySupportedCommands;                                 //@synthesize verifySupportedCommands=_verifySupportedCommands - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackSessionIdentifier; 
@property (nonatomic,retain) NSString * playbackSessionIdentifier;                         //@synthesize playbackSessionIdentifier=_playbackSessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackSessionPriority; 
@property (assign,nonatomic) int playbackSessionPriority;                                  //@synthesize playbackSessionPriority=_playbackSessionPriority - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackSessionFilePath; 
@property (nonatomic,retain) NSString * playbackSessionFilePath;                           //@synthesize playbackSessionFilePath=_playbackSessionFilePath - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackSessionRevision; 
@property (nonatomic,retain) NSString * playbackSessionRevision;                           //@synthesize playbackSessionRevision=_playbackSessionRevision - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackSessionMetadata; 
@property (nonatomic,retain) NSData * playbackSessionMetadata;                             //@synthesize playbackSessionMetadata=_playbackSessionMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackSessionType; 
@property (nonatomic,retain) NSString * playbackSessionType;                               //@synthesize playbackSessionType=_playbackSessionType - In the implementation block
@property (assign,nonatomic) BOOL hasTrueCompletion; 
@property (assign,nonatomic) BOOL trueCompletion;                                          //@synthesize trueCompletion=_trueCompletion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)contextID;
-(void)setContextID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)senderID;
-(void)setSenderID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(unsigned long long)trackID;
-(void)setTrackID:(unsigned long long)arg1 ;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(BOOL)hasRating;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(BOOL)hasMediaType;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(BOOL)negative;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(void)setHasPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasPlaybackRate;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(void)setHasRepeatMode:(BOOL)arg1 ;
-(BOOL)hasRepeatMode;
-(id)repeatModeAsString:(int)arg1 ;
-(int)StringAsRepeatMode:(id)arg1 ;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(id)shuffleModeAsString:(int)arg1 ;
-(int)StringAsShuffleMode:(id)arg1 ;
-(BOOL)hasRadioStationHash;
-(NSString *)radioStationHash;
-(void)setDestinationAppDisplayID:(NSString *)arg1 ;
-(BOOL)hasDestinationAppDisplayID;
-(NSString *)destinationAppDisplayID;
-(void)setCommandID:(NSString *)arg1 ;
-(BOOL)hasCommandID;
-(NSString *)commandID;
-(NSData *)playbackSession;
-(void)setPlaybackPosition:(double)arg1 ;
-(double)playbackPosition;
-(void)setSystemAppPlaybackQueueData:(NSData *)arg1 ;
-(void)setStationURL:(NSString *)arg1 ;
-(void)setContentItemID:(NSString *)arg1 ;
-(void)setLanguageOption:(NSData *)arg1 ;
-(void)setPlaybackQueueContext:(NSData *)arg1 ;
-(void)setInsertAfterContentItemID:(NSString *)arg1 ;
-(void)setNowPlayingContentItemID:(NSString *)arg1 ;
-(void)setRemoteControlInterface:(NSString *)arg1 ;
-(void)setPlaybackSession:(NSData *)arg1 ;
-(void)setUserIdentityData:(NSData *)arg1 ;
-(void)setInsertBeforeContentItemID:(NSString *)arg1 ;
-(void)setHomeKitUserIdentifier:(NSString *)arg1 ;
-(void)setPlaybackSessionIdentifier:(NSString *)arg1 ;
-(void)setPlaybackSessionFilePath:(NSString *)arg1 ;
-(void)setPlaybackSessionRevision:(NSString *)arg1 ;
-(void)setPlaybackSessionMetadata:(NSData *)arg1 ;
-(void)setPlaybackSessionType:(NSString *)arg1 ;
-(BOOL)hasSourceID;
-(void)setExternalPlayerCommand:(BOOL)arg1 ;
-(void)setHasExternalPlayerCommand:(BOOL)arg1 ;
-(BOOL)hasExternalPlayerCommand;
-(void)setSkipInterval:(float)arg1 ;
-(void)setHasSkipInterval:(BOOL)arg1 ;
-(BOOL)hasSkipInterval;
-(void)setHasRating:(BOOL)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(void)setHasNegative:(BOOL)arg1 ;
-(BOOL)hasNegative;
-(void)setHasPlaybackPosition:(BOOL)arg1 ;
-(BOOL)hasPlaybackPosition;
-(BOOL)hasContextID;
-(void)setHasTrackID:(BOOL)arg1 ;
-(BOOL)hasTrackID;
-(void)setRadioStationID:(long long)arg1 ;
-(void)setHasRadioStationID:(BOOL)arg1 ;
-(BOOL)hasRadioStationID;
-(BOOL)hasSystemAppPlaybackQueueData;
-(int)sendOptions;
-(void)setSendOptions:(int)arg1 ;
-(void)setHasSendOptions:(BOOL)arg1 ;
-(BOOL)hasSendOptions;
-(id)sendOptionsAsString:(int)arg1 ;
-(int)StringAsSendOptions:(id)arg1 ;
-(void)setRequestDefermentToPlaybackQueuePosition:(BOOL)arg1 ;
-(void)setHasRequestDefermentToPlaybackQueuePosition:(BOOL)arg1 ;
-(BOOL)hasRequestDefermentToPlaybackQueuePosition;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(void)setHasShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(BOOL)hasShouldOverrideManuallyCuratedQueue;
-(BOOL)hasStationURL;
-(void)setShouldBeginRadioPlayback:(BOOL)arg1 ;
-(void)setHasShouldBeginRadioPlayback:(BOOL)arg1 ;
-(BOOL)hasShouldBeginRadioPlayback;
-(void)setPlaybackQueueInsertionPosition:(int)arg1 ;
-(void)setHasPlaybackQueueInsertionPosition:(BOOL)arg1 ;
-(BOOL)hasPlaybackQueueInsertionPosition;
-(BOOL)hasContentItemID;
-(void)setPlaybackQueueOffset:(int)arg1 ;
-(void)setHasPlaybackQueueOffset:(BOOL)arg1 ;
-(BOOL)hasPlaybackQueueOffset;
-(void)setPlaybackQueueDestinationOffset:(int)arg1 ;
-(void)setHasPlaybackQueueDestinationOffset:(BOOL)arg1 ;
-(BOOL)hasPlaybackQueueDestinationOffset;
-(BOOL)hasLanguageOption;
-(BOOL)hasPlaybackQueueContext;
-(BOOL)hasInsertAfterContentItemID;
-(BOOL)hasNowPlayingContentItemID;
-(int)replaceIntent;
-(void)setReplaceIntent:(int)arg1 ;
-(void)setHasReplaceIntent:(BOOL)arg1 ;
-(BOOL)hasReplaceIntent;
-(id)replaceIntentAsString:(int)arg1 ;
-(int)StringAsReplaceIntent:(id)arg1 ;
-(BOOL)hasSenderID;
-(BOOL)hasRemoteControlInterface;
-(void)setBeginSeek:(BOOL)arg1 ;
-(void)setHasBeginSeek:(BOOL)arg1 ;
-(BOOL)hasBeginSeek;
-(void)setEndSeek:(BOOL)arg1 ;
-(void)setHasEndSeek:(BOOL)arg1 ;
-(BOOL)hasEndSeek;
-(BOOL)hasPlaybackSession;
-(BOOL)hasUserIdentityData;
-(BOOL)hasInsertBeforeContentItemID;
-(int)queueEndAction;
-(void)setQueueEndAction:(int)arg1 ;
-(void)setHasQueueEndAction:(BOOL)arg1 ;
-(BOOL)hasQueueEndAction;
-(id)queueEndActionAsString:(int)arg1 ;
-(int)StringAsQueueEndAction:(id)arg1 ;
-(void)setPreservesRepeatMode:(BOOL)arg1 ;
-(void)setHasPreservesRepeatMode:(BOOL)arg1 ;
-(BOOL)hasPreservesRepeatMode;
-(void)setPreservesShuffleMode:(BOOL)arg1 ;
-(void)setHasPreservesShuffleMode:(BOOL)arg1 ;
-(BOOL)hasPreservesShuffleMode;
-(void)setPreservesQueueEndAction:(BOOL)arg1 ;
-(void)setHasPreservesQueueEndAction:(BOOL)arg1 ;
-(BOOL)hasPreservesQueueEndAction;
-(BOOL)hasHomeKitUserIdentifier;
-(void)setVerifySupportedCommands:(BOOL)arg1 ;
-(void)setHasVerifySupportedCommands:(BOOL)arg1 ;
-(BOOL)hasVerifySupportedCommands;
-(BOOL)hasPlaybackSessionIdentifier;
-(int)playbackSessionPriority;
-(void)setPlaybackSessionPriority:(int)arg1 ;
-(void)setHasPlaybackSessionPriority:(BOOL)arg1 ;
-(BOOL)hasPlaybackSessionPriority;
-(id)playbackSessionPriorityAsString:(int)arg1 ;
-(int)StringAsPlaybackSessionPriority:(id)arg1 ;
-(BOOL)hasPlaybackSessionFilePath;
-(BOOL)hasPlaybackSessionRevision;
-(BOOL)hasPlaybackSessionMetadata;
-(BOOL)hasPlaybackSessionType;
-(void)setTrueCompletion:(BOOL)arg1 ;
-(void)setHasTrueCompletion:(BOOL)arg1 ;
-(BOOL)hasTrueCompletion;
-(BOOL)externalPlayerCommand;
-(float)skipInterval;
-(long long)radioStationID;
-(NSData *)systemAppPlaybackQueueData;
-(BOOL)requestDefermentToPlaybackQueuePosition;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(NSString *)stationURL;
-(BOOL)shouldBeginRadioPlayback;
-(int)playbackQueueInsertionPosition;
-(NSString *)contentItemID;
-(int)playbackQueueOffset;
-(int)playbackQueueDestinationOffset;
-(NSData *)languageOption;
-(NSData *)playbackQueueContext;
-(NSString *)insertAfterContentItemID;
-(NSString *)nowPlayingContentItemID;
-(NSString *)remoteControlInterface;
-(BOOL)beginSeek;
-(BOOL)endSeek;
-(NSData *)userIdentityData;
-(NSString *)insertBeforeContentItemID;
-(BOOL)preservesRepeatMode;
-(BOOL)preservesShuffleMode;
-(BOOL)preservesQueueEndAction;
-(NSString *)homeKitUserIdentifier;
-(BOOL)verifySupportedCommands;
-(NSString *)playbackSessionIdentifier;
-(NSString *)playbackSessionFilePath;
-(NSString *)playbackSessionRevision;
-(NSData *)playbackSessionMetadata;
-(NSString *)playbackSessionType;
-(BOOL)trueCompletion;
@end

