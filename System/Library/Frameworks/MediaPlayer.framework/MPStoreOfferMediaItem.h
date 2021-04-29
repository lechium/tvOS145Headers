/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPNondurableMediaItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSNumber, MPStoreOfferContentRating, MPStoreOfferMediaItemArtworkDescriptor;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying> {

	NSDictionary* _lookupCollectionPropertyValues;
	NSNumber* _itemID;
	long long _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _contentRating;
	MPStoreOfferMediaItemArtworkDescriptor* _offerArtworkDescriptor;
	long long _offerArtworkDescriptorOnceToken;
	id _pid;
	id _discNumber;
	id _trackNumber;
	id _title;

}
+(BOOL)supportsSecureCoding;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(id)defaultPropertyValues;
+(id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
+(BOOL)canMergeStoreOfferWithLocalMediaItems:(id)arg1 ;
+(BOOL)canRequestStoreOfferForLocalMediaItems:(id)arg1 ;
+(id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2 ;
+(id)mediaItemsByRemovingRestrictedContentFromMediaItems:(id)arg1 ;
+(id)collectionLookupKeyForMediaProperty:(id)arg1 ;
+(id)itemLookupKeyForMediaProperty:(id)arg1 ;
+(id)offerLookupKeyForItemMediaProperty:(id)arg1 ;
+(id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1 ;
+(id)assetLookupKeyForItemMediaProperty:(id)arg1 ;
+(id)preferredAssetDictionaryInOfferDictionary:(id)arg1 ;
+(id)localRepresentativeItemPropertyForMediaProperty:(id)arg1 ;
+(id)contentRatingForCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(BOOL)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 mediaProperty:(id)arg3 ;
+(id)offerArtworkDescriptorForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)title;
-(unsigned long long)persistentID;
-(unsigned long long)discNumber;
-(BOOL)isDownloadable;
-(unsigned long long)albumTrackNumber;
-(id)mediaLibrary;
-(long long)preferredStoreOfferVariant;
-(id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2 itemID:(id)arg3 ;
-(BOOL)_offeredItemAlreadyExists;
-(id)buyOfferForVariant:(long long)arg1 ;
-(id)offerArtworkDescriptor;
-(id)_lookupOfferDictionaries;
@end

