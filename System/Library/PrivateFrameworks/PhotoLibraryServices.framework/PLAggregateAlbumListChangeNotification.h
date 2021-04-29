/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLAggregateAlbumList, PLAssetContainerListChangeNotification;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {

	PLAggregateAlbumList* _albumList;
	PLAssetContainerListChangeNotification* _note;
	unsigned long long _indexOffet;

}
+(id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)object;
-(id)insertedObjects;
-(id)deletedObjects;
-(id)changedIndexes;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(id)insertedIndexes;
-(id)deletedIndexes;
-(BOOL)shouldReload;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)changedIndexesRelativeToSnapshot;
-(id)changedObjects;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
-(id)albumList;
-(id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
@end

