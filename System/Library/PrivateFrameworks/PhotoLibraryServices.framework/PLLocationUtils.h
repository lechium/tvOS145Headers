/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLLocationUtils : NSObject
+(BOOL)horizontalAccuracyIsCoarse:(double)arg1 ;
+(BOOL)canUseCoordinate:(CLLocationCoordinate2D)arg1 ;
+(CLLocationCoordinate2D)defaultLocationCoordinate2D;
+(id)predicateForAssetWithLocation;
+(id)predicateForMomentWithLocation;
+(BOOL)locationIsCoarse:(id)arg1 ;
+(PLCartesianCoordinate3D)cartesianCoordinateFromLatitude:(float)arg1 longitude:(float)arg2 ;
@end
