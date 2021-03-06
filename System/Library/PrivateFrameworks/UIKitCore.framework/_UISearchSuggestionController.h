/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol _UISearchSuggestionControllerDelegate;
@class NSArray, UICollectionView, NSString, UISearchSuggestionItem;

@interface _UISearchSuggestionController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	BOOL _shouldDisplayDefaultSuggestion;
	id<_UISearchSuggestionControllerDelegate> _delegate;
	NSArray* _suggestions;
	UICollectionView* _collectionView;
	NSString* _suggestionCellIdentifier;
	UISearchSuggestionItem* _defaultSuggestion;
	NSString* _searchString;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSString * suggestionCellIdentifier;                                    //@synthesize suggestionCellIdentifier=_suggestionCellIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * suggestions;                                                    //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) UISearchSuggestionItem * defaultSuggestion;                             //@synthesize defaultSuggestion=_defaultSuggestion - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                                  //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic,__weak) id<_UISearchSuggestionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayDefaultSuggestion;                                    //@synthesize shouldDisplayDefaultSuggestion=_shouldDisplayDefaultSuggestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UISearchSuggestionControllerDelegate>)delegate;
-(void)setDelegate:(id<_UISearchSuggestionControllerDelegate>)arg1 ;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(UICollectionView *)collectionView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSString *)suggestionCellIdentifier;
-(BOOL)shouldDisplayDefaultSuggestion;
-(void)setDefaultSuggestion:(UISearchSuggestionItem *)arg1 ;
-(UISearchSuggestionItem *)defaultSuggestion;
-(void)updateCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)makeCollectionView;
-(void)updateSuggestions:(id)arg1 searchString:(id)arg2 ;
-(id)getSuggestions;
-(void)setShouldDisplayDefaultSuggestion:(BOOL)arg1 ;
-(void)setSuggestionCellIdentifier:(NSString *)arg1 ;
@end

