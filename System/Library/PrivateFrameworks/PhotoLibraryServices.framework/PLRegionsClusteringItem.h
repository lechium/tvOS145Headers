/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSString;


@protocol PLRegionsClusteringItem <NSObject>
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@property (nonatomic,readonly) double pl_gpsHorizontalAccuracy; 
@property (nonatomic,readonly) NSDate * pl_date; 
@property (nonatomic,readonly) NSString * pl_uuid; 
@required
-(NSDate *)pl_date;
-(NSString *)pl_uuid;
-(double)pl_gpsHorizontalAccuracy;
-(CLLocationCoordinate2D)pl_coordinate;

@end

