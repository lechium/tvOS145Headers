/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOClientRankingModelFeatureIdentifier.h>

@interface GEOClientRankingModelFeatureSourceIdentifier : GEOClientRankingModelFeatureIdentifier {

	long long _sourceType;
	int _suggestionType;
	int _serverEntryType;

}

@property (nonatomic,readonly) long long sourceType;              //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) int suggestionType;                //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,readonly) int serverEntryType;               //@synthesize serverEntryType=_serverEntryType - In the implementation block
-(id)init;
-(long long)sourceType;
-(int)suggestionType;
-(int)serverEntryType;
-(long long)featureIdentifierType;
-(id)initWithSuggestionType:(int)arg1 serverEntryType:(int)arg2 sourceType:(long long)arg3 ;
@end

