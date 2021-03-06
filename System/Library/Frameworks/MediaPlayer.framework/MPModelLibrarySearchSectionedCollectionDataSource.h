/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@class NSArray, MPModelLibrarySearchRequest, NSString;

@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	NSArray* _resultContainers;
	MPModelLibrarySearchRequest* _request;

}

@property (nonatomic,copy,readonly) NSArray * resultContainers;                //@synthesize resultContainers=_resultContainers - In the implementation block
@property (nonatomic,copy) MPModelLibrarySearchRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPModelLibrarySearchRequest *)request;
-(void)setRequest:(MPModelLibrarySearchRequest *)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(BOOL)hasMoreResultsForSectionAtIndex:(long long)arg1 ;
-(long long)searchWeightForIndexPath:(id)arg1 ;
-(id)initWithEntitiesQueryResultContainers:(id)arg1 ;
-(NSArray *)resultContainers;
@end

