/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MIPAudiobook, NSData, NSMutableArray, MIPMovie, MIPPodcast, MIPSong, MIPTVShow;

@interface MIPMediaItem : PBCodable <NSCopying> {

	long long _accountId;
	long long _bookmarkTimeMilliseconds;
	long long _creationDateTime;
	long long _drmKey1IdCode;
	long long _drmKey2IdCode;
	long long _drmPlatformIdCode;
	long long _duration;
	long long _familyAccountId;
	long long _fileSize;
	long long _lastPlayedDateTime;
	long long _lastSkippedDateTime;
	long long _likedStateChangeDate;
	long long _modificationDateTime;
	long long _purchaseDateTime;
	long long _purchaseHistoryId;
	long long _releaseDateTime;
	long long _sagaId;
	long long _storeId;
	long long _storePlaylistId;
	long long _storefrontId;
	long long _subscriptionStoreItemId;
	NSString* _artworkId;
	MIPAudiobook* _audiobook;
	NSString* _chapterMetadataUrl;
	int _cloudMatchedStatus;
	int _cloudPlaybackEndpointType;
	int _cloudStatus;
	NSString* _cloudUniversalLibraryId;
	NSString* _comment;
	int _contentRating;
	int _contentRatingLevel;
	NSString* _copyright;
	int _drmVersionsCode;
	NSString* _extrasUrl;
	int _fileKind;
	NSData* _flattenedChapterData;
	NSString* _grouping;
	NSMutableArray* _libraryIdentifiers;
	int _likedState;
	NSString* _longDescription;
	int _mediaType;
	MIPMovie* _movie;
	int _playCount;
	int _playCountDelta;
	int _playbackEndpointType;
	MIPPodcast* _podcast;
	NSString* _purchaseHistoryRedownloadParams;
	int _purchaseHistoryToken;
	NSString* _sagaRedownloadParams;
	NSString* _secondaryArtworkId;
	int _secondaryArtworkSourceType;
	NSString* _shortDescription;
	int _skipCount;
	int _skipCountDelta;
	MIPSong* _song;
	NSString* _sortTitle;
	NSString* _storeAssetFlavor;
	int _storeProtectionType;
	NSString* _storeXID;
	NSString* _title;
	MIPTVShow* _tvShow;
	int _year;
	BOOL _cloudAssetAvailable;
	BOOL _explicitContent;
	BOOL _hasChapterData;
	BOOL _hasLocalAsset;
	BOOL _hidden;
	BOOL _inUsersCloudLibrary;
	BOOL _isInUsersLibrary;
	BOOL _isPreorder;
	BOOL _likedStateChanged;
	BOOL _needsReporting;
	BOOL _rememberBookmark;
	BOOL _userDisabled;
	SCD_Struct_MI53 _has;

}

