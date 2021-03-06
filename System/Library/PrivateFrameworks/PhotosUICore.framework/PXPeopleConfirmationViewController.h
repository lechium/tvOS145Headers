/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPeopleSuggestionManagerDelegate.h>
#import <libobjc.A.dylib/PXPeopleSummaryDelegate.h>

@class PXPeopleSuggestionManager, PXPeopleSuggestionView, PXAnimatedHeaderView, UILabel, UIActivityIndicatorView, PXPeopleConfirmationLoadingView, PXPeopleConfirmationSummaryViewController, NSTimer, NSString;

@interface PXPeopleConfirmationViewController : UIViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate> {

	BOOL _suggestionsPresented;
	BOOL _showTypeDebugColor;
	PXPeopleSuggestionManager* _suggestionManager;
	PXPeopleSuggestionView* _suggestionView;
	PXAnimatedHeaderView* _headerView;
	UILabel* _descriptionLabel;
	UILabel* _interimLoadingLabel;
	UIActivityIndicatorView* _interimLoadingIndicator;
	unsigned long long _viewState;
	PXPeopleConfirmationLoadingView* _loadingView;
	PXPeopleConfirmationSummaryViewController* _summaryViewController;
	NSTimer* _loadingDelayTimer;

}

@property (nonatomic,retain) PXPeopleSuggestionView * suggestionView;                                        //@synthesize suggestionView=_suggestionView - In the implementation block
@property (nonatomic,retain) PXAnimatedHeaderView * headerView;                                              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                     //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) PXPeopleConfirmationLoadingView * loadingView;                                  //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) UILabel * interimLoadingLabel;                                                  //@synthesize interimLoadingLabel=_interimLoadingLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * interimLoadingIndicator;                              //@synthesize interimLoadingIndicator=_interimLoadingIndicator - In the implementation block
@property (nonatomic,retain) PXPeopleConfirmationSummaryViewController * summaryViewController;              //@synthesize summaryViewController=_summaryViewController - In the implementation block
@property (nonatomic,retain) NSTimer * loadingDelayTimer;                                                    //@synthesize loadingDelayTimer=_loadingDelayTimer - In the implementation block
@property (assign,nonatomic) BOOL suggestionsPresented;                                                      //@synthesize suggestionsPresented=_suggestionsPresented - In the implementation block
@property (assign,nonatomic) BOOL showTypeDebugColor;                                                        //@synthesize showTypeDebugColor=_showTypeDebugColor - In the implementation block
@property (readonly) PXPeopleSuggestionManager * suggestionManager;                                          //@synthesize suggestionManager=_suggestionManager - In the implementation block
@property (readonly) BOOL isSummaryViewShowing; 
@property (assign,nonatomic) unsigned long long viewState;                                                   //@synthesize viewState=_viewState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(unsigned long long)viewState;
-(void)setViewState:(unsigned long long)arg1 ;
-(id)initWithPerson:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(PXAnimatedHeaderView *)headerView;
-(void)setHeaderView:(PXAnimatedHeaderView *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)personForSummaryViewController:(id)arg1 ;
-(unsigned long long)userConfirmedCountForSummaryViewController:(id)arg1 ;
-(unsigned long long)autoConfirmedCountForSummaryViewController:(id)arg1 ;
-(void)confirmationCountUpdatedForSuggestionManager:(id)arg1 undoing:(BOOL)arg2 ;
-(void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1 ;
-(void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2 ;
-(void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1 ;
-(void)presentSuggestion:(id)arg1 animated:(BOOL)arg2 ;
-(void)displaySummary;
-(void)dismissSummary;
-(void)updateViewWithViewState:(unsigned long long)arg1 ;
-(BOOL)isSummaryViewShowing;
-(void)suggestionDidDisplay;
-(void)confirmTapped:(id)arg1 ;
-(void)denyTapped:(id)arg1 ;
-(void)undoConfirm:(id)arg1 ;
-(void)undoDeny:(id)arg1 ;
-(void)performUndo:(id)arg1 ;
-(void)doneTapped:(id)arg1 ;
-(PXPeopleSuggestionManager *)suggestionManager;
-(PXPeopleSuggestionView *)suggestionView;
-(void)setSuggestionView:(PXPeopleSuggestionView *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)interimLoadingLabel;
-(void)setInterimLoadingLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)interimLoadingIndicator;
-(void)setInterimLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(PXPeopleConfirmationLoadingView *)loadingView;
-(void)setLoadingView:(PXPeopleConfirmationLoadingView *)arg1 ;
-(PXPeopleConfirmationSummaryViewController *)summaryViewController;
-(void)setSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1 ;
-(NSTimer *)loadingDelayTimer;
-(void)setLoadingDelayTimer:(NSTimer *)arg1 ;
-(BOOL)suggestionsPresented;
-(void)setSuggestionsPresented:(BOOL)arg1 ;
-(BOOL)showTypeDebugColor;
-(void)setShowTypeDebugColor:(BOOL)arg1 ;
@end

