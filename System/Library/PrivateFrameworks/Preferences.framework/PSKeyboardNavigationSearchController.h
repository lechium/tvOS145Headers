/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UISearchController.h>

@protocol PSKeyboardNavigationSearchResultsController;
@class UIViewController, PSKeyboardNavigationSearchBar;

@interface PSKeyboardNavigationSearchController : UISearchController {

	UIViewController*<PSKeyboardNavigationSearchResultsController> searchResultsController;
	PSKeyboardNavigationSearchBar* searchBar;

}

@property (nonatomic,retain) PSKeyboardNavigationSearchBar * searchBar; 
@property (nonatomic,retain) UIViewController*<PSKeyboardNavigationSearchResultsController> searchResultsController; 
-(void)_escapeKeyPressed;
-(void)_downArrowKeyPressed;
-(void)_upArrowKeyPressed;
-(void)setSearchBar:(PSKeyboardNavigationSearchBar *)arg1 ;
-(PSKeyboardNavigationSearchBar *)searchBar;
-(id)initWithSearchResultsController:(id)arg1 ;
-(void)setSearchResultsController:(UIViewController*<PSKeyboardNavigationSearchResultsController>)arg1 ;
-(UIViewController*<PSKeyboardNavigationSearchResultsController>)searchResultsController;
@end

