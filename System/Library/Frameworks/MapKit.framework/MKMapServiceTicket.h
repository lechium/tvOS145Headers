/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GEOMapServiceTraits, NSArray, GEOMapRegion, GEORelatedSearchSuggestion, NSString, NSError, GEOResolvedItem, GEODirectionIntent, GEOCategorySearchResultSection;


@protocol MKMapServiceTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSArray * exactMapItems; 
@property (nonatomic,readonly) NSArray * refinedMapItems; 
@property (nonatomic,readonly) GEOMapRegion * boundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSArray * relatedSearchSuggestions; 
@property (nonatomic,readonly) GEORelatedSearchSuggestion * defaultRelatedSuggestion; 
@property (nonatomic,readonly) NSArray * browseCategories; 
@property (nonatomic,readonly) int searchResultType; 
@property (nonatomic,readonly) NSString * resultDisplayHeader; 
@property (nonatomic,readonly) NSArray * displayHeaderSubstitutes; 
@property (nonatomic,readonly) BOOL shouldEnableRedoSearch; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolvedResult; 
@property (nonatomic,readonly) NSArray * retainedSearchMetadata; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,readonly) unsigned dymSuggestionVisibleTime; 
@property (nonatomic,readonly) BOOL showDymSuggestionCloseButton; 
@property (nonatomic,readonly) double requestResponseTime; 
@property (nonatomic,readonly) NSString * sectionHeader; 
@property (nonatomic,readonly) NSArray * searchResultSections; 
@property (nonatomic,readonly) GEOCategorySearchResultSection * categorySearchResultSection; 
@property (nonatomic,readonly) NSArray * relatedEntitySections; 
@property (nonatomic,readonly) NSArray * collectionResults; 
@property (nonatomic,readonly) NSArray * publisherResults; 
@required
-(NSError *)error;
-(void)cancel;
-(double)requestResponseTime;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(GEOCategorySearchResultSection *)categorySearchResultSection;
-(BOOL)isChainResultSet;
-(NSArray *)relatedSearchSuggestions;
-(NSArray *)relatedEntitySections;
-(NSString *)sectionHeader;
-(BOOL)shouldEnableRedoSearch;
-(NSString *)resultDisplayHeader;
-(GEODirectionIntent *)directionIntent;
-(GEOResolvedItem *)clientResolvedResult;
-(int)searchResultType;
-(NSArray *)displayHeaderSubstitutes;
-(unsigned)dymSuggestionVisibleTime;
-(BOOL)showDymSuggestionCloseButton;
-(NSArray *)searchResultSections;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(void)applyToCorrectedSearch:(id)arg1;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)applyToPlaceInfo:(id)arg1;
-(NSArray *)browseCategories;
-(GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
-(NSArray *)retainedSearchMetadata;
-(NSArray *)collectionResults;
-(NSArray *)publisherResults;
-(GEOMapRegion *)boundingRegion;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2 networkActivity:(/*^block*/id)arg3;
-(NSArray *)exactMapItems;
-(NSArray *)refinedMapItems;

@end

