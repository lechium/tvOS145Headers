/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@class MKMapItem, MKPlaceSectionHeaderView, _MKPlaceBusinessInfoRow, NSString;

@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	MKMapItem* _mapItem;
	MKPlaceSectionHeaderView* _headerView;
	_MKPlaceBusinessInfoRow* _businessInfoRow;

}

@property (nonatomic,retain) MKMapItem * mapItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)mapItemHasBusinessInfoToDisplay:(id)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)infoCardThemeChanged;
-(void)_updateBusinessInfo;
-(id)_imageForApplePay;
-(id)_stringForAmenity:(int)arg1 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
@end

