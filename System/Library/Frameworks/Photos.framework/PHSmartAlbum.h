/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHAssetCollection.h>

@interface PHSmartAlbum : PHAssetCollection
+(id)managedEntityName;
+(id)fetchType;
+(id)_collectionSubtypeExpressionForFetchRequests;
+(id)albumKindFromSmartAlbumSubtype:(long long)arg1 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
-(BOOL)collectionHasFixedOrder;
@end

