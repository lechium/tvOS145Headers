/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@class _MKPlaceInlineMapContentView, MKMapItem, MKAnnotatedMapSnapshotter, _MKPlaceViewController, MKMapCamera, NSArray, NSString;

@interface MKPlaceInlineMapViewController : UIViewController <MKModuleViewControllerProtocol> {

	_MKPlaceInlineMapContentView* _contentView;
	MKMapItem* _updatingInlineMapItem;
	MKAnnotatedMapSnapshotter* _collectionSnapshotter;
	CGSize _currentSize;
	BOOL _bottomHairlineHidden;
	BOOL _useWindowTrait;
	MKMapItem* _mapItem;
	_MKPlaceViewController* _owner;
	MKMapCamera* _mapCamera;

}

@property (assign,nonatomic) BOOL useWindowTrait;                                                  //@synthesize useWindowTrait=_useWindowTrait - In the implementation block
@property (nonatomic,retain) MKMapCamera * mapCamera;                                              //@synthesize mapCamera=_mapCamera - In the implementation block
@property (nonatomic,readonly) NSArray * visibleMapItems; 
@property (nonatomic,retain) MKMapItem * mapItem;                                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden;              //@synthesize bottomHairlineHidden=_bottomHairlineHidden - In the implementation block
@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inlineMapWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(_MKPlaceViewController *)owner;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)snapshot;
-(CGSize)_mapSize;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(id)initWithMKMapItem:(id)arg1 ;
-(void)setUseWindowTrait:(BOOL)arg1 ;
-(void)_handleTapOnMap;
-(void)_updateMap;
-(void)_updateMapIfNeeded;
-(void)updateInlineMapWithRefinedMapItems;
-(void)_updateInlineMapWithRefinedMapItems;
-(void)cancelSnapshotRequestIfNeeded;
-(NSArray *)visibleMapItems;
-(void)_updateSnapshotImage:(id)arg1 ;
-(void)_launchMaps;
-(id)traitCollectionForSnapshot;
-(long long)preferredUserInterfaceStyle;
-(BOOL)isBottomHairlineHidden;
-(BOOL)useWindowTrait;
-(MKMapCamera *)mapCamera;
-(void)setMapCamera:(MKMapCamera *)arg1 ;
@end

