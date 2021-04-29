/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, ICPAPlayActivityEnqueuerProperties, ICPAPlayModeDictionary, ICPAAudioQualityDictionary, NSData;

@interface ICPAPlayActivityEvent : PBCodable <NSCopying> {

	long long _characterDisplayedCount;
	unsigned long long _cloudPlaylistID;
	long long _containerAdamID;
	long long _equivalencySourceAdamID;
	double _eventDateTimestamp;
	double _eventSecondsFromGMT;
	unsigned long long _itemCloudID;
	double _itemDuration;
	double _itemEndTime;
	double _itemStartTime;
	long long _persistentID;
	long long _purchasedAdamID;
	long long _radioAdamID;
	long long _stationID;
	unsigned long long _storeAccountID;
	long long _subscriptionAdamID;
	long long _tvShowPurchasedAdamID;
	long long _tvShowSubscriptionAdamID;
	int _audioQualityPreference;
	NSMutableArray* _buildFeatures;
	NSString* _buildVersion;
	NSString* _cloudAlbumID;
	NSString* _containerID;
	int _containerType;
	NSString* _deviceName;
	int _displayType;
	int _endReasonType;
	ICPAPlayActivityEnqueuerProperties* _enqueuerProperties;
	NSString* _eventTimeZoneName;
	int _eventType;
	NSString* _externalID;
	NSString* _featureName;
	NSString* _globalPlaylistID;
	NSString* _householdID;
	int _itemType;
	NSString* _lyricLanguage;
	NSString* _lyricsID;
	int _mediaType;
	NSString* _personalizedContainerID;
	ICPAPlayModeDictionary* _playMode;
	int _playbackFormatPreference;
	NSString* _playlistVersionHash;
	ICPAAudioQualityDictionary* _providedAudioQuality;
	int _reasonHintType;
	NSData* _recommendationData;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	int _sourceType;
	NSString* _stationHash;
	NSString* _stationStringID;
	NSString* _storeFrontID;
	NSString* _storeID;
	int _systemReleaseType;
	ICPAAudioQualityDictionary* _targetedAudioQuality;
	NSData* _timedMetadata;
	NSData* _trackInfo;
	BOOL _internalBuild;
	BOOL _offline;
	BOOL _privateListeningEnabled;
	BOOL _sBEnabled;
	BOOL _siriInitiated;
	SCD_Struct_IC21 _has;

}

