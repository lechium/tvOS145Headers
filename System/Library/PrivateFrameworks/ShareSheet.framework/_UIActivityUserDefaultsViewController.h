/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UIActivityUserDefaultsDataSourceProxy.h>
#import <UIKit/UITableViewDelegate.h>

@protocol _UIActivityUserDefaultsViewControllerDelegate;
@class NSArray, NSMutableDictionary, NSDictionary, _UIActivityUserDefaults, UIImage, _UIActivityUserDefaultsDataSource, NSDiffableDataSourceSnapshot, UITableView, UIVisualEffectView, NSString;

@interface _UIActivityUserDefaultsViewController : UIViewController <_UIActivityUserDefaultsDataSourceProxy, UITableViewDelegate> {

	id<_UIActivityUserDefaultsViewControllerDelegate> _userDefaultsDelegate;
	NSArray* _activities;
	NSArray* _favoritesProxies;
	NSMutableDictionary* _favoritesByUUID;
	NSArray* _suggestionProxies;
	NSMutableDictionary* _suggestionsByUUID;
	NSDictionary* _activitiesByUUID;
	NSArray* _applicationActivities;
	NSArray* _orderedUUIDs;
	long long _activityCategory;
	_UIActivityUserDefaults* _userDefaults;
	UIImage* _placeholderImage;
	_UIActivityUserDefaultsDataSource* _diffableDataSource;
	NSDiffableDataSourceSnapshot* _currentSnapshot;
	UITableView* _tableView;
	UIVisualEffectView* _backgroundView;

}

@property (nonatomic,copy) NSArray * activities;                                                                         //@synthesize activities=_activities - In the implementation block
@property (nonatomic,copy) NSArray * favoritesProxies;                                                                   //@synthesize favoritesProxies=_favoritesProxies - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * favoritesByUUID;                                                      //@synthesize favoritesByUUID=_favoritesByUUID - In the implementation block
@property (nonatomic,copy) NSArray * suggestionProxies;                                                                  //@synthesize suggestionProxies=_suggestionProxies - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * suggestionsByUUID;                                                    //@synthesize suggestionsByUUID=_suggestionsByUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * activitiesByUUID;                                                            //@synthesize activitiesByUUID=_activitiesByUUID - In the implementation block
@property (nonatomic,retain) NSArray * applicationActivities;                                                            //@synthesize applicationActivities=_applicationActivities - In the implementation block
@property (nonatomic,retain) NSArray * orderedUUIDs;                                                                     //@synthesize orderedUUIDs=_orderedUUIDs - In the implementation block
@property (assign,nonatomic) long long activityCategory;                                                                 //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,retain) _UIActivityUserDefaults * userDefaults;                                                     //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                                 //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) _UIActivityUserDefaultsDataSource * diffableDataSource;                                     //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) NSDiffableDataSourceSnapshot * currentSnapshot;                                             //@synthesize currentSnapshot=_currentSnapshot - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<_UIActivityUserDefaultsViewControllerDelegate> userDefaultsDelegate;              //@synthesize userDefaultsDelegate=_userDefaultsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)activities;
-(void)setActivities:(NSArray *)arg1 ;
-(NSDiffableDataSourceSnapshot *)currentSnapshot;
-(_UIActivityUserDefaults *)userDefaults;
-(void)setUserDefaults:(_UIActivityUserDefaults *)arg1 ;
-(void)viewDidLoad;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UITableView *)tableView;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setDiffableDataSource:(_UIActivityUserDefaultsDataSource *)arg1 ;
-(_UIActivityUserDefaultsDataSource *)diffableDataSource;
-(UIVisualEffectView *)backgroundView;
-(void)setCurrentSnapshot:(NSDiffableDataSourceSnapshot *)arg1 ;
-(long long)activityCategory;
-(void)setFavoritesProxies:(NSArray *)arg1 ;
-(void)setFavoritesByUUID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)favoritesByUUID;
-(void)setSuggestionProxies:(NSArray *)arg1 ;
-(void)setSuggestionsByUUID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)suggestionsByUUID;
-(void)setActivitiesByUUID:(NSDictionary *)arg1 ;
-(void)setActivityCategory:(long long)arg1 ;
-(void)setApplicationActivities:(NSArray *)arg1 ;
-(void)setOrderedUUIDs:(NSArray *)arg1 ;
-(id)initWithActivities:(id)arg1 userDefaults:(id)arg2 ;
-(void)editUserDefaults;
-(void)dismissUserDefaults;
-(NSDictionary *)activitiesByUUID;
-(void)configureSwitchForCell:(id)arg1 activityProxy:(id)arg2 ;
-(void)updateUserDefaultsAnimated:(BOOL)arg1 ;
-(NSArray *)favoritesProxies;
-(NSArray *)suggestionProxies;
-(NSArray *)applicationActivities;
-(void)toggleActivityHiddenForControl:(id)arg1 ;
-(void)doneEditingUserDefaults;
-(id<_UIActivityUserDefaultsViewControllerDelegate>)userDefaultsDelegate;
-(NSArray *)orderedUUIDs;
-(id)cellForItemIdentifier:(id)arg1 ;
-(id)activityForRowAtIndexPath:(id)arg1 ;
-(id)initWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 activitiesByUUID:(id)arg3 applicationActivities:(id)arg4 orderedUUIDs:(id)arg5 activityCategory:(long long)arg6 ;
-(void)toggleActivityHiddenForRowAtIndexPath:(id)arg1 ;
-(long long)preferredActivityCategory;
-(void)setUserDefaultsDelegate:(id<_UIActivityUserDefaultsViewControllerDelegate>)arg1 ;
@end

