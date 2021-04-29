/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MapKit/MapKit-Structs.h>
@class GEOURLCollectionStorage;

@interface MKCollectionStorageRefiner : NSObject {

	os_unfair_lock_s _lock;
	GEOURLCollectionStorage* _collectionStorage;

}
-(void)_sharedInitWithCollectionStorage:(id)arg1 ;
-(void)fetchMapItems:(/*^block*/id)arg1 traits:(id)arg2 ;
-(id)initWithCollectionURL:(id)arg1 ;
-(id)initWithCollectionStorage:(id)arg1 ;
-(void)fetchMapItems:(/*^block*/id)arg1 ;
@end

