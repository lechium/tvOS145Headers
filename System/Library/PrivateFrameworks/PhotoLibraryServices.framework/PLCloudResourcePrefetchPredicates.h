/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLCloudResourcePrefetchPredicates : NSObject
+(id)predicatesForNonThumbnails:(id)arg1 photoLibrary:(id)arg2 defaultPrefetchMode:(long long)arg3 ;
+(id)predicatesForThumbnails;
+(id)_predicateToPrefetchHighlightWithUUIDs:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_predicateToPrefetchMemories:(id)arg1 photoLibrary:(id)arg2 ;
+(id)predicatesForWidget:(id)arg1 defaultPrefetchMode:(long long)arg2 ;
+(id)predicatesForMemories:(id)arg1 defaultPrefetchMode:(long long)arg2 ;
+(id)_missingThumbnailConditionString;
+(id)_predicateForMaxFilesize:(long long)arg1 ;
+(id)_predicateForResourceCreatedAfterDate:(id)arg1 ;
+(id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1 ;
+(id)_irisConditionString;
+(id)_excludeMomentShareAssetsString;
+(id)_assetIsUnadjustedConditionString;
+(id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
+(id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
+(double)_resourceLastPrunedPrefetchTimeInterval;
+(id)_prefetchResourceForAsset:(id)arg1 inResourceTypes:(id)arg2 ;
+(BOOL)_shouldPrefetchMediums;
+(id)_resourcesToPrefetchForAsset:(id)arg1 ;
+(id)_predicateToPrefetchSuggestions:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_predicateToPrefetchMemoryKeyAssets:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_predicateForKeyFacePrefetching:(id)arg1 ;
@end
