/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGFeatureExtractionSource.h>

@class NSString;

@interface PGFeatureExtractionSourceMomentShare : NSObject <PGFeatureExtractionSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)extractSharingRecordsWithManager:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)fetchMomentsOverlappingMomentShare:(id)arg1 inPhotoLibrary:(id)arg2 ;
@end

