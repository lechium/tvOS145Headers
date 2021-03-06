/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupingResult.h>

@interface CHStrokeFastGroupingResult : CHStrokeGroupingResult {

	vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>* _fastGroupingClusters;

}

@property (nonatomic,readonly) vector<CHFastGroupingCluster fastGroupingClusters;              //@synthesize fastGroupingClusters=_fastGroupingClusters - In the implementation block
+(id)_strokeGroupsFromFastGroupingClusters:(const vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>*)arg1 clusteredStrokes:(id)arg2 strokeProvider:(id)arg3 strategyIdentifier:(id)arg4 clutterFilter:(id)arg5 ;
+(id)_strokeGroupFromSortedStrokeIdentifiers:(id)arg1 strokeProvider:(id)arg2 strategyIdentifier:(id)arg3 ;
+(id)_strokeGroupFromFastGroupingCluster:(const CHFastGroupingCluster*)arg1 strokeProvider:(id)arg2 strategyIdentifier:(id)arg3 ;
-(vector<CHFastGroupingCluster)fastGroupingClusters;
-(id)initWithFastGroupingClusters:(const vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>*)arg1 clusteredStrokes:(id)arg2 strokeProvider:(id)arg3 strategyIdentifier:(id)arg4 clutterFilter:(id)arg5 ;
@end

