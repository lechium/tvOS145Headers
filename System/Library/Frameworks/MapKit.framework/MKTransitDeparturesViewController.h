/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKTableViewController.h>
#import <libobjc.A.dylib/MKTransitDeparturesDataSourceHosting.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol MKTransitDepaturesViewControllerDelegate;
@class MKMapItem, MKTransitDeparturesDataSource, NSString;

@interface MKTransitDeparturesViewController : _MKTableViewController <MKTransitDeparturesDataSourceHosting, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	BOOL _allowTransitLineSelection;
	CGRect _lastMaxWidthBounds;
	BOOL _isInSiri;
	MKMapItem* _mapItem;
	id<MKTransitDepaturesViewControllerDelegate> _delegate;
	MKTransitDeparturesDataSource* _dataSource;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                       //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) MKTransitDeparturesDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL isInSiri;                                                           //@synthesize isInSiri=_isInSiri - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitDepaturesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(id<MKTransitDepaturesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKTransitDepaturesViewControllerDelegate>)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(MKTransitDeparturesDataSource *)dataSource;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)infoCardThemeChanged;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(BOOL)isInSiri;
-(int)currentTransitCategory;
-(id)traitsForTransitDeparturesDataSource:(id)arg1 ;
-(void)transitDeparturesDataSourceDidReload:(id)arg1 ;
-(UIEdgeInsets)separatorInsetsForTransitDeparturesDataSource:(id)arg1 ;
-(id)separatorColorForTransitDeparturesDataSource:(id)arg1 ;
-(void)transitDeparturesDataSource:(id)arg1 didSelectConnectionInformation:(id)arg2 ;
-(void)transitDeparturesDataSource:(id)arg1 showIncidents:(id)arg2 ;
-(void)transitDeparturesDataSource:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3 ;
-(void)transitDeparturesDataSource:(id)arg1 didSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5 ;
-(BOOL)transitDeparturesDataSource:(id)arg1 canSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5 ;
-(void)transitDeparturesDataSourceDidToggleHiddenSystem:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 allowTransitLineSelection:(BOOL)arg2 ;
@end

