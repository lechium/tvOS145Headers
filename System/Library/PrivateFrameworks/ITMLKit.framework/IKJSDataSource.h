/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSDataObservable.h>
#import <libobjc.A.dylib/IKJSDataSource.h>

@protocol IKJSDataSource <JSExport>
@property (nonatomic,readonly) long long length; 
@property (nonatomic,readonly) long long segmentSize; 
@required
+(id)makeDataSource:(id)arg1 :(id)arg2 :(long long)arg3;
-(long long)length;
-(id)item:(long long)arg1;
-(void)update:(id)arg1 :(id)arg2 :(long long)arg3;
-(void)insert:(long long)arg1 :(id)arg2 :(id)arg3;
-(id)delete:(long long)arg1 :(long long)arg2;
-(id)replace:(long long)arg1 :(id)arg2;
-(void)move:(long long)arg1 :(long long)arg2 :(long long)arg3 :(id)arg4;
-(long long)segmentSize;

@end

#import <libobjc.A.dylib/_IKJSDataSourceProxy.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface IKJSDataSource : IKJSDataObservable <IKJSDataSource, _IKJSDataSourceProxy> {

	BOOL _dataSourceViewsDirty;
	long long _segmentSize;
	NSDictionary* _indexTitles;
	NSMutableArray* _dataSourceViewPointers;
	NSMutableDictionary* _loadIndexesRequestsBySegmentIndex;
	NSMutableIndexSet* _loadedSegmentIndexes;

}

@property (nonatomic,readonly) NSMutableArray * dataSourceViewPointers;                              //@synthesize dataSourceViewPointers=_dataSourceViewPointers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * loadIndexesRequestsBySegmentIndex;              //@synthesize loadIndexesRequestsBySegmentIndex=_loadIndexesRequestsBySegmentIndex - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * loadedSegmentIndexes;                             //@synthesize loadedSegmentIndexes=_loadedSegmentIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * indexTitles;                                      //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,readonly) long long length; 
@property (nonatomic,readonly) long long segmentSize;                                                //@synthesize segmentSize=_segmentSize - In the implementation block
+(id)makeDataSource:(id)arg1 :(id)arg2 :(long long)arg3 ;
+(id)jsExportedProperties;
+(id)_titlesByIndexFromValue:(id)arg1 ;
-(long long)length;
-(id)initWithItems:(id)arg1 ;
-(NSDictionary *)indexTitles;
-(id)item:(long long)arg1 ;
-(id)extraInfoForChangeInPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2 ;
-(void)update:(id)arg1 :(id)arg2 :(long long)arg3 ;
-(void)insert:(long long)arg1 :(id)arg2 :(id)arg3 ;
-(id)delete:(long long)arg1 :(long long)arg2 ;
-(id)replace:(long long)arg1 :(id)arg2 ;
-(void)move:(long long)arg1 :(long long)arg2 :(long long)arg3 :(id)arg4 ;
-(long long)segmentSize;
-(id)boxedItem:(long long)arg1 ;
-(id)initWithItems:(id)arg1 indexTitles:(id)arg2 ;
-(id)initWithItems:(id)arg1 indexTitles:(id)arg2 segmentSize:(long long)arg3 ;
-(void)_resetLoadedSegments;
-(void)_resetUsedIndexesAndMigrateItems:(id)arg1 ;
-(id)_spliceAtIndex:(long long)arg1 deleteCount:(long long)arg2 insertions:(id)arg3 ;
-(void)_updateTitlesFromIndex:(long long)arg1 deleteCount:(long long)arg2 insertionCount:(long long)arg3 title:(id)arg4 ;
-(long long)_segmentIndexForItemIndex:(long long)arg1 ;
-(void)_didAdjustSegmentIndexesFromIndex:(long long)arg1 ;
-(NSMutableArray *)dataSourceViewPointers;
-(void)markDataSourceViewsUpdated;
-(void)_loadUsedIndexes;
-(NSMutableDictionary *)loadIndexesRequestsBySegmentIndex;
-(NSMutableIndexSet *)loadedSegmentIndexes;
-(id)_dataSourceViews;
-(id)asPrivateIKJSDataSource;
-(id)valuesForSubscripts:(NSRange)arg1 boxed:(BOOL)arg2 ;
-(void)addDataSourceView:(id)arg1 ;
-(void)removeDataSourceView:(id)arg1 ;
@end

