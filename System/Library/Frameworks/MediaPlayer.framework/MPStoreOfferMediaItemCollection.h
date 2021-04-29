/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemCollection.h>

@class MPStoreCompletionOfferResponse, NSArray, MPMediaQuery, MPMediaItemCollection, MPStoreOfferContentRating;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection {

	MPStoreCompletionOfferResponse* _storeOfferResponse;
	NSArray* _unmergedStoreMediaItems;
	MPMediaQuery* _localItemsQuery;
	MPMediaItemCollection* _localCollection;
	BOOL _hasHiddenRestrictedContent;
	long long _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _collectionContentRating;

}

@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * itemsByRemovingStoreOffers; 
@property (nonatomic,readonly) NSArray * itemsByRemovingLocalItems; 
@property (nonatomic,readonly) BOOL isCollectionOfferPresentable; 
+(BOOL)supportsSecureCoding;
+(id)defaultPropertyValues;
+(id)collectionLookupKeyForMediaProperty:(id)arg1 ;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2 ;
+(id)contentRatingForCollectionPropertyValues:(id)arg1 ;
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 ;
+(long long)offerPassTypeForLookupCollectionPropertyValues:(id)arg1 ;
+(id)albumOrderedChildItemIDsForLookupCollectionPropertyValues:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)title;
-(unsigned long long)persistentID;
-(BOOL)isDownloadable;
-(id)mediaLibrary;
-(id)valuesForProperties:(id)arg1 ;
-(long long)preferredStoreOfferVariant;
-(BOOL)_offeredItemAlreadyExists;
-(id)buyOfferForVariant:(long long)arg1 ;
-(id)_lookupOfferDictionaries;
-(BOOL)_checkIsUsableOffer;
-(id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4 ;
-(id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
-(id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
-(NSArray *)itemsByRemovingStoreOffers;
-(long long)countOfItemsByRemovingLocalItems;
-(NSArray *)itemsByRemovingLocalItems;
-(BOOL)isCheaperToPurchaseIndividualItems;
-(BOOL)isCollectionOfferPresentable;
-(BOOL)_hasRestrictedContent;
-(BOOL)hasDownloadableStoreOfferItemsForVariant:(long long)arg1 ;
-(BOOL)hasPurchasableStoreOfferItemsForVariant:(long long)arg1 ;
-(void)_loadLocalCollection;
@end