@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                           //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSortTitle; 
@property (nonatomic,retain) NSString * sortTitle;                                    //@synthesize sortTitle=_sortTitle - In the implementation block
@property (assign,nonatomic) BOOL hasReleaseDateTime; 
@property (assign,nonatomic) long long releaseDateTime;                               //@synthesize releaseDateTime=_releaseDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDateTime; 
@property (assign,nonatomic) long long creationDateTime;                              //@synthesize creationDateTime=_creationDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDateTime; 
@property (assign,nonatomic) long long modificationDateTime;                          //@synthesize modificationDateTime=_modificationDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasFileSize; 
@property (assign,nonatomic) long long fileSize;                                      //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) long long duration;                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasContentRating; 
@property (assign,nonatomic) int contentRating;                                       //@synthesize contentRating=_contentRating - In the implementation block
@property (assign,nonatomic) BOOL hasExplicitContent; 
@property (assign,nonatomic) BOOL explicitContent;                                    //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,readonly) BOOL hasShortDescription; 
@property (nonatomic,retain) NSString * shortDescription;                             //@synthesize shortDescription=_shortDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasLongDescription; 
@property (nonatomic,retain) NSString * longDescription;                              //@synthesize longDescription=_longDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasCopyright; 
@property (nonatomic,retain) NSString * copyright;                                    //@synthesize copyright=_copyright - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkId; 
@property (nonatomic,retain) NSString * artworkId;                                    //@synthesize artworkId=_artworkId - In the implementation block
@property (assign,nonatomic) BOOL hasYear; 
@property (assign,nonatomic) int year;                                                //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) BOOL hasContentRatingLevel; 
@property (assign,nonatomic) int contentRatingLevel;                                  //@synthesize contentRatingLevel=_contentRatingLevel - In the implementation block
@property (nonatomic,readonly) BOOL hasComment; 
@property (nonatomic,retain) NSString * comment;                                      //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) BOOL hasFileKind; 
@property (assign,nonatomic) int fileKind;                                            //@synthesize fileKind=_fileKind - In the implementation block
@property (assign,nonatomic) BOOL hasFamilyAccountId; 
@property (assign,nonatomic) long long familyAccountId;                               //@synthesize familyAccountId=_familyAccountId - In the implementation block
@property (assign,nonatomic) BOOL hasDrmVersionsCode; 
@property (assign,nonatomic) int drmVersionsCode;                                     //@synthesize drmVersionsCode=_drmVersionsCode - In the implementation block
@property (assign,nonatomic) BOOL hasDrmPlatformIdCode; 
@property (assign,nonatomic) long long drmPlatformIdCode;                             //@synthesize drmPlatformIdCode=_drmPlatformIdCode - In the implementation block
@property (assign,nonatomic) BOOL hasDrmKey1IdCode; 
@property (assign,nonatomic) long long drmKey1IdCode;                                 //@synthesize drmKey1IdCode=_drmKey1IdCode - In the implementation block
@property (assign,nonatomic) BOOL hasDrmKey2IdCode; 
@property (assign,nonatomic) long long drmKey2IdCode;                                 //@synthesize drmKey2IdCode=_drmKey2IdCode - In the implementation block
@property (nonatomic,readonly) BOOL hasChapterMetadataUrl; 
@property (nonatomic,retain) NSString * chapterMetadataUrl;                           //@synthesize chapterMetadataUrl=_chapterMetadataUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreAssetFlavor; 
@property (nonatomic,retain) NSString * storeAssetFlavor;                             //@synthesize storeAssetFlavor=_storeAssetFlavor - In the implementation block
@property (nonatomic,readonly) BOOL hasExtrasUrl; 
@property (nonatomic,retain) NSString * extrasUrl;                                    //@synthesize extrasUrl=_extrasUrl - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseDateTime; 
@property (assign,nonatomic) long long purchaseDateTime;                              //@synthesize purchaseDateTime=_purchaseDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasCloudStatus; 
@property (assign,nonatomic) int cloudStatus;                                         //@synthesize cloudStatus=_cloudStatus - In the implementation block
@property (assign,nonatomic) BOOL hasPlayCount; 
@property (assign,nonatomic) int playCount;                                           //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) BOOL hasPlayCountDelta; 
@property (assign,nonatomic) int playCountDelta;                                      //@synthesize playCountDelta=_playCountDelta - In the implementation block
@property (assign,nonatomic) BOOL hasLastPlayedDateTime; 
@property (assign,nonatomic) long long lastPlayedDateTime;                            //@synthesize lastPlayedDateTime=_lastPlayedDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasSkipCount; 
@property (assign,nonatomic) int skipCount;                                           //@synthesize skipCount=_skipCount - In the implementation block
@property (assign,nonatomic) BOOL hasSkipCountDelta; 
@property (assign,nonatomic) int skipCountDelta;                                      //@synthesize skipCountDelta=_skipCountDelta - In the implementation block
@property (assign,nonatomic) BOOL hasLastSkippedDateTime; 
@property (assign,nonatomic) long long lastSkippedDateTime;                           //@synthesize lastSkippedDateTime=_lastSkippedDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasRememberBookmark; 
@property (assign,nonatomic) BOOL rememberBookmark;                                   //@synthesize rememberBookmark=_rememberBookmark - In the implementation block
@property (assign,nonatomic) BOOL hasBookmarkTimeMilliseconds; 
@property (assign,nonatomic) long long bookmarkTimeMilliseconds;                      //@synthesize bookmarkTimeMilliseconds=_bookmarkTimeMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden;                                             //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL hasStorePlaylistId; 
@property (assign,nonatomic) long long storePlaylistId;                               //@synthesize storePlaylistId=_storePlaylistId - In the implementation block
@property (assign,nonatomic) BOOL hasHasLocalAsset; 
@property (assign,nonatomic) BOOL hasLocalAsset;                                      //@synthesize hasLocalAsset=_hasLocalAsset - In the implementation block
@property (nonatomic,readonly) BOOL hasGrouping; 
@property (nonatomic,retain) NSString * grouping;                                     //@synthesize grouping=_grouping - In the implementation block
@property (assign,nonatomic) BOOL hasLikedState; 
@property (assign,nonatomic) int likedState;                                          //@synthesize likedState=_likedState - In the implementation block
@property (assign,nonatomic) BOOL hasNeedsReporting; 
@property (assign,nonatomic) BOOL needsReporting;                                     //@synthesize needsReporting=_needsReporting - In the implementation block
@property (assign,nonatomic) BOOL hasLikedStateChanged; 
@property (assign,nonatomic) BOOL likedStateChanged;                                  //@synthesize likedStateChanged=_likedStateChanged - In the implementation block
@property (assign,nonatomic) BOOL hasIsInUsersLibrary; 
@property (assign,nonatomic) BOOL isInUsersLibrary;                                   //@synthesize isInUsersLibrary=_isInUsersLibrary - In the implementation block
@property (assign,nonatomic) BOOL hasCloudAssetAvailable; 
@property (assign,nonatomic) BOOL cloudAssetAvailable;                                //@synthesize cloudAssetAvailable=_cloudAssetAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasStoreProtectionType; 
@property (assign,nonatomic) int storeProtectionType;                                 //@synthesize storeProtectionType=_storeProtectionType - In the implementation block
@property (assign,nonatomic) BOOL hasUserDisabled; 
@property (assign,nonatomic) BOOL userDisabled;                                       //@synthesize userDisabled=_userDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasCloudPlaybackEndpointType; 
@property (assign,nonatomic) int cloudPlaybackEndpointType;                           //@synthesize cloudPlaybackEndpointType=_cloudPlaybackEndpointType - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackEndpointType; 
@property (assign,nonatomic) int playbackEndpointType;                                //@synthesize playbackEndpointType=_playbackEndpointType - In the implementation block
@property (assign,nonatomic) BOOL hasCloudMatchedStatus; 
@property (assign,nonatomic) int cloudMatchedStatus;                                  //@synthesize cloudMatchedStatus=_cloudMatchedStatus - In the implementation block
@property (assign,nonatomic) BOOL hasInUsersCloudLibrary; 
@property (assign,nonatomic) BOOL inUsersCloudLibrary;                                //@synthesize inUsersCloudLibrary=_inUsersCloudLibrary - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryArtworkSourceType; 
@property (assign,nonatomic) int secondaryArtworkSourceType;                          //@synthesize secondaryArtworkSourceType=_secondaryArtworkSourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasSecondaryArtworkId; 
@property (nonatomic,retain) NSString * secondaryArtworkId;                           //@synthesize secondaryArtworkId=_secondaryArtworkId - In the implementation block
@property (assign,nonatomic) BOOL hasHasChapterData; 
@property (assign,nonatomic) BOOL hasChapterData;                                     //@synthesize hasChapterData=_hasChapterData - In the implementation block
@property (nonatomic,readonly) BOOL hasFlattenedChapterData; 
@property (nonatomic,retain) NSData * flattenedChapterData;                           //@synthesize flattenedChapterData=_flattenedChapterData - In the implementation block
@property (assign,nonatomic) BOOL hasIsPreorder; 
@property (assign,nonatomic) BOOL isPreorder;                                         //@synthesize isPreorder=_isPreorder - In the implementation block
@property (assign,nonatomic) BOOL hasLikedStateChangeDate; 
@property (assign,nonatomic) long long likedStateChangeDate;                          //@synthesize likedStateChangeDate=_likedStateChangeDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * libraryIdentifiers;                     //@synthesize libraryIdentifiers=_libraryIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                                       //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) BOOL hasStorefrontId; 
@property (assign,nonatomic) long long storefrontId;                                  //@synthesize storefrontId=_storefrontId - In the implementation block
@property (assign,nonatomic) BOOL hasAccountId; 
@property (assign,nonatomic) long long accountId;                                     //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseHistoryId; 
@property (assign,nonatomic) long long purchaseHistoryId;                             //@synthesize purchaseHistoryId=_purchaseHistoryId - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseHistoryToken; 
@property (assign,nonatomic) int purchaseHistoryToken;                                //@synthesize purchaseHistoryToken=_purchaseHistoryToken - In the implementation block
@property (nonatomic,readonly) BOOL hasPurchaseHistoryRedownloadParams; 
@property (nonatomic,retain) NSString * purchaseHistoryRedownloadParams;              //@synthesize purchaseHistoryRedownloadParams=_purchaseHistoryRedownloadParams - In the implementation block
@property (assign,nonatomic) BOOL hasSagaId; 
@property (assign,nonatomic) long long sagaId;                                        //@synthesize sagaId=_sagaId - In the implementation block
@property (nonatomic,readonly) BOOL hasSagaRedownloadParams; 
@property (nonatomic,retain) NSString * sagaRedownloadParams;                         //@synthesize sagaRedownloadParams=_sagaRedownloadParams - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreXID; 
@property (nonatomic,retain) NSString * storeXID;                                     //@synthesize storeXID=_storeXID - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionStoreItemId; 
@property (assign,nonatomic) long long subscriptionStoreItemId;                       //@synthesize subscriptionStoreItemId=_subscriptionStoreItemId - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudUniversalLibraryId; 
@property (nonatomic,retain) NSString * cloudUniversalLibraryId;                      //@synthesize cloudUniversalLibraryId=_cloudUniversalLibraryId - In the implementation block
@property (nonatomic,readonly) BOOL hasSong; 
@property (nonatomic,retain) MIPSong * song;                                          //@synthesize song=_song - In the implementation block
@property (nonatomic,readonly) BOOL hasMovie; 
@property (nonatomic,retain) MIPMovie * movie;                                        //@synthesize movie=_movie - In the implementation block
@property (nonatomic,readonly) BOOL hasTvShow; 
@property (nonatomic,retain) MIPTVShow * tvShow;                                      //@synthesize tvShow=_tvShow - In the implementation block
@property (nonatomic,readonly) BOOL hasPodcast; 
@property (nonatomic,retain) MIPPodcast * podcast;                                    //@synthesize podcast=_podcast - In the implementation block
@property (nonatomic,readonly) BOOL hasAudiobook; 
@property (nonatomic,retain) MIPAudiobook * audiobook;                                //@synthesize audiobook=_audiobook - In the implementation block
+(Class)libraryIdentifiersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setYear:(int)arg1 ;
-(int)year;
-(long long)fileSize;
-(NSString *)comment;
-(id)dictionaryRepresentation;
-(long long)duration;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDuration:(long long)arg1 ;
-(NSString *)shortDescription;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(BOOL)hidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setHasHidden:(BOOL)arg1 ;
-(BOOL)hasHidden;
-(BOOL)hasTitle;
-(void)setComment:(NSString *)arg1 ;
-(BOOL)hasComment;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(BOOL)hasMediaType;
-(void)setCopyright:(NSString *)arg1 ;
-(NSString *)copyright;
-(void)setFileSize:(long long)arg1 ;
-(void)setPlayCount:(int)arg1 ;
-(int)playCount;
-(void)setContentRating:(int)arg1 ;
-(int)contentRating;
-(NSString *)grouping;
-(void)setGrouping:(NSString *)arg1 ;
-(BOOL)hasYear;
-(void)setHasYear:(BOOL)arg1 ;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasContentRating;
-(void)setHasContentRating:(BOOL)arg1 ;
-(BOOL)isPreorder;
-(NSString *)longDescription;
-(void)setLongDescription:(NSString *)arg1 ;
-(void)setShortDescription:(NSString *)arg1 ;
-(void)setExplicitContent:(BOOL)arg1 ;
-(void)setSortTitle:(NSString *)arg1 ;
-(NSString *)sortTitle;
-(BOOL)explicitContent;
-(BOOL)hasPlayCount;
-(void)setHasPlayCount:(BOOL)arg1 ;
-(long long)storeId;
-(void)setStoreId:(long long)arg1 ;
-(MIPPodcast *)podcast;
-(MIPSong *)song;
-(MIPMovie *)movie;
-(MIPTVShow *)tvShow;
-(void)setMovie:(MIPMovie *)arg1 ;
-(MIPAudiobook *)audiobook;
-(NSMutableArray *)libraryIdentifiers;
-(BOOL)isInUsersLibrary;
-(long long)creationDateTime;
-(long long)modificationDateTime;
-(int)contentRatingLevel;
-(BOOL)userDisabled;
-(int)fileKind;
-(int)playCountDelta;
-(long long)lastPlayedDateTime;
-(long long)lastSkippedDateTime;
-(int)skipCount;
-(int)skipCountDelta;
-(BOOL)rememberBookmark;
-(long long)bookmarkTimeMilliseconds;
-(int)likedState;
-(BOOL)likedStateChanged;
-(long long)likedStateChangeDate;
-(long long)storePlaylistId;
-(long long)storefrontId;
-(long long)purchaseHistoryId;
-(int)purchaseHistoryToken;
-(long long)sagaId;
-(int)cloudStatus;
-(int)drmVersionsCode;
-(BOOL)hasAccountId;
-(long long)accountId;
-(long long)familyAccountId;
-(int)storeProtectionType;
-(long long)drmPlatformIdCode;
-(long long)drmKey1IdCode;
-(long long)drmKey2IdCode;
-(BOOL)hasPurchaseDateTime;
-(long long)releaseDateTime;
-(int)cloudMatchedStatus;
-(BOOL)needsReporting;
-(long long)subscriptionStoreItemId;
-(int)playbackEndpointType;
-(BOOL)hasCloudAssetAvailable;
-(BOOL)cloudAssetAvailable;
-(BOOL)inUsersCloudLibrary;
-(int)cloudPlaybackEndpointType;
-(BOOL)hasChapterData;
-(int)secondaryArtworkSourceType;
-(NSData *)flattenedChapterData;
-(BOOL)hasIsInUsersLibrary;
-(BOOL)hasCreationDateTime;
-(BOOL)hasSortTitle;
-(BOOL)hasFileSize;
-(BOOL)hasModificationDateTime;
-(BOOL)hasContentRatingLevel;
-(BOOL)hasUserDisabled;
-(BOOL)hasGrouping;
-(BOOL)hasShortDescription;
-(BOOL)hasLongDescription;
-(BOOL)hasCopyright;
-(BOOL)hasFileKind;
-(BOOL)hasIsPreorder;
-(BOOL)hasPlayCountDelta;
-(BOOL)hasLastPlayedDateTime;
-(BOOL)hasLastSkippedDateTime;
-(BOOL)hasSkipCount;
-(BOOL)hasSkipCountDelta;
-(BOOL)hasRememberBookmark;
-(BOOL)hasBookmarkTimeMilliseconds;
-(BOOL)hasLikedState;
-(BOOL)hasLikedStateChanged;
-(BOOL)hasLikedStateChangeDate;
-(BOOL)hasStoreId;
-(BOOL)hasStorePlaylistId;
-(BOOL)hasStorefrontId;
-(BOOL)hasPurchaseHistoryId;
-(BOOL)hasPurchaseHistoryToken;
-(BOOL)hasPurchaseHistoryRedownloadParams;
-(BOOL)hasSagaId;
-(BOOL)hasSagaRedownloadParams;
-(BOOL)hasCloudStatus;
-(BOOL)hasDrmVersionsCode;
-(BOOL)hasFamilyAccountId;
-(BOOL)hasStoreProtectionType;
-(BOOL)hasDrmPlatformIdCode;
-(BOOL)hasDrmKey1IdCode;
-(BOOL)hasDrmKey2IdCode;
-(BOOL)hasReleaseDateTime;
-(NSString *)chapterMetadataUrl;
-(BOOL)hasStoreXID;
-(BOOL)hasStoreAssetFlavor;
-(BOOL)hasCloudMatchedStatus;
-(BOOL)hasExtrasUrl;
-(BOOL)hasHasLocalAsset;
-(BOOL)hasSubscriptionStoreItemId;
-(BOOL)hasNeedsReporting;
-(BOOL)hasPlaybackEndpointType;
-(BOOL)hasInUsersCloudLibrary;
-(BOOL)hasCloudPlaybackEndpointType;
-(BOOL)hasCloudUniversalLibraryId;
-(BOOL)hasHasChapterData;
-(BOOL)hasFlattenedChapterData;
-(BOOL)hasArtworkId;
-(BOOL)hasSecondaryArtworkId;
-(BOOL)hasSecondaryArtworkSourceType;
-(NSString *)purchaseHistoryRedownloadParams;
-(NSString *)sagaRedownloadParams;
-(NSString *)storeXID;
-(NSString *)storeAssetFlavor;
-(NSString *)extrasUrl;
-(NSString *)cloudUniversalLibraryId;
-(NSString *)artworkId;
-(NSString *)secondaryArtworkId;
-(BOOL)hasLocalAsset;
-(void)setHasStoreId:(BOOL)arg1 ;
-(void)setArtworkId:(NSString *)arg1 ;
-(void)setCloudUniversalLibraryId:(NSString *)arg1 ;
-(void)setSecondaryArtworkId:(NSString *)arg1 ;
-(void)setCreationDateTime:(long long)arg1 ;
-(void)setHasCreationDateTime:(BOOL)arg1 ;
-(void)setModificationDateTime:(long long)arg1 ;
-(void)setHasModificationDateTime:(BOOL)arg1 ;
-(void)setLastPlayedDateTime:(long long)arg1 ;
-(void)setHasLastPlayedDateTime:(BOOL)arg1 ;
-(void)setLikedState:(int)arg1 ;
-(void)setHasLikedState:(BOOL)arg1 ;
-(void)setSecondaryArtworkSourceType:(int)arg1 ;
-(void)setHasSecondaryArtworkSourceType:(BOOL)arg1 ;
-(void)setFlattenedChapterData:(NSData *)arg1 ;
-(void)setHasChapterData:(BOOL)arg1 ;
-(void)setHasHasChapterData:(BOOL)arg1 ;
-(void)addLibraryIdentifiers:(id)arg1 ;
-(unsigned long long)libraryIdentifiersCount;
-(void)clearLibraryIdentifiers;
-(id)libraryIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setAccountId:(long long)arg1 ;
-(void)setHasAccountId:(BOOL)arg1 ;
-(void)setSagaId:(long long)arg1 ;
-(void)setHasSagaId:(BOOL)arg1 ;
-(void)setPurchaseHistoryId:(long long)arg1 ;
-(void)setHasPurchaseHistoryId:(BOOL)arg1 ;
-(void)setLibraryIdentifiers:(NSMutableArray *)arg1 ;
-(void)setReleaseDateTime:(long long)arg1 ;
-(void)setStorefrontId:(long long)arg1 ;
-(void)setPurchaseHistoryToken:(int)arg1 ;
-(void)setPurchaseHistoryRedownloadParams:(NSString *)arg1 ;
-(void)setContentRatingLevel:(int)arg1 ;
-(void)setSagaRedownloadParams:(NSString *)arg1 ;
-(void)setFileKind:(int)arg1 ;
-(void)setDrmVersionsCode:(int)arg1 ;
-(void)setDrmPlatformIdCode:(long long)arg1 ;
-(void)setDrmKey1IdCode:(long long)arg1 ;
-(void)setDrmKey2IdCode:(long long)arg1 ;
-(void)setChapterMetadataUrl:(NSString *)arg1 ;
-(void)setStoreXID:(NSString *)arg1 ;
-(void)setExtrasUrl:(NSString *)arg1 ;
-(void)setCloudStatus:(int)arg1 ;
-(void)setPlayCountDelta:(int)arg1 ;
-(void)setSkipCount:(int)arg1 ;
-(void)setSkipCountDelta:(int)arg1 ;
-(void)setLastSkippedDateTime:(long long)arg1 ;
-(void)setRememberBookmark:(BOOL)arg1 ;
-(void)setBookmarkTimeMilliseconds:(long long)arg1 ;
-(void)setHasLocalAsset:(BOOL)arg1 ;
-(void)setStorePlaylistId:(long long)arg1 ;
-(void)setLikedStateChanged:(BOOL)arg1 ;
-(void)setNeedsReporting:(BOOL)arg1 ;
-(void)setSubscriptionStoreItemId:(long long)arg1 ;
-(void)setIsInUsersLibrary:(BOOL)arg1 ;
-(void)setCloudAssetAvailable:(BOOL)arg1 ;
-(void)setStoreProtectionType:(int)arg1 ;
-(void)setUserDisabled:(BOOL)arg1 ;
-(void)setCloudPlaybackEndpointType:(int)arg1 ;
-(void)setPlaybackEndpointType:(int)arg1 ;
-(void)setCloudMatchedStatus:(int)arg1 ;
-(void)setInUsersCloudLibrary:(BOOL)arg1 ;
-(void)setIsPreorder:(BOOL)arg1 ;
-(void)setLikedStateChangeDate:(long long)arg1 ;
-(void)setSong:(MIPSong *)arg1 ;
-(void)setTvShow:(MIPTVShow *)arg1 ;
-(void)setPodcast:(MIPPodcast *)arg1 ;
-(void)setAudiobook:(MIPAudiobook *)arg1 ;
-(void)setStoreAssetFlavor:(NSString *)arg1 ;
-(void)setHasReleaseDateTime:(BOOL)arg1 ;
-(void)setHasFileSize:(BOOL)arg1 ;
-(void)setHasExplicitContent:(BOOL)arg1 ;
-(BOOL)hasExplicitContent;
-(void)setHasContentRatingLevel:(BOOL)arg1 ;
-(void)setHasFileKind:(BOOL)arg1 ;
-(void)setFamilyAccountId:(long long)arg1 ;
-(void)setHasFamilyAccountId:(BOOL)arg1 ;
-(void)setHasDrmVersionsCode:(BOOL)arg1 ;
-(void)setHasDrmPlatformIdCode:(BOOL)arg1 ;
-(void)setHasDrmKey1IdCode:(BOOL)arg1 ;
-(void)setHasDrmKey2IdCode:(BOOL)arg1 ;
-(BOOL)hasChapterMetadataUrl;
-(void)setPurchaseDateTime:(long long)arg1 ;
-(void)setHasPurchaseDateTime:(BOOL)arg1 ;
-(void)setHasCloudStatus:(BOOL)arg1 ;
-(void)setHasPlayCountDelta:(BOOL)arg1 ;
-(void)setHasSkipCount:(BOOL)arg1 ;
-(void)setHasSkipCountDelta:(BOOL)arg1 ;
-(void)setHasLastSkippedDateTime:(BOOL)arg1 ;
-(void)setHasRememberBookmark:(BOOL)arg1 ;
-(void)setHasBookmarkTimeMilliseconds:(BOOL)arg1 ;
-(void)setHasStorePlaylistId:(BOOL)arg1 ;
-(void)setHasHasLocalAsset:(BOOL)arg1 ;
-(void)setHasNeedsReporting:(BOOL)arg1 ;
-(void)setHasLikedStateChanged:(BOOL)arg1 ;
-(void)setHasIsInUsersLibrary:(BOOL)arg1 ;
-(void)setHasCloudAssetAvailable:(BOOL)arg1 ;
-(void)setHasStoreProtectionType:(BOOL)arg1 ;
-(void)setHasUserDisabled:(BOOL)arg1 ;
-(void)setHasCloudPlaybackEndpointType:(BOOL)arg1 ;
-(void)setHasPlaybackEndpointType:(BOOL)arg1 ;
-(void)setHasCloudMatchedStatus:(BOOL)arg1 ;
-(void)setHasInUsersCloudLibrary:(BOOL)arg1 ;
-(void)setHasIsPreorder:(BOOL)arg1 ;
-(void)setHasLikedStateChangeDate:(BOOL)arg1 ;
-(void)setHasStorefrontId:(BOOL)arg1 ;
-(void)setHasPurchaseHistoryToken:(BOOL)arg1 ;
-(void)setHasSubscriptionStoreItemId:(BOOL)arg1 ;
-(BOOL)hasSong;
-(BOOL)hasMovie;
-(BOOL)hasTvShow;
-(BOOL)hasPodcast;
-(BOOL)hasAudiobook;
-(long long)purchaseDateTime;
@end

