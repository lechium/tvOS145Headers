/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXInboxModel.h>
#import <libobjc.A.dylib/PXInboxPreviewItem.h>
#import <libobjc.A.dylib/PLAssetContainer.h>

@protocol PLCloudSharedAlbumProtocol;
@class NSDate, NSString, NSArray, NSOrderedSet, PLManagedAsset, PLCloudFeedEntry, PLCloudSharedAlbumInvitationRecord, NSIndexSet, PLPhotoLibrary, NSCountedSet;

@interface PXFeedSectionInfo : NSObject <PXInboxModel, PXInboxPreviewItem, PLAssetContainer> {

	BOOL _loaded;
	BOOL _shouldBeVisibleWhenEmpty;
	NSString* _transientIdentifier;
	PLManagedAsset* _keyAsset;
	PLManagedAsset* _secondaryKeyAsset;
	PLManagedAsset* _tertiaryKeyAsset;
	PLCloudFeedEntry* _cloudFeedEntry;
	long long _sectionType;
	NSDate* _date;
	id<PLCloudSharedAlbumProtocol> _sharedAlbum;
	NSString* _albumTitle;
	PLCloudSharedAlbumInvitationRecord* _invitationRecord;
	long long _numberOfItems;
	NSIndexSet* _excludedAssetIndexes;
	long long _cachedInboxModelType;

}

