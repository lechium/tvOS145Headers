/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraph.h>

@interface PGFeatureVector : PGGraph
+(id)_imprecisePostalAddressFromPlacemark:(id)arg1 ;
+(id)_personForName:(id)arg1 ;
+(id)featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 ;
+(id)featureVectorWithLocalDate:(id)arg1 impreciseLocation:(id)arg2 peopleNames:(id)arg3 ;
+(id)_featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 useImpreciseLocation:(BOOL)arg4 ;
+(id)featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleUUIDs:(id)arg3 inPhotoLibrary:(id)arg4 ;
+(id)_featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleClues:(id)arg3 useImpreciseLocation:(BOOL)arg4 ;
+(id)featureVectorWithCalendarEvent:(id)arg1 ;
+(id)featureVectorWithCalendarEvent:(id)arg1 requiresLocation:(BOOL)arg2 requiresPeople:(BOOL)arg3 ;
@end