@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                                        //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasReasonHintType; 
@property (assign,nonatomic) int reasonHintType;                                                   //@synthesize reasonHintType=_reasonHintType - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionAdamID; 
@property (assign,nonatomic) long long subscriptionAdamID;                                         //@synthesize subscriptionAdamID=_subscriptionAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasPurchasedAdamID; 
@property (assign,nonatomic) long long purchasedAdamID;                                            //@synthesize purchasedAdamID=_purchasedAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasRadioAdamID; 
@property (assign,nonatomic) long long radioAdamID;                                                //@synthesize radioAdamID=_radioAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasItemCloudID; 
@property (assign,nonatomic) unsigned long long itemCloudID;                                       //@synthesize itemCloudID=_itemCloudID - In the implementation block
@property (nonatomic,readonly) BOOL hasLyricsID; 
@property (nonatomic,retain) NSString * lyricsID;                                                  //@synthesize lyricsID=_lyricsID - In the implementation block
@property (assign,nonatomic) BOOL hasEquivalencySourceAdamID; 
@property (assign,nonatomic) long long equivalencySourceAdamID;                                    //@synthesize equivalencySourceAdamID=_equivalencySourceAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasContainerAdamID; 
@property (assign,nonatomic) long long containerAdamID;                                            //@synthesize containerAdamID=_containerAdamID - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalPlaylistID; 
@property (nonatomic,retain) NSString * globalPlaylistID;                                          //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (nonatomic,readonly) BOOL hasStationHash; 
@property (nonatomic,retain) NSString * stationHash;                                               //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) BOOL hasStationStringID; 
@property (nonatomic,retain) NSString * stationStringID;                                           //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,nonatomic) BOOL hasStationID; 
@property (assign,nonatomic) long long stationID;                                                  //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudAlbumID; 
@property (nonatomic,retain) NSString * cloudAlbumID;                                              //@synthesize cloudAlbumID=_cloudAlbumID - In the implementation block
@property (assign,nonatomic) BOOL hasCloudPlaylistID; 
@property (assign,nonatomic) unsigned long long cloudPlaylistID;                                   //@synthesize cloudPlaylistID=_cloudPlaylistID - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaylistVersionHash; 
@property (nonatomic,retain) NSString * playlistVersionHash;                                       //@synthesize playlistVersionHash=_playlistVersionHash - In the implementation block
@property (assign,nonatomic) BOOL hasContainerType; 
@property (assign,nonatomic) int containerType;                                                    //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                                                //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL hasEndReasonType; 
@property (assign,nonatomic) int endReasonType;                                                    //@synthesize endReasonType=_endReasonType - In the implementation block
@property (assign,nonatomic) BOOL hasEventDateTimestamp; 
@property (assign,nonatomic) double eventDateTimestamp;                                            //@synthesize eventDateTimestamp=_eventDateTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatureName; 
@property (nonatomic,retain) NSString * featureName;                                               //@synthesize featureName=_featureName - In the implementation block
@property (assign,nonatomic) BOOL hasItemDuration; 
@property (assign,nonatomic) double itemDuration;                                                  //@synthesize itemDuration=_itemDuration - In the implementation block
@property (assign,nonatomic) BOOL hasItemEndTime; 
@property (assign,nonatomic) double itemEndTime;                                                   //@synthesize itemEndTime=_itemEndTime - In the implementation block
@property (assign,nonatomic) BOOL hasItemStartTime; 
@property (assign,nonatomic) double itemStartTime;                                                 //@synthesize itemStartTime=_itemStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasItemType; 
@property (assign,nonatomic) int itemType;                                                         //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                                        //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) BOOL hasOffline; 
@property (assign,nonatomic) BOOL offline;                                                         //@synthesize offline=_offline - In the implementation block
@property (assign,nonatomic) BOOL hasPersistentID; 
@property (assign,nonatomic) long long persistentID;                                               //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) BOOL hasSBEnabled; 
@property (assign,nonatomic) BOOL sBEnabled;                                                       //@synthesize sBEnabled=_sBEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSourceType; 
@property (assign,nonatomic) int sourceType;                                                       //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAccountID; 
@property (assign,nonatomic) unsigned long long storeAccountID;                                    //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,readonly) BOOL hasTimedMetadata; 
@property (nonatomic,retain) NSData * timedMetadata;                                               //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasTrackInfo; 
@property (nonatomic,retain) NSData * trackInfo;                                                   //@synthesize trackInfo=_trackInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasRecommendationData; 
@property (nonatomic,retain) NSData * recommendationData;                                          //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreFrontID; 
@property (nonatomic,retain) NSString * storeFrontID;                                              //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildVersion; 
@property (nonatomic,retain) NSString * buildVersion;                                              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestingBundleIdentifier; 
@property (nonatomic,retain) NSString * requestingBundleIdentifier;                                //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestingBundleVersion; 
@property (nonatomic,retain) NSString * requestingBundleVersion;                                   //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasEnqueuerProperties; 
@property (nonatomic,retain) ICPAPlayActivityEnqueuerProperties * enqueuerProperties;              //@synthesize enqueuerProperties=_enqueuerProperties - In the implementation block
@property (nonatomic,readonly) BOOL hasHouseholdID; 
@property (nonatomic,retain) NSString * householdID;                                               //@synthesize householdID=_householdID - In the implementation block
@property (assign,nonatomic) BOOL hasPrivateListeningEnabled; 
@property (assign,nonatomic) BOOL privateListeningEnabled;                                         //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSiriInitiated; 
@property (assign,nonatomic) BOOL siriInitiated;                                                   //@synthesize siriInitiated=_siriInitiated - In the implementation block
@property (assign,nonatomic) BOOL hasSystemReleaseType; 
@property (assign,nonatomic) int systemReleaseType;                                                //@synthesize systemReleaseType=_systemReleaseType - In the implementation block
@property (nonatomic,readonly) BOOL hasEventTimeZoneName; 
@property (nonatomic,retain) NSString * eventTimeZoneName;                                         //@synthesize eventTimeZoneName=_eventTimeZoneName - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayType; 
@property (assign,nonatomic) int displayType;                                                      //@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic) BOOL hasCharacterDisplayedCount; 
@property (assign,nonatomic) long long characterDisplayedCount;                                    //@synthesize characterDisplayedCount=_characterDisplayedCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLyricLanguage; 
@property (nonatomic,retain) NSString * lyricLanguage;                                             //@synthesize lyricLanguage=_lyricLanguage - In the implementation block
@property (nonatomic,retain) NSMutableArray * buildFeatures;                                       //@synthesize buildFeatures=_buildFeatures - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayMode; 
@property (nonatomic,retain) ICPAPlayModeDictionary * playMode;                                    //@synthesize playMode=_playMode - In the implementation block
@property (assign,nonatomic) BOOL hasAudioQualityPreference; 
@property (assign,nonatomic) int audioQualityPreference;                                           //@synthesize audioQualityPreference=_audioQualityPreference - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackFormatPreference; 
@property (assign,nonatomic) int playbackFormatPreference;                                         //@synthesize playbackFormatPreference=_playbackFormatPreference - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetedAudioQuality; 
@property (nonatomic,retain) ICPAAudioQualityDictionary * targetedAudioQuality;                    //@synthesize targetedAudioQuality=_targetedAudioQuality - In the implementation block
@property (nonatomic,readonly) BOOL hasProvidedAudioQuality; 
@property (nonatomic,retain) ICPAAudioQualityDictionary * providedAudioQuality;                    //@synthesize providedAudioQuality=_providedAudioQuality - In the implementation block
@property (nonatomic,readonly) BOOL hasContainerID; 
@property (nonatomic,retain) NSString * containerID;                                               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizedContainerID; 
@property (nonatomic,retain) NSString * personalizedContainerID;                                   //@synthesize personalizedContainerID=_personalizedContainerID - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreID; 
@property (nonatomic,retain) NSString * storeID;                                                   //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalID; 
@property (nonatomic,retain) NSString * externalID;                                                //@synthesize externalID=_externalID - In the implementation block
@property (assign,nonatomic) BOOL hasTvShowPurchasedAdamID; 
@property (assign,nonatomic) long long tvShowPurchasedAdamID;                                      //@synthesize tvShowPurchasedAdamID=_tvShowPurchasedAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasTvShowSubscriptionAdamID; 
@property (assign,nonatomic) long long tvShowSubscriptionAdamID;                                   //@synthesize tvShowSubscriptionAdamID=_tvShowSubscriptionAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasInternalBuild; 
@property (assign,nonatomic) BOOL internalBuild;                                                   //@synthesize internalBuild=_internalBuild - In the implementation block
@property (assign,nonatomic) BOOL hasEventSecondsFromGMT; 
@property (assign,nonatomic) double eventSecondsFromGMT;                                           //@synthesize eventSecondsFromGMT=_eventSecondsFromGMT - In the implementation block
+(Class)buildFeaturesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)eventType;
-(void)setEventType:(int)arg1 ;
-(NSString *)deviceName;
-(int)displayType;
-(BOOL)internalBuild;
-(NSString *)storeID;
-(NSString *)containerID;
-(int)sourceType;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)buildVersion;
-(long long)persistentID;
-(void)setPersistentID:(long long)arg1 ;
-(void)setItemType:(int)arg1 ;
-(void)setHasItemType:(BOOL)arg1 ;
-(BOOL)hasItemType;
-(int)itemType;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setOffline:(BOOL)arg1 ;
-(void)setHasOffline:(BOOL)arg1 ;
-(BOOL)hasOffline;
-(BOOL)offline;
-(long long)stationID;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(BOOL)hasMediaType;
-(void)setDisplayType:(int)arg1 ;
-(void)setHasDisplayType:(BOOL)arg1 ;
-(BOOL)hasDisplayType;
-(void)setContainerID:(NSString *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setSourceType:(int)arg1 ;
-(BOOL)hasSourceType;
-(void)setHasSourceType:(BOOL)arg1 ;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasDeviceName;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(BOOL)hasBuildVersion;
-(int)systemReleaseType;
-(void)setSystemReleaseType:(int)arg1 ;
-(void)setHasSystemReleaseType:(BOOL)arg1 ;
-(BOOL)hasSystemReleaseType;
-(void)setSBEnabled:(BOOL)arg1 ;
-(void)setHasSBEnabled:(BOOL)arg1 ;
-(BOOL)hasSBEnabled;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(void)setHasStoreAccountID:(BOOL)arg1 ;
-(BOOL)hasStoreAccountID;
-(BOOL)hasStoreFrontID;
-(void)setPrivateListeningEnabled:(BOOL)arg1 ;
-(void)setHasPrivateListeningEnabled:(BOOL)arg1 ;
-(BOOL)hasPrivateListeningEnabled;
-(BOOL)sBEnabled;
-(unsigned long long)storeAccountID;
-(NSString *)storeFrontID;
-(BOOL)privateListeningEnabled;
-(ICPAPlayActivityEnqueuerProperties *)enqueuerProperties;
-(int)containerType;
-(double)itemEndTime;
-(int)endReasonType;
-(NSString *)featureName;
-(double)itemDuration;
-(NSData *)recommendationData;
-(double)itemStartTime;
-(NSData *)timedMetadata;
-(NSData *)trackInfo;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(NSString *)householdID;
-(NSString *)personalizedContainerID;
-(int)reasonHintType;
-(long long)radioAdamID;
-(long long)subscriptionAdamID;
-(long long)equivalencySourceAdamID;
-(long long)purchasedAdamID;
-(NSString *)lyricsID;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(NSString *)cloudAlbumID;
-(NSString *)globalPlaylistID;
-(NSString *)playlistVersionHash;
-(unsigned long long)cloudPlaylistID;
-(BOOL)hasContainerType;
-(BOOL)hasEndReasonType;
-(BOOL)hasEventDateTimestamp;
-(double)eventDateTimestamp;
-(BOOL)hasEventTimeZoneName;
-(NSString *)eventTimeZoneName;
-(BOOL)hasEventSecondsFromGMT;
-(double)eventSecondsFromGMT;
-(BOOL)hasFeatureName;
-(BOOL)hasItemDuration;
-(BOOL)hasItemEndTime;
-(BOOL)hasItemStartTime;
-(BOOL)hasCharacterDisplayedCount;
-(long long)characterDisplayedCount;
-(BOOL)hasLyricLanguage;
-(NSString *)lyricLanguage;
-(BOOL)hasPersistentID;
-(BOOL)hasRecommendationData;
-(BOOL)hasTimedMetadata;
-(BOOL)hasTrackInfo;
-(BOOL)hasReasonHintType;
-(BOOL)hasRequestingBundleVersion;
-(BOOL)hasRequestingBundleIdentifier;
-(BOOL)hasInternalBuild;
-(BOOL)hasEnqueuerProperties;
-(BOOL)hasHouseholdID;
-(BOOL)hasSiriInitiated;
-(BOOL)siriInitiated;
-(BOOL)hasContainerID;
-(BOOL)hasExternalID;
-(BOOL)hasPersonalizedContainerID;
-(BOOL)hasStoreID;
-(BOOL)hasContainerAdamID;
-(long long)containerAdamID;
-(BOOL)hasGlobalPlaylistID;
-(void)setGlobalPlaylistID:(NSString *)arg1 ;
-(BOOL)hasPlaylistVersionHash;
-(void)setPlaylistVersionHash:(NSString *)arg1 ;
-(BOOL)hasStationHash;
-(void)setStationHash:(NSString *)arg1 ;
-(BOOL)hasStationStringID;
-(void)setStationStringID:(NSString *)arg1 ;
-(BOOL)hasStationID;
-(void)setStationID:(long long)arg1 ;
-(BOOL)hasCloudAlbumID;
-(void)setCloudAlbumID:(NSString *)arg1 ;
-(BOOL)hasCloudPlaylistID;
-(void)setCloudPlaylistID:(unsigned long long)arg1 ;
-(BOOL)hasSubscriptionAdamID;
-(void)setSubscriptionAdamID:(long long)arg1 ;
-(BOOL)hasPurchasedAdamID;
-(void)setPurchasedAdamID:(long long)arg1 ;
-(BOOL)hasRadioAdamID;
-(void)setRadioAdamID:(long long)arg1 ;
-(BOOL)hasItemCloudID;
-(unsigned long long)itemCloudID;
-(BOOL)hasLyricsID;
-(void)setLyricsID:(NSString *)arg1 ;
-(BOOL)hasEquivalencySourceAdamID;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
-(void)setContainerType:(int)arg1 ;
-(void)setEndReasonType:(int)arg1 ;
-(void)setEventDateTimestamp:(double)arg1 ;
-(void)setEventTimeZoneName:(NSString *)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setItemDuration:(double)arg1 ;
-(void)setItemEndTime:(double)arg1 ;
-(void)setItemStartTime:(double)arg1 ;
-(void)setCharacterDisplayedCount:(long long)arg1 ;
-(void)setLyricLanguage:(NSString *)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSData *)arg1 ;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(void)setEnqueuerProperties:(ICPAPlayActivityEnqueuerProperties *)arg1 ;
-(void)setHouseholdID:(NSString *)arg1 ;
-(void)setSiriInitiated:(BOOL)arg1 ;
-(void)setPersonalizedContainerID:(NSString *)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setReasonHintType:(int)arg1 ;
-(void)setContainerAdamID:(long long)arg1 ;
-(void)setItemCloudID:(unsigned long long)arg1 ;
-(void)setInternalBuild:(BOOL)arg1 ;
-(void)setHasReasonHintType:(BOOL)arg1 ;
-(void)setHasSubscriptionAdamID:(BOOL)arg1 ;
-(void)setHasPurchasedAdamID:(BOOL)arg1 ;
-(void)setHasRadioAdamID:(BOOL)arg1 ;
-(void)setHasItemCloudID:(BOOL)arg1 ;
-(void)setHasEquivalencySourceAdamID:(BOOL)arg1 ;
-(void)setHasContainerAdamID:(BOOL)arg1 ;
-(void)setHasStationID:(BOOL)arg1 ;
-(void)setHasCloudPlaylistID:(BOOL)arg1 ;
-(void)setHasContainerType:(BOOL)arg1 ;
-(void)setHasEndReasonType:(BOOL)arg1 ;
-(void)setHasEventDateTimestamp:(BOOL)arg1 ;
-(void)setHasItemDuration:(BOOL)arg1 ;
-(void)setHasItemEndTime:(BOOL)arg1 ;
-(void)setHasItemStartTime:(BOOL)arg1 ;
-(void)setHasPersistentID:(BOOL)arg1 ;
-(void)setHasSiriInitiated:(BOOL)arg1 ;
-(void)setHasCharacterDisplayedCount:(BOOL)arg1 ;
-(void)setTvShowPurchasedAdamID:(long long)arg1 ;
-(void)setHasTvShowPurchasedAdamID:(BOOL)arg1 ;
-(BOOL)hasTvShowPurchasedAdamID;
-(void)setTvShowSubscriptionAdamID:(long long)arg1 ;
-(void)setHasTvShowSubscriptionAdamID:(BOOL)arg1 ;
-(BOOL)hasTvShowSubscriptionAdamID;
-(void)setHasInternalBuild:(BOOL)arg1 ;
-(void)setEventSecondsFromGMT:(double)arg1 ;
-(void)setHasEventSecondsFromGMT:(BOOL)arg1 ;
-(long long)tvShowPurchasedAdamID;
-(long long)tvShowSubscriptionAdamID;
-(NSMutableArray *)buildFeatures;
-(int)audioQualityPreference;
-(int)playbackFormatPreference;
-(ICPAAudioQualityDictionary *)targetedAudioQuality;
-(ICPAAudioQualityDictionary *)providedAudioQuality;
-(void)setBuildFeatures:(NSMutableArray *)arg1 ;
-(void)setAudioQualityPreference:(int)arg1 ;
-(void)setPlaybackFormatPreference:(int)arg1 ;
-(void)setTargetedAudioQuality:(ICPAAudioQualityDictionary *)arg1 ;
-(void)setProvidedAudioQuality:(ICPAAudioQualityDictionary *)arg1 ;
-(void)clearBuildFeatures;
-(void)addBuildFeatures:(id)arg1 ;
-(unsigned long long)buildFeaturesCount;
-(id)buildFeaturesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPlayMode;
-(void)setHasAudioQualityPreference:(BOOL)arg1 ;
-(BOOL)hasAudioQualityPreference;
-(void)setHasPlaybackFormatPreference:(BOOL)arg1 ;
-(BOOL)hasPlaybackFormatPreference;
-(BOOL)hasTargetedAudioQuality;
-(BOOL)hasProvidedAudioQuality;
-(ICPAPlayModeDictionary *)playMode;
-(void)setPlayMode:(ICPAPlayModeDictionary *)arg1 ;
@end

