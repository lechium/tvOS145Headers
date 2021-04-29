/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesQueueController.framework/CloudMediaServicesQueueController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudMediaServicesQueueController/CloudMediaServicesQueueController-Structs.h>
#import <libobjc.A.dylib/CMSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface CMSNowPlayingInfo : NSObject <CMSCoding, NSCopying> {

	NSString* _albumName;
	NSString* _title;
	NSString* _artistName;
	NSString* _genre;
	NSString* _composerName;
	NSString* _mediaType;
	NSString* _externalContentIdentifier;
	NSString* _collectionIdentifier;
	NSString* _externalUserProfileIdentifier;
	NSString* _artworkURLString;
	NSNumber* _trackNumber;
	NSNumber* _discNumber;
	NSNumber* _duration;
	NSNumber* _elapsedTime;
	NSNumber* _playbackRate;
	NSNumber* _defaultPlaybackRate;
	NSNumber* _totalQueueCount;
	NSNumber* _queueIndex;
	NSNumber* _isAdvertisement;
	NSNumber* _isLive;
	NSString* _requesterSharedUserID;
	NSString* _userAccountHomeUserID;
	NSString* _endpointID;

}

@property (nonatomic,copy) NSString * albumName;                                  //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                 //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * genre;                                      //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * composerName;                               //@synthesize composerName=_composerName - In the implementation block
@property (nonatomic,copy) NSString * mediaType;                                  //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSString * externalContentIdentifier;                  //@synthesize externalContentIdentifier=_externalContentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * collectionIdentifier;                       //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * externalUserProfileIdentifier;              //@synthesize externalUserProfileIdentifier=_externalUserProfileIdentifier - In the implementation block
@property (nonatomic,copy) NSString * artworkURLString;                           //@synthesize artworkURLString=_artworkURLString - In the implementation block
@property (nonatomic,copy) NSNumber * trackNumber;                                //@synthesize trackNumber=_trackNumber - In the implementation block
@property (nonatomic,copy) NSNumber * discNumber;                                 //@synthesize discNumber=_discNumber - In the implementation block
@property (nonatomic,copy) NSNumber * duration;                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSNumber * elapsedTime;                                //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,copy) NSNumber * playbackRate;                               //@synthesize playbackRate=_playbackRate - In the implementation block
@property (nonatomic,copy) NSNumber * defaultPlaybackRate;                        //@synthesize defaultPlaybackRate=_defaultPlaybackRate - In the implementation block
@property (nonatomic,copy) NSNumber * totalQueueCount;                            //@synthesize totalQueueCount=_totalQueueCount - In the implementation block
@property (nonatomic,copy) NSNumber * queueIndex;                                 //@synthesize queueIndex=_queueIndex - In the implementation block
@property (nonatomic,copy) NSNumber * isAdvertisement;                            //@synthesize isAdvertisement=_isAdvertisement - In the implementation block
@property (nonatomic,copy) NSNumber * isLive;                                     //@synthesize isLive=_isLive - In the implementation block
@property (nonatomic,copy) NSString * requesterSharedUserID;                      //@synthesize requesterSharedUserID=_requesterSharedUserID - In the implementation block
@property (nonatomic,copy) NSString * userAccountHomeUserID;                      //@synthesize userAccountHomeUserID=_userAccountHomeUserID - In the implementation block
@property (nonatomic,copy) NSString * endpointID;                                 //@synthesize endpointID=_endpointID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceFromCMSCoded:(id)arg1 ;
+(id)nowPlayingInfoFromDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)duration;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSNumber *)playbackRate;
-(void)setPlaybackRate:(NSNumber *)arg1 ;
-(void)setElapsedTime:(NSNumber *)arg1 ;
-(NSNumber *)elapsedTime;
-(NSString *)collectionIdentifier;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)genre;
-(NSNumber *)defaultPlaybackRate;
-(void)setDefaultPlaybackRate:(NSNumber *)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(NSString *)composerName;
-(void)setComposerName:(NSString *)arg1 ;
-(void)setIsAdvertisement:(NSNumber *)arg1 ;
-(NSNumber *)isAdvertisement;
-(NSNumber *)discNumber;
-(NSNumber *)trackNumber;
-(void)setDiscNumber:(NSNumber *)arg1 ;
-(void)setTrackNumber:(NSNumber *)arg1 ;
-(NSString *)externalContentIdentifier;
-(NSNumber *)isLive;
-(void)setExternalContentIdentifier:(NSString *)arg1 ;
-(NSString *)artworkURLString;
-(void)setIsLive:(NSNumber *)arg1 ;
-(NSString *)endpointID;
-(void)setEndpointID:(NSString *)arg1 ;
-(id)cmsCoded;
-(void)setExternalUserProfileIdentifier:(NSString *)arg1 ;
-(void)setTotalQueueCount:(NSNumber *)arg1 ;
-(void)setQueueIndex:(NSNumber *)arg1 ;
-(void)setArtworkURLString:(NSString *)arg1 ;
-(NSString *)externalUserProfileIdentifier;
-(NSNumber *)totalQueueCount;
-(NSNumber *)queueIndex;
-(NSString *)requesterSharedUserID;
-(void)setRequesterSharedUserID:(NSString *)arg1 ;
-(NSString *)userAccountHomeUserID;
-(void)setUserAccountHomeUserID:(NSString *)arg1 ;
@end

