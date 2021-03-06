/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOMapItem;
@class GEOPDContainedPlace, NSArray;

@interface GEOMapItemContainedPlace : NSObject {

	GEOPDContainedPlace* _containedPlace;
	id<GEOMapItem> _parent;
	NSArray* _children;
	NSArray* _siblings;

}

@property (nonatomic,readonly) unsigned long long featureId; 
@property (nonatomic,readonly) unsigned long long parentFeatureId; 
@property (nonatomic,readonly) id<GEOMapItem> parent; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSArray * siblings; 
-(id)description;
-(id)init;
-(NSArray *)children;
-(id<GEOMapItem>)parent;
-(unsigned long long)featureId;
-(id)initWithContainedPlace:(id)arg1 ;
-(unsigned long long)parentFeatureId;
-(NSArray *)siblings;
@end

