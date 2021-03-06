/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOMapItemVenueInfo.h>
@class NSArray, GEOMapItemParentVenue;


@protocol GEOMapItemVenueInfo <NSObject>
@property (nonatomic,readonly) id<GEOVenueIdentifier> venueIdentifier; 
@property (nonatomic,readonly) int venueFeatureType; 
@property (nonatomic,readonly) NSArray * filters; 
@property (nonatomic,readonly) GEOMapItemParentVenue * parent; 
@property (nonatomic,readonly) id<GEOMapItemVenueContents> contents; 
@required
-(id<GEOMapItemVenueContents>)contents;
-(GEOMapItemParentVenue *)parent;
-(NSArray *)filters;
-(id<GEOVenueIdentifier>)venueIdentifier;
-(int)venueFeatureType;

@end


@protocol GEOVenueIdentifier, GEOMapItemVenueContents;
@class NSArray, GEOMapItemParentVenue, NSString;

@interface GEOMapItemVenueInfo : NSObject <GEOMapItemVenueInfo> {

	id<GEOVenueIdentifier> _venueIdentifier;
	int _venueFeatureType;
	NSArray* _filters;
	GEOMapItemParentVenue* _parent;
	id<GEOMapItemVenueContents> _contents;

}

@property (nonatomic,readonly) id<GEOVenueIdentifier> venueIdentifier;              //@synthesize venueIdentifier=_venueIdentifier - In the implementation block
@property (nonatomic,readonly) int venueFeatureType;                                //@synthesize venueFeatureType=_venueFeatureType - In the implementation block
@property (nonatomic,readonly) NSArray * filters;                                   //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) GEOMapItemParentVenue * parent;                      //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) id<GEOMapItemVenueContents> contents;                //@synthesize contents=_contents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<GEOMapItemVenueContents>)contents;
-(GEOMapItemParentVenue *)parent;
-(NSArray *)filters;
-(id<GEOVenueIdentifier>)venueIdentifier;
-(int)venueFeatureType;
-(id)initWithVenueInfo:(id)arg1 ;
-(id)_filtersFromVenueInfo:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 featureType:(int)arg2 filters:(id)arg3 parent:(id)arg4 contents:(id)arg5 ;
@end

