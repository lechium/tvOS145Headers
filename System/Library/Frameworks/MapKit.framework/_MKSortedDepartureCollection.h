/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableSet;

@interface _MKSortedDepartureCollection : NSObject {

	NSMutableArray* _sortedDepartures;
	NSMutableSet* _groupedSequences;

}

@property (nonatomic,retain) NSMutableArray * sortedDepartures;              //@synthesize sortedDepartures=_sortedDepartures - In the implementation block
@property (nonatomic,retain) NSMutableSet * groupedSequences;                //@synthesize groupedSequences=_groupedSequences - In the implementation block
-(NSMutableArray *)sortedDepartures;
-(void)setSortedDepartures:(NSMutableArray *)arg1 ;
-(NSMutableSet *)groupedSequences;
-(void)setGroupedSequences:(NSMutableSet *)arg1 ;
@end

