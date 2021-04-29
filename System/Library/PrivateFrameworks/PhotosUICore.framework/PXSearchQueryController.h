/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXSearchQueryControllerProtocol.h>

@class PXSearchIndexManager, PSIDatabase, PXSearchQueryExecutor, PXSearchQuery, NSString;

@interface PXSearchQueryController : NSObject <PXSearchQueryControllerProtocol> {

	BOOL _isOpeningSearchIndex;
	BOOL _requestSceneAncestryInformation;
	PXSearchIndexManager* _searchIndexManager;
	/*^block*/id _resultsHandler;
	PSIDatabase* _searchIndex;
	PXSearchQueryExecutor* _searchQueryExecutor;
	PXSearchQuery* _currentSearchQuery;

}

@property (nonatomic,readonly) PXSearchIndexManager * searchIndexManager;              //@synthesize searchIndexManager=_searchIndexManager - In the implementation block
@property (nonatomic,readonly) id resultsHandler;                                      //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (nonatomic,retain) PSIDatabase * searchIndex;                                //@synthesize searchIndex=_searchIndex - In the implementation block
@property (nonatomic,retain) PXSearchQueryExecutor * searchQueryExecutor;              //@synthesize searchQueryExecutor=_searchQueryExecutor - In the implementation block
@property (nonatomic,retain) PXSearchQuery * currentSearchQuery;                       //@synthesize currentSearchQuery=_currentSearchQuery - In the implementation block
@property (assign,nonatomic) BOOL isOpeningSearchIndex;                                //@synthesize isOpeningSearchIndex=_isOpeningSearchIndex - In the implementation block
@property (nonatomic,readonly) BOOL requestSceneAncestryInformation;                   //@synthesize requestSceneAncestryInformation=_requestSceneAncestryInformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)resultsHandler;
-(PSIDatabase *)searchIndex;
-(void)setSearchIndex:(PSIDatabase *)arg1 ;
-(PXSearchIndexManager *)searchIndexManager;
-(id)initWithSearchIndexManager:(id)arg1 requestSceneAncestryInformation:(BOOL)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)setCurrentSearchQuery:(PXSearchQuery *)arg1 ;
-(PXSearchQuery *)currentSearchQuery;
-(BOOL)requestSceneAncestryInformation;
-(void)performSearch:(id)arg1 ;
-(void)_openSearchIndex;
-(void)_performSearch:(id)arg1 retry:(BOOL)arg2 ;
-(PXSearchQueryExecutor *)searchQueryExecutor;
-(void)setSearchQueryExecutor:(PXSearchQueryExecutor *)arg1 ;
-(BOOL)isOpeningSearchIndex;
-(void)setIsOpeningSearchIndex:(BOOL)arg1 ;
@end

