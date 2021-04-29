/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/PPRecord.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSUUID, PPLocation, PPSource, NSArray, NSString, NSSet;

@interface PPLocationRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider> {

	NSUUID* _uuid;
	PPLocation* _location;
	PPSource* _source;
	unsigned char _algorithm;
	float _initialScore;
	float _decayRate;
	NSArray* _contextualNamedEntities;
	NSString* _extractionOsBuild;
	unsigned _extractionAssetVersion;
	char _bucketizedSentimentScore;
	BOOL _isAmbiguous;

}

@property (nonatomic,readonly) BOOL isAmbiguous;                               //@synthesize isAmbiguous=_isAmbiguous - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) PPLocation * location; 
@property (nonatomic,readonly) PPSource * source; 
@property (nonatomic,readonly) unsigned short algorithm; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) double decayRate; 
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) NSArray * contextualNamedEntities;              //@synthesize contextualNamedEntities=_contextualNamedEntities - In the implementation block
@property (nonatomic,readonly) NSString * extractionOsBuild;                   //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned extractionAssetVersion; 
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
+(id)describeAlgorithm:(unsigned short)arg1 ;
+(id)algorithmForName:(id)arg1 ;
+(id)sharedAmbiguousRecord;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PPSource *)source;
-(NSUUID *)uuid;
-(unsigned short)algorithm;
-(PPLocation *)location;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(double)decayRate;
-(double)sentimentScore;
-(BOOL)isAmbiguous;
-(double)initialScore;
-(NSString *)extractionOsBuild;
-(unsigned)extractionAssetVersion;
-(id)init_;
-(id)initAmbiguousRecord;
-(void)supplementFieldsWithClusterID:(id)arg1 locationWithLatLong:(id)arg2 ;
-(BOOL)isEqualToLocationRecord:(id)arg1 ;
-(NSArray *)contextualNamedEntities;
@end
