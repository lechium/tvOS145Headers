/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVMLKit/_TVFullScreenBrowserViewDelegate.h>
#import <TVMLKit/_TVFullScreenBrowserViewDataSource.h>
#import <TVMLKit/_TVAppDocumentRequestControllerDelegate.h>
#import <TVMLKit/_TVApplicationInspectorDocumentProvider.h>

@protocol TVBrowserViewControllerDelegate, TVBrowserViewControllerDataSource, TVBrowserProviding;
@class TVViewElement, _TVFullScreenBrowserView, UIView, NSMutableArray, IKCollectionElement, NSIndexPath, _TVAppDocumentRequestController, UIViewController, IKAppContext, NSString;

@interface TVBrowserViewController : UIViewController <_TVFullScreenBrowserViewDelegate, _TVFullScreenBrowserViewDataSource, _TVAppDocumentRequestControllerDelegate, _TVApplicationInspectorDocumentProvider> {

	struct {
		BOOL respondsToWillCenterOnElement;
		BOOL respondsToDidCenterOnElement;
		BOOL respondsToShouldShowElement;
	}  _delegateFlags;
	struct {
		BOOL hasTransitioned;
	}  _flags;
	TVViewElement* _viewElement;
	double _cornerRadius;
	double _interitemSpacing;
	id<TVBrowserViewControllerDelegate> _delegate;
	id<TVBrowserViewControllerDataSource> _dataSource;
	_TVFullScreenBrowserView* _paradeView;
	UIView* _wallpaperView;
	NSMutableArray* _cellDataSet;
	IKCollectionElement* _collectionElement;
	NSIndexPath* _preferredIndexPath;
	_TVAppDocumentRequestController* _centeredDocumentController;
	UIViewController*<TVBrowserProviding> _provider;
	UIEdgeInsets _maskInset;

}

@property (nonatomic,readonly) _TVFullScreenBrowserView * paradeView;                                          //@synthesize paradeView=_paradeView - In the implementation block
@property (nonatomic,readonly) UIView * wallpaperView;                                                         //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cellDataSet;                                                   //@synthesize cellDataSet=_cellDataSet - In the implementation block
@property (nonatomic,retain) IKCollectionElement * collectionElement;                                          //@synthesize collectionElement=_collectionElement - In the implementation block
@property (nonatomic,retain) NSIndexPath * preferredIndexPath;                                                 //@synthesize preferredIndexPath=_preferredIndexPath - In the implementation block
@property (assign,nonatomic,__weak) _TVAppDocumentRequestController * centeredDocumentController;              //@synthesize centeredDocumentController=_centeredDocumentController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<TVBrowserProviding> provider;                            //@synthesize provider=_provider - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@property (nonatomic,readonly) TVViewElement * viewElement;                                                    //@synthesize viewElement=_viewElement - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                                          //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets maskInset;                                                           //@synthesize maskInset=_maskInset - In the implementation block
@property (nonatomic,retain) TVViewElement * centeredViewElement; 
@property (assign,nonatomic,__weak) id<TVBrowserViewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TVBrowserViewControllerDataSource> dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerForResponder:(id)arg1 ;
+(Class)browserCellClass;
+(id)viewControllerForElement:(id)arg1 ;
-(void)dealloc;
-(id<TVBrowserViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVBrowserViewControllerDelegate>)arg1 ;
-(void)setProvider:(UIViewController*<TVBrowserProviding>)arg1 ;
-(UIViewController*<TVBrowserProviding>)provider;
-(id)initPrivate;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id<TVBrowserViewControllerDataSource>)dataSource;
-(void)viewDidLoad;
-(void)setDataSource:(id<TVBrowserViewControllerDataSource>)arg1 ;
-(IKAppContext *)appContext;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(TVViewElement *)viewElement;
-(id)activeDocument;
-(double)interitemSpacing;
-(UIEdgeInsets)maskInset;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setMaskInset:(UIEdgeInsets)arg1 ;
-(IKCollectionElement *)collectionElement;
-(void)appDocumentController:(id)arg1 didHostTemplateViewController:(id)arg2 usedTransitions:(BOOL)arg3 ;
-(id)documentControllerForElement:(id)arg1 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(void)showcaseFactorDidChangeForAppDocumentController:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 preferredIndexPath:(id)arg2 ;
-(void)setCollectionElement:(IKCollectionElement *)arg1 ;
-(void)setPreferredIndexPath:(NSIndexPath *)arg1 ;
-(void)setCenteredDocumentController:(_TVAppDocumentRequestController *)arg1 ;
-(_TVFullScreenBrowserView *)paradeView;
-(UIView *)wallpaperView;
-(NSIndexPath *)preferredIndexPath;
-(void)_loadDataForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)mediaInfoForElement:(id)arg1 ;
-(id)_cellDataForCell:(id)arg1 remove:(BOOL)arg2 ;
-(void)_enumerateAvailableCellDataForCells:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(_TVAppDocumentRequestController *)centeredDocumentController;
-(NSMutableArray *)cellDataSet;
-(BOOL)paradeView:(id)arg1 shouldShowItemAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredCenteredCellInParadeView:(id)arg1 ;
-(void)paradeView:(id)arg1 willCenterCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)paradeView:(id)arg1 didCenterCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)paradeView:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)paradeView:(id)arg1 didEndDisplayingCell:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)paradeView:(id)arg1 numberOfItemsForSection:(long long)arg2 ;
-(id)paradeView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInParadeView:(id)arg1 ;
-(TVViewElement *)centeredViewElement;
-(void)setCenteredViewElement:(TVViewElement *)arg1 ;
-(void)transitionForOperation:(long long)arg1 animator:(/*^block*/id)arg2 ;
@end