@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) long long inboxModelType; 
@property (nonatomic,copy,readonly) NSString * inboxModelTitle; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,copy,readonly) NSArray * senderNames; 
@property (nonatomic,readonly) BOOL userIsSender; 
@property (assign,getter=isSeen,nonatomic) BOOL seen; 
@property (nonatomic,readonly) NSArray * leftPreviewItems; 
@property (nonatomic,readonly) NSArray * assetsForOneUp; 
@property (nonatomic,readonly) NSString * ownerFirstName; 
@property (nonatomic,readonly) NSString * ownerLastName; 
@property (nonatomic,readonly) NSString * ownerEmail; 
@property (nonatomic,readonly) NSString * keyCommentGUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDate * date;                                                        //@synthesize date=_date - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                                        //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic) long long cachedInboxModelType;                                     //@synthesize cachedInboxModelType=_cachedInboxModelType - In the implementation block
@property (nonatomic,retain) id<PLCloudSharedAlbumProtocol> sharedAlbum;                         //@synthesize sharedAlbum=_sharedAlbum - In the implementation block
@property (nonatomic,copy) NSString * albumTitle;                                                //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,retain) PLCloudSharedAlbumInvitationRecord * invitationRecord;              //@synthesize invitationRecord=_invitationRecord - In the implementation block
@property (assign,nonatomic) long long numberOfItems;                                            //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) BOOL shouldBeVisibleWhenEmpty;                                      //@synthesize shouldBeVisibleWhenEmpty=_shouldBeVisibleWhenEmpty - In the implementation block
@property (nonatomic,readonly) BOOL isMine; 
@property (nonatomic,readonly) PLCloudFeedEntry * cloudFeedEntry;                                //@synthesize cloudFeedEntry=_cloudFeedEntry - In the implementation block
@property (nonatomic,readonly) long long sectionType;                                            //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,copy) NSIndexSet * excludedAssetIndexes;                                    //@synthesize excludedAssetIndexes=_excludedAssetIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSString * transientIdentifier;                              //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,readonly) NSCountedSet * countsByAssetDisplayType; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset;                                          //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset;                                 //@synthesize secondaryKeyAsset=_secondaryKeyAsset - In the implementation block
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset;                                  //@synthesize tertiaryKeyAsset=_tertiaryKeyAsset - In the implementation block
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
+(id)sectionInfoWithCloudFeedEntry:(id)arg1 ;
+(void)beginCachingSharedAlbumsByGUIDs;
+(void)endCachingSharedAlbumsByGUIDs;
+(id)defaultPreviewImage;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(unsigned long long)approximateCount;
-(NSDate *)date;
-(NSDate *)creationDate;
-(BOOL)isLoaded;
-(NSString *)title;
-(NSString *)uuid;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)localizedTitle;
-(void)reload;
-(long long)numberOfItems;
-(long long)sectionType;
-(unsigned long long)photosCount;
-(NSOrderedSet *)assets;
-(BOOL)userIsSender;
-(PLManagedAsset *)keyAsset;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(unsigned long long)videosCount;
-(unsigned long long)assetsCount;
-(NSString *)ownerFirstName;
-(NSString *)ownerLastName;
-(NSString *)ownerEmail;
-(BOOL)isMine;
-(PLPhotoLibrary *)photoLibrary;
-(void)getPhotoCount:(out unsigned long long*)arg1 videoCount:(out unsigned long long*)arg2 ;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(PLManagedAsset *)tertiaryKeyAsset;
-(BOOL)canShowComments;
-(BOOL)canShowAvalancheStacks;
-(NSArray *)localizedLocationNames;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLCloudFeedEntry *)cloudFeedEntry;
-(NSString *)transientIdentifier;
-(NSString *)albumTitle;
-(void)updateFromCloudFeedEntry;
-(long long)typeForItemAtIndex:(long long)arg1 ;
-(id)assetForItemAtIndex:(long long)arg1 ;
-(BOOL)hasMultipleAssetsForItemAtIndex:(long long)arg1 ;
-(id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2 ;
-(id)commentForItemAtIndex:(long long)arg1 ;
-(id)commentTextForItemAtIndex:(long long)arg1 ;
-(id)likesForItemAtIndex:(long long)arg1 ;
-(void)getCommentCount:(out unsigned long long*)arg1 likeCount:(out unsigned long long*)arg2 ;
-(BOOL)containsAsset:(id)arg1 ;
-(long long)indexOfItemWithAsset:(id)arg1 ;
-(long long)indexOfItemWithComment:(id)arg1 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(id)initWithCloudFeedEntry:(id)arg1 ;
-(BOOL)hasPlayableAssetForItemAtIndex:(long long)arg1 ;
-(id)captionForItemAtIndex:(long long)arg1 ;
-(id)batchIDForItemAtIndex:(long long)arg1 ;
-(long long)indexOfFirstItemFromLastBatch;
-(id)commentsForItemAtIndex:(long long)arg1 ;
-(NSCountedSet *)countsByAssetDisplayType;
-(BOOL)areAllAssetsLiked;
-(long long)inboxModelType;
-(long long)_inboxModelTypeForCloudCommentType;
-(id)sharedAlbumWithGUID:(id)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(id<PLCloudSharedAlbumProtocol>)sharedAlbum;
-(void)setSharedAlbum:(id<PLCloudSharedAlbumProtocol>)arg1 ;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(PLCloudSharedAlbumInvitationRecord *)invitationRecord;
-(void)setInvitationRecord:(PLCloudSharedAlbumInvitationRecord *)arg1 ;
-(BOOL)shouldBeVisibleWhenEmpty;
-(void)setShouldBeVisibleWhenEmpty:(BOOL)arg1 ;
-(NSIndexSet *)excludedAssetIndexes;
-(void)setExcludedAssetIndexes:(NSIndexSet *)arg1 ;
-(long long)cachedInboxModelType;
-(void)setCachedInboxModelType:(long long)arg1 ;
-(void)fetchLeftPreviewItemsWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)assetsForOneUp;
-(NSString *)keyCommentGUID;
-(NSString *)inboxModelTitle;
-(NSArray *)senderNames;
-(BOOL)isSeen;
-(void)setSeen:(BOOL)arg1 ;
-(NSArray *)leftPreviewItems;
-(id)_usersInvolved;
-(id)_usersInvolvedForLike;
-(id)_usersInvolvedForComment;
-(id)_usersInvolvedForPost;
-(id)_usersInvolvedForResponse;
-(id)_usersInvolvedForInvitation;
-(id)_usersInvolvedForCoalescedEntry;
@end

