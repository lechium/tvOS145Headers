/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PHResourceChooserAsset;
@class NSSortDescriptor, NSManagedObjectContext, NSArray, NSMutableArray;

@interface PHResourceChooserList : NSObject {

	id<PHResourceChooserAsset> _asset;
	/*^block*/id _itemHandler;
	/*^block*/id _endOfListHandler;
	long long _hintDataCurrentOffset;
	long long _hintDataNextItemOffset;
	BOOL _finishedPresentingFromHints;
	BOOL _didObserveThumbnailStoreKey;
	NSSortDescriptor* _sortDescriptor;
	NSManagedObjectContext* _context;
	NSArray* _nonHintResources;
	NSArray* _unvisitedNonHintResources;
	unsigned long long _lastPresentedFullResourceIndex;
	BOOL _finishedPresentingFromFetchedResources;
	NSMutableArray* _visitedKeys;
	unsigned long long _enumerationDirection;

}
-(id)init;
@end
