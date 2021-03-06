/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXPhotosGlobalFooterViewDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>

@protocol PXPhotosGridFooterPresentationDelegate;
@class PXPhotosViewModel, PXGView, PXPhotosLayout, PXPhotosGlobalFooterView, NSTimer, NSString;

@interface PXPhotosGridFooterPresentation : NSObject <PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver> {

	PXPhotosViewModel* _viewModel;
	PXGView* _gridView;
	PXPhotosLayout* _layout;
	BOOL _hasAppearedOnce;
	BOOL _hasReachedInitialPosition;
	PXPhotosGlobalFooterView* _reusableFooterView;
	double _lastUserScrollTime;
	BOOL _didAutoReveal;
	NSTimer* _autoRevealMinimumIdleTimer;
	BOOL _shouldAutoReveal;
	BOOL _wantsFooter;
	id<PXPhotosGridFooterPresentationDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldAutoReveal;                                                   //@synthesize shouldAutoReveal=_shouldAutoReveal - In the implementation block
@property (assign,nonatomic) BOOL wantsFooter;                                                        //@synthesize wantsFooter=_wantsFooter - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosGridFooterPresentationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXPhotosGridFooterPresentationDelegate>)delegate;
-(void)setDelegate:(id<PXPhotosGridFooterPresentationDelegate>)arg1 ;
-(void)viewDidAppear;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1 ;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg1 ;
-(void)photosGlobalFooterViewDidChangeHeight:(id)arg1 ;
-(void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2 ;
-(void)setWantsFooter:(BOOL)arg1 ;
-(void)_updateWantsFooter;
-(BOOL)wantsFooter;
-(id)initWithViewModel:(id)arg1 gridView:(id)arg2 layout:(id)arg3 ;
-(void)viewDidScrollToInitialPosition;
-(void)setShouldAutoReveal:(BOOL)arg1 ;
-(double)_footerVisibleAmountIncludingSafeAreaInsets:(BOOL)arg1 ;
-(BOOL)_shouldAutoRevealFooterView;
-(void)_conditionallyAutoRevealFooterViewWithLastUserScrollTime:(double)arg1 ;
-(void)_conditionallyAutoRevealFooterView;
-(void)_updateFooterView;
-(BOOL)shouldAutoReveal;
@end

