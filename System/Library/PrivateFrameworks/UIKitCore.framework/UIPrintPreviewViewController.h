/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/PageRangeDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIPrintPanelViewController, UIView, UIImageView, UILabel, NSURL, NSOperationQueue, NSLayoutConstraint, UIDocumentInteractionController, NSMutableArray, NSArray, UIPrintPaper, NSString;

@interface UIPrintPreviewViewController : UICollectionViewController <UIGestureRecognizerDelegate, UIViewControllerPreviewingDelegate_Private, UIDocumentInteractionControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSourcePrefetching, UIScrollViewDelegate, UICollectionViewDelegate, PageRangeDelegate, UINavigationControllerDelegate> {

	long long _numPages;
	CGSize _pageSize;
	BOOL _grayscalePreview;
	BOOL _annotationsOnPreview;
	BOOL _accessibilityScrollTriggered;
	UIPrintPanelViewController* _printPanelViewController;
	UIView* _pageLabelBackgroundView;
	UIImageView* _pageLabelOnImageView;
	UILabel* _pageLabel;
	long long _pageIndexOnPageLabel;
	NSURL* _pdfURL;
	CGPDFDocumentRef _pdfDocRef;
	NSOperationQueue* _pageRendererQueue;
	NSLayoutConstraint* _pageLabelBadgeVerticalPositionConstraint;
	UIDocumentInteractionController* _documentInteractionController;
	NSURL* _sharePDFFileURL;
	UIImageView* _pinchGestureBeginningPageImageView;
	UIImageView* _pinchAnimationView;
	UIView* _pinchAnimationWhiteBackgroundView;
	CGPoint _pinchGestureLastPoint;
	double _pinchGestureLastScale;
	BOOL _scaleUpOnDestinationPaper;
	BOOL _presentingDocumentInteractionController;
	NSMutableArray* _arrayOfPageImages;
	NSArray* _arrayOfCellSizes;
	NSURL* _quickLookPDFURL;
	UIPrintPaper* _destinationPaper;
	NSString* _pdfPassword;
	long long _initialPageIndexToCenter;

}

@property (assign) BOOL presentingDocumentInteractionController;              //@synthesize presentingDocumentInteractionController=_presentingDocumentInteractionController - In the implementation block
@property (retain) NSMutableArray * arrayOfPageImages;                        //@synthesize arrayOfPageImages=_arrayOfPageImages - In the implementation block
@property (retain) NSArray * arrayOfCellSizes;                                //@synthesize arrayOfCellSizes=_arrayOfCellSizes - In the implementation block
@property (retain) NSURL * pdfURL; 
@property (retain) NSURL * quickLookPDFURL;                                   //@synthesize quickLookPDFURL=_quickLookPDFURL - In the implementation block
@property (assign) BOOL grayscalePreview; 
@property (assign) BOOL annotationsOnPreview; 
@property (retain) UIPrintPaper * destinationPaper;                           //@synthesize destinationPaper=_destinationPaper - In the implementation block
@property (assign) BOOL scaleUpOnDestinationPaper;                            //@synthesize scaleUpOnDestinationPaper=_scaleUpOnDestinationPaper - In the implementation block
@property (retain) NSString * pdfPassword;                                    //@synthesize pdfPassword=_pdfPassword - In the implementation block
@property (readonly) long long currentCenterPageIndex; 
@property (assign) long long initialPageIndexToCenter;                        //@synthesize initialPageIndexToCenter=_initialPageIndexToCenter - In the implementation block
@property (readonly) long long numPages;                                      //@synthesize numPages=_numPages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)viewDidLoad;
-(void)updateLayout;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)handleTap:(id)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(void)documentInteractionControllerDidEndPreview:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2 ;
-(void)handlePinch:(id)arg1 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(long long)numPages;
-(id)initWithViewSize:(CGSize)arg1 printPanelViewController:(id)arg2 ;
-(void)setGrayscalePreview:(BOOL)arg1 ;
-(void)setDestinationPaper:(UIPrintPaper *)arg1 ;
-(void)setScaleUpOnDestinationPaper:(BOOL)arg1 ;
-(void)setPdfPassword:(NSString *)arg1 ;
-(void)setAnnotationsOnPreview:(BOOL)arg1 ;
-(void)setPdfURL:(NSURL *)arg1 ;
-(NSURL *)pdfURL;
-(BOOL)presentingDocumentInteractionController;
-(NSString *)pdfPassword;
-(void)setStartPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(void)setEndPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(void)addPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(void)removePage:(id)arg1 forPageIndex:(long long)arg2 ;
-(void)addAllPages:(id)arg1 ;
-(BOOL)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(BOOL)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(BOOL)canAddPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(BOOL)canRemovePage:(id)arg1 forPageIndex:(long long)arg2 ;
-(BOOL)canAddAllPages:(id)arg1 ;
-(BOOL)canShowMenuBar;
-(double)pageLabelBottomSpace;
-(void)updatePageNumberBadgeLocation;
-(void)trackCenterCell;
-(void)pageRangeUpdated;
-(NSArray *)arrayOfCellSizes;
-(void)setArrayOfCellSizes:(NSArray *)arg1 ;
-(void)_mainQueue_UpdateLayout;
-(void)resetCellSizesArrayCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)quickLookPDFURL;
-(BOOL)pageIndexIsInRange:(long long)arg1 ;
-(NSMutableArray *)arrayOfPageImages;
-(void)resetAllPageImages;
-(void)setArrayOfPageImages:(NSMutableArray *)arg1 ;
-(UIPrintPaper *)destinationPaper;
-(BOOL)annotationsOnPreview;
-(BOOL)scaleUpOnDestinationPaper;
-(void)updatePageLabel;
-(void)setQuickLookPDFURL:(NSURL *)arg1 ;
-(void)previewPDF;
-(void)animateCellAndPresentDocumentInteractionController;
-(id)gestureRecognizersOfVisibleCells;
-(BOOL)locationInTapTargetOfPageLabelBadge:(CGPoint)arg1 ;
-(void)pageBadgeTapped:(id)arg1 ;
-(void)updatePageBadgeImage;
-(BOOL)grayscalePreview;
-(id)getPageImageForPage:(long long)arg1 grayscale:(BOOL)arg2 deepColor:(BOOL)arg3 ;
-(void)_mainQueue_reloadItemAtIndex:(id)arg1 ;
-(void)fetchPageInBackground:(unsigned long long)arg1 reloadWhenDone:(BOOL)arg2 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setPresentingDocumentInteractionController:(BOOL)arg1 ;
-(id)indexPathNearestToPointInCollectionView:(CGPoint)arg1 ;
-(id)pathOfCenterMostCell;
-(long long)_adjustScrollDirectionForLayout:(long long)arg1 ;
-(id)_newTempURLForPreviewing;
-(id)excludedActivityTypesForDocumentInteractionController:(id)arg1 ;
-(long long)currentCenterPageIndex;
-(long long)initialPageIndexToCenter;
-(void)setInitialPageIndexToCenter:(long long)arg1 ;
@end
