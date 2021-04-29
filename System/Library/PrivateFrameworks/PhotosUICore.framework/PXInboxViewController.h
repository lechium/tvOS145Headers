/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate, PXNavigableForYouViewController, PXInboxModel;
@class PXGadgetSpec, UITableView, NSDate, PXInboxAggregateDataSource, PXInboxAggregateDataSourceManager, PXInboxTableViewCellLayoutCoordinator, PXPhotoKitUIMediaProvider, NSString;

@interface PXInboxViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXOneUpPresentationDelegate, PXGadget> {

	BOOL _visible;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	unsigned long long _accessoryButtonType;
	PXGadgetSpec* _gadgetSpec;
	UITableView* _tableView;
	id<PXNavigableForYouViewController> _forYouNavigationDelegate;
	NSDate* _lastSeenDate;
	PXInboxAggregateDataSource* _dataSource;
	PXInboxAggregateDataSourceManager* _dataSourceManager;
	PXInboxTableViewCellLayoutCoordinator* _cellLayoutCoordinator;
	double _currentRowHeight;
	PXPhotoKitUIMediaProvider* _mediaProvider;
	id<PXInboxModel> _lastSelectedModel;
	NSRange _dataSourceIndexRange;
	CGRect _visibleContentRect;

}

@property (nonatomic,readonly) UITableView * tableView;                                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) PXInboxAggregateDataSource * dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXInboxAggregateDataSourceManager * dataSourceManager;                            //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PXInboxTableViewCellLayoutCoordinator * cellLayoutCoordinator;                    //@synthesize cellLayoutCoordinator=_cellLayoutCoordinator - In the implementation block
@property (assign,nonatomic) double currentRowHeight;                                                          //@synthesize currentRowHeight=_currentRowHeight - In the implementation block
@property (nonatomic,retain) PXPhotoKitUIMediaProvider * mediaProvider;                                        //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) id<PXInboxModel> lastSelectedModel;                                               //@synthesize lastSelectedModel=_lastSelectedModel - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                    //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic,__weak) id<PXNavigableForYouViewController> forYouNavigationDelegate;              //@synthesize forYouNavigationDelegate=_forYouNavigationDelegate - In the implementation block
@property (assign,nonatomic) NSRange dataSourceIndexRange;                                                     //@synthesize dataSourceIndexRange=_dataSourceIndexRange - In the implementation block
@property (nonatomic,retain) NSDate * lastSeenDate;                                                            //@synthesize lastSeenDate=_lastSeenDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                        //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType;                                         //@synthesize accessoryButtonType=_accessoryButtonType - In the implementation block
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect;                                                        //@synthesize visibleContentRect=_visibleContentRect - In the implementation block
+(void)preloadResources;
+(id)createInboxDataSourceManager;
-(id)init;
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(PXInboxAggregateDataSource *)dataSource;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setDataSource:(PXInboxAggregateDataSource *)arg1 ;
-(NSDate *)lastSeenDate;
-(void)setLastSeenDate:(NSDate *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)_numberOfRows;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)contentViewController;
-(PXPhotoKitUIMediaProvider *)mediaProvider;
-(PXInboxAggregateDataSourceManager *)dataSourceManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithDataSourceManager:(id)arg1 ;
-(unsigned long long)gadgetType;
-(void)setMediaProvider:(PXPhotoKitUIMediaProvider *)arg1 ;
-(void)setDataSourceManager:(PXInboxAggregateDataSourceManager *)arg1 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(CGRect)visibleContentRect;
-(void)gadgetControllerHasAppeared;
-(unsigned long long)accessoryButtonType;
-(void)setVisibleContentRect:(CGRect)arg1 ;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setDataSourceIndexRange:(NSRange)arg1 ;
-(void)_updateTableViewFrameAndBounds;
-(id)_createDividerView;
-(double)_dividerHeight;
-(id)_createTransparentFullWidthViewOfHeight:(double)arg1 ;
-(PXSimpleIndexPath)_dataSourceIndexPathFromTableViewIndexPath:(id)arg1 ;
-(id)_tableViewIndexPathFromDataSourceIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)_shouldHandleAllIndexes;
-(void)_dismissDetailViewsIfNeededWithPreviousDataSource:(id)arg1 ;
-(BOOL)_isModelUnseen:(id)arg1 ;
-(void)_updateSeenState;
-(void)_startOneUpPresentationForModel:(id)arg1 ;
-(void)ppt_performBlockAfterLoadingCompletes:(/*^block*/id)arg1 ;
-(id<PXNavigableForYouViewController>)forYouNavigationDelegate;
-(void)setForYouNavigationDelegate:(id<PXNavigableForYouViewController>)arg1 ;
-(NSRange)dataSourceIndexRange;
-(PXInboxTableViewCellLayoutCoordinator *)cellLayoutCoordinator;
-(void)setCellLayoutCoordinator:(PXInboxTableViewCellLayoutCoordinator *)arg1 ;
-(double)currentRowHeight;
-(void)setCurrentRowHeight:(double)arg1 ;
-(id<PXInboxModel>)lastSelectedModel;
-(void)setLastSelectedModel:(id<PXInboxModel>)arg1 ;
@end

