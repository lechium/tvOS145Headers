/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <TVMLKit/TVOneupViewDelegate.h>
#import <TVMLKit/TVOneupViewDataSource.h>

@class _TVOneupView, IKViewElement, NSArray, IKAudioElement, NSMutableDictionary, NSString;

@interface _TVOneupTemplateController : UIViewController <TVOneupViewDelegate, TVOneupViewDataSource> {

	BOOL _requiresReload;
	unsigned long long _transition;
	_TVOneupView* _oneupView;
	IKViewElement* _oneupElement;
	NSArray* _sections;
	long long _totalNumberOfItems;
	long long _focusedFlattenedIndex;
	NSArray* _modes;
	IKAudioElement* _audioElement;
	NSMutableDictionary* _imageProxies;
	unsigned long long _indexToConfigure;
	/*^block*/id _indexMapBlock;

}

@property (nonatomic,retain) IKViewElement * oneupElement;                          //@synthesize oneupElement=_oneupElement - In the implementation block
@property (assign,nonatomic,__weak) _TVOneupView * oneupView;                       //@synthesize oneupView=_oneupView - In the implementation block
@property (nonatomic,readonly) unsigned long long oneupViewTransition; 
@property (nonatomic,copy) NSArray * sections;                                      //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) long long totalNumberOfItems;                          //@synthesize totalNumberOfItems=_totalNumberOfItems - In the implementation block
@property (assign,nonatomic) long long focusedFlattenedIndex;                       //@synthesize focusedFlattenedIndex=_focusedFlattenedIndex - In the implementation block
@property (nonatomic,copy) NSArray * modes;                                         //@synthesize modes=_modes - In the implementation block
@property (nonatomic,retain) IKAudioElement * audioElement;                         //@synthesize audioElement=_audioElement - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageProxies;                    //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic) unsigned long long indexToConfigure;                   //@synthesize indexToConfigure=_indexToConfigure - In the implementation block
@property (assign,nonatomic) BOOL requiresReload;                                   //@synthesize requiresReload=_requiresReload - In the implementation block
@property (nonatomic,copy) id indexMapBlock;                                        //@synthesize indexMapBlock=_indexMapBlock - In the implementation block
@property (assign,nonatomic) unsigned long long transition;                         //@synthesize transition=_transition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_indexPathForItemAtFlattenedIndex:(long long)arg1 inSections:(id)arg2 ;
-(id)init;
-(NSArray *)modes;
-(NSArray *)sections;
-(unsigned long long)transition;
-(void)setSections:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(long long)totalNumberOfItems;
-(void)setTotalNumberOfItems:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setTransition:(unsigned long long)arg1 ;
-(id)initWithOneupElement:(id)arg1 ;
-(void)_updateWithViewElement:(id)arg1 update:(BOOL)arg2 ;
-(void)setFocusedFlattenedIndex:(long long)arg1 ;
-(_TVOneupView *)oneupView;
-(void)_prepareIndexesToLoad:(unsigned long long)arg1 ;
-(unsigned long long)oneupViewTransition;
-(void)setOneupView:(_TVOneupView *)arg1 ;
-(long long)focusedFlattenedIndex;
-(unsigned long long)_allowedModesFromModes:(id)arg1 ;
-(id)_sectionForIndex:(unsigned long long)arg1 itemIndexOut:(long long*)arg2 ;
-(NSMutableDictionary *)imageProxies;
-(id)_imageProxyForIndex:(unsigned long long)arg1 forCaching:(BOOL)arg2 ;
-(void)setIndexMapBlock:(id)arg1 ;
-(BOOL)_isElementUpdatedAtFlattenedIndex:(long long)arg1 ;
-(id)_imageElementAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexToConfigure;
-(void)_loadIndex:(unsigned long long)arg1 ;
-(void)_unloadIndex:(unsigned long long)arg1 ;
-(IKAudioElement *)audioElement;
-(void)_configureOneupView;
-(id)_imgElementFromLockup:(id)arg1 ;
-(void)setIndexToConfigure:(unsigned long long)arg1 ;
-(void)_configureView:(id)arg1 withImageElement:(id)arg2 andIndex:(unsigned long long)arg3 ;
-(void)_configureSupplementaryView:(id)arg1 withLockup:(id)arg2 ;
-(void)_dispatchEvent:(id)arg1 forItemAtFlattenedIndex:(unsigned long long)arg2 cell:(id)arg3 ;
-(void)setModes:(NSArray *)arg1 ;
-(void)setAudioElement:(IKAudioElement *)arg1 ;
-(BOOL)requiresReload;
-(id)indexMapBlock;
-(void)setOneupElement:(IKViewElement *)arg1 ;
-(void)_setTransitionAndModes:(id)arg1 ;
-(void)_setAudioElementIfAny:(id)arg1 ;
-(long long)_flattenedCountWithAutoHighlightIndex:(long long*)arg1 ;
-(id)_mapOldSectionsByNew:(id)arg1 addedIndexes:(id*)arg2 removedIndexes:(id*)arg3 sectionsMoved:(BOOL*)arg4 ;
-(void)_updateCachedIndexes:(/*^block*/id)arg1 ;
-(BOOL)_isReloadRequired:(id)arg1 addedSectionIndexes:(id)arg2 removedSectionIndexes:(id)arg3 sectionsMoved:(BOOL)arg4 ;
-(void)setRequiresReload:(BOOL)arg1 ;
-(void)oneupView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2 ;
-(void)oneupView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 ;
-(void)oneupView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2 ;
-(long long)numberOfItemsInOneupView:(id)arg1 ;
-(id)oneupView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 ;
-(long long)oneupView:(id)arg1 contentModeForItemAtIndex:(unsigned long long)arg2 ;
-(id)oneupView:(id)arg1 supplementaryViewForItemAtIndex:(unsigned long long)arg2 ;
-(void)updateWithOneElement:(id)arg1 ;
-(void)updateWithShowcaseLockupElements:(id)arg1 focusedIndex:(long long)arg2 update:(BOOL)arg3 ;
-(IKViewElement *)oneupElement;
-(void)setImageProxies:(NSMutableDictionary *)arg1 ;
@end

