/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGAssetFeatureExtractor.h>

@class PHFetchResult;

@interface PGFeatureExtractorFrequentPeople : PGAssetFeatureExtractor {

	unsigned long long _numberOfFrequentPeopleToExtract;
	PHFetchResult* _frequencySortedPersons;

}

@property (nonatomic,readonly) unsigned long long numberOfFrequentPeopleToExtract;              //@synthesize numberOfFrequentPeopleToExtract=_numberOfFrequentPeopleToExtract - In the implementation block
@property (nonatomic,retain) PHFetchResult * frequencySortedPersons;                            //@synthesize frequencySortedPersons=_frequencySortedPersons - In the implementation block
-(id)name;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(long long)featureLength;
-(id)initWithNumberOfFrequentPeopleToExtract:(unsigned long long)arg1 ;
-(unsigned long long)numberOfFrequentPeopleToExtract;
-(PHFetchResult *)frequencySortedPersons;
-(void)setFrequencySortedPersons:(PHFetchResult *)arg1 ;
@end

