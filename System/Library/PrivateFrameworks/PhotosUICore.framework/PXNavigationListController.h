/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PXNavigationListDataSectionManagerObserver.h>

@protocol PXNavigationListContainer;
@class UITableView, PXNavigationListDataSectionManager, PXNavigationListDataSection, NSUserActivity, NSString;

@interface PXNavigationListController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, PXNavigationListDataSectionManagerObserver> {

	BOOL __needsUpdateRowHeight;
	UITableView* _tableView;
	PXNavigationListDataSectionManager* _dataSectionManager;
	id<PXNavigationListContainer> _container;
	PXNavigationListDataSection* _dataSection;
	NSUserActivity* _siriActionActivity;
	double _rowHeight;

}

@property (nonatomic,retain) PXNavigationListDataSection * dataSection;                                //@synthesize dataSection=_dataSection - In the implementation block
@property (nonatomic,retain) NSUserActivity * siriActionActivity;                                      //@synthesize siriActionActivity=_siriActionActivity - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                         //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,setter=_setNeedsUpdateRowHeight:,nonatomic) BOOL _needsUpdateRowHeight;              //@synthesize _needsUpdateRowHeight=__needsUpdateRowHeight - In the implementation block
@property (nonatomic,readonly) PXNavigationListDataSectionManager * dataSectionManager;                //@synthesize dataSectionManager=_dataSectionManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXNavigationListContainer> container;                           //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) double contentHeight; 
@property (nonatomic,readonly) UITableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL allowsNavigation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)navigateToListItem:(id)arg1 sourceViewController:(id)arg2 existingAssetsFetchResult:(id)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PXNavigationListContainer>)container;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContainer:(id<PXNavigationListContainer>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setRowHeight:(double)arg1 ;
-(double)rowHeight;
-(double)contentHeight;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateTableView;
-(NSUserActivity *)siriActionActivity;
-(void)setSiriActionActivity:(NSUserActivity *)arg1 ;
-(id)_createTransparentFullWidthViewOfHeight:(double)arg1 ;
-(id)initWithDataSectionManager:(id)arg1 ;
-(double)_contentHeightForDataSection:(id)arg1 ;
-(void)setAllowsNavigation:(BOOL)arg1 ;
-(BOOL)allowsNavigation;
-(double)_rowHeightForCurrentFont;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(void)contentHeightDidChange;
-(void)_updateCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updateCellSeparatorStyle:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(id)_navigateTolistItem:(id)arg1 animated:(BOOL)arg2 ;
-(PXNavigationListDataSectionManager *)dataSectionManager;
-(PXNavigationListDataSection *)dataSection;
-(void)setDataSection:(PXNavigationListDataSection *)arg1 ;
-(BOOL)_needsUpdateRowHeight;
-(void)_setNeedsUpdateRowHeight:(BOOL)arg1 ;
@end

