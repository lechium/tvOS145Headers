/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface CKRecordGraph : NSObject {

	NSMutableArray* _nodes;
	NSArray* _sortedRecords;

}

@property (nonatomic,retain) NSMutableArray * nodes;               //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,retain) NSArray * sortedRecords;              //@synthesize sortedRecords=_sortedRecords - In the implementation block
+(id)topologicallySortRecords:(id)arg1 withError:(id*)arg2 ;
-(id)description;
-(id)init;
-(NSMutableArray *)nodes;
-(void)setNodes:(NSMutableArray *)arg1 ;
-(void)setSortedRecords:(NSArray *)arg1 ;
-(NSArray *)sortedRecords;
-(BOOL)addRecords:(id)arg1 error:(id*)arg2 ;
-(id)recordsByTopologicalSortWithError:(id*)arg1 ;
@end

