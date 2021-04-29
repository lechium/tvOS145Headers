/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSOrderedSet;


@protocol PXPlacesMapRenderable <NSObject>
@property (__weak) id<PXPlacesMapRenderer> renderer; 
@property (__weak) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) NSOrderedSet * geotaggables; 
@property (assign,nonatomic) long long index; 
@required
-(long long)index;
-(void)setIndex:(long long)arg1;
-(id<PXPlacesMapRenderer>)renderer;
-(void)setRenderer:(id)arg1;
-(void)setSelectionHandler:(id)arg1;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(NSOrderedSet *)geotaggables;
-(void)setGeotaggables:(id)arg1;

@end

