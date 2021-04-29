/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKCollectionDataProvider <NSObject>
@optional
-(id)collections;
-(long long)numberOfSections;
-(id)geoCollectionAtIndex:(long long)arg1;
-(id)collectionAtIndex:(long long)arg1;
-(long long)numberOfCollections;

@required
-(void)refreshCollections;
-(void)displayCollections;

@end
