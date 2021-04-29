/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUILibraryDataSource.h>

@class VUIMediaEntityFetchRequest, NSArray, NSDictionary;

@interface VUIMediaEntitiesDataSource : VUILibraryDataSource {

	BOOL _shouldFetchArtworkInfoDictionaries;
	VUIMediaEntityFetchRequest* _fetchRequest;
	NSArray* _mediaEntities;
	NSArray* _grouping;
	NSDictionary* _artworkInfoDictionaryByPurchaseID;

}

@property (nonatomic,retain) VUIMediaEntityFetchRequest * fetchRequest;                     //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) NSArray * mediaEntities;                                       //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,retain) NSArray * grouping;                                            //@synthesize grouping=_grouping - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchArtworkInfoDictionaries;                       //@synthesize shouldFetchArtworkInfoDictionaries=_shouldFetchArtworkInfoDictionaries - In the implementation block
@property (nonatomic,retain) NSDictionary * artworkInfoDictionaryByPurchaseID;              //@synthesize artworkInfoDictionaryByPurchaseID=_artworkInfoDictionaryByPurchaseID - In the implementation block
-(VUIMediaEntityFetchRequest *)fetchRequest;
-(id)initWithFetchRequest:(id)arg1 ;
-(void)setFetchRequest:(VUIMediaEntityFetchRequest *)arg1 ;
-(NSArray *)grouping;
-(void)setGrouping:(NSArray *)arg1 ;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(NSArray *)mediaEntities;
-(BOOL)shouldFetchArtworkInfoDictionaries;
-(void)setArtworkInfoDictionaryByPurchaseID:(NSDictionary *)arg1 ;
-(void)setShouldFetchArtworkInfoDictionaries:(BOOL)arg1 ;
-(NSDictionary *)artworkInfoDictionaryByPurchaseID;
@end
