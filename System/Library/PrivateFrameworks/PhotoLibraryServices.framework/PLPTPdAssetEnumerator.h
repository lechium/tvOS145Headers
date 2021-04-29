/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLPTPConversionSupport;
@class PLManagedObjectContext, NSArray;

@interface PLPTPdAssetEnumerator : NSObject {

	PLManagedObjectContext* _managedObjectContext;
	NSArray* _assetObjectIDs;
	id<PLPTPConversionSupport> _conversionSupport;

}
+(id)enumeratorWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3 ;
-(void)enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3 ;
-(BOOL)enumerateAssetsWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
@end

