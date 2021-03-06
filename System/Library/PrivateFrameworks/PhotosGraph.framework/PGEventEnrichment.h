/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PGEventEnrichment <NSObject>
@property (nonatomic,readonly) NSString * uuid; 
@property (readonly) BOOL isLongTrip; 
@property (readonly) BOOL isShortTrip; 
@property (readonly) BOOL isTrip; 
@property (readonly) BOOL isAggregation; 
@required
-(NSString *)uuid;
-(id)meaningLabels;
-(BOOL)isAggregation;
-(BOOL)isTrip;
-(BOOL)isLongTrip;
-(BOOL)isShortTrip;
-(id)momentNodes;
-(id)reliableMeaningLabels;
-(id)sortedMomentNodes;
-(id)birthdayPersonNode;
-(id)anniversaryPersonNode;
-(id)fetchAssetCollection;

@end

