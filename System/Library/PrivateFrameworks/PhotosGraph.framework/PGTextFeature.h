/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PGTextFeature : NSObject {

	float _weight;
	NSString* _string;
	NSString* _originalString;
	unsigned long long _type;
	unsigned long long _origin;

}

@property (nonatomic,readonly) NSString * string;                      //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * originalString;              //@synthesize originalString=_originalString - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) float weight;                           //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) unsigned long long origin;              //@synthesize origin=_origin - In the implementation block
+(id)stringForFeatureType:(unsigned long long)arg1 ;
+(id)stringForFeatureOrigin:(unsigned long long)arg1 ;
+(id)textFeaturesFromNode:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4 ;
+(id)_stringToIndexFromTokens:(id)arg1 ;
+(id)textFeaturesFromString:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4 ;
+(id)_tokensFromString:(id)arg1 lemmatize:(BOOL)arg2 ;
+(id)textFeaturesFromString:(id)arg1 synonyms:(id)arg2 type:(unsigned long long)arg3 weight:(float)arg4 options:(unsigned long long)arg5 ;
+(id)_localizedNameForLocalizableNode:(id)arg1 ;
+(id)graphNamesForNode:(id)arg1 ;
+(id)mergedTextFeatureFromTextFeatures:(id)arg1 ;
+(id)vipTextFeatureTypes;
+(unsigned long long)_mostImportantTextFeatureTypeAmongTypes:(id)arg1 ;
-(id)description;
-(NSString *)string;
-(unsigned long long)type;
-(float)weight;
-(unsigned long long)origin;
-(NSString *)originalString;
-(id)initWithString:(id)arg1 originalString:(id)arg2 type:(unsigned long long)arg3 weight:(float)arg4 origin:(unsigned long long)arg5 ;
-(void)markAsStrippedOut;
@end

