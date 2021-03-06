/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPredicate, PGFeatureExtractor, NSString;

@interface PGFeatureValidator : NSObject {

	NSPredicate* _predicate;
	PGFeatureExtractor* _featureExtractor;
	NSString* _featureName;

}

@property (nonatomic,readonly) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) PGFeatureExtractor * featureExtractor;              //@synthesize featureExtractor=_featureExtractor - In the implementation block
@property (nonatomic,readonly) NSString * featureName;                             //@synthesize featureName=_featureName - In the implementation block
-(NSPredicate *)predicate;
-(NSString *)featureName;
-(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 ;
-(long long)isValidEntity:(id)arg1 error:(id*)arg2 ;
-(long long)featureValidatorType;
-(id)initWithPredicate:(id)arg1 featureExtractor:(id)arg2 featureName:(id)arg3 ;
-(PGFeatureExtractor *)featureExtractor;
-(long long)_isValidEntity:(id)arg1 featureExtractor:(id)arg2 error:(id*)arg3 ;
@end

