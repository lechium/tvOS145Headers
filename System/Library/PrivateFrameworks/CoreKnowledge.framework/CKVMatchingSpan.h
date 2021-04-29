/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreKnowledge/CoreKnowledge-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class USOGraph, NSString;

@interface CKVMatchingSpan : NSObject <NSSecureCoding, NSCopying> {

	float _score;
	unsigned _priorOrdinality;
	float _priorScore;
	float _matchScore;
	USOGraph* _ontologyGraph;
	NSString* _ontologyLabel;
	NSString* _semanticValue;
	unsigned long long _beginIndex;
	unsigned long long _endIndex;
	NSString* _itemId;
	NSString* _originAppId;

}

@property (nonatomic,readonly) unsigned priorOrdinality;                   //@synthesize priorOrdinality=_priorOrdinality - In the implementation block
@property (nonatomic,readonly) float priorScore;                           //@synthesize priorScore=_priorScore - In the implementation block
@property (nonatomic,readonly) float matchScore;                           //@synthesize matchScore=_matchScore - In the implementation block
@property (nonatomic,readonly) USOGraph * ontologyGraph;                   //@synthesize ontologyGraph=_ontologyGraph - In the implementation block
@property (nonatomic,readonly) NSString * ontologyLabel;                   //@synthesize ontologyLabel=_ontologyLabel - In the implementation block
@property (nonatomic,readonly) NSString * semanticValue;                   //@synthesize semanticValue=_semanticValue - In the implementation block
@property (nonatomic,readonly) unsigned long long beginIndex;              //@synthesize beginIndex=_beginIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long endIndex;                //@synthesize endIndex=_endIndex - In the implementation block
@property (nonatomic,readonly) NSString * itemId;                          //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,readonly) NSString * originAppId;                     //@synthesize originAppId=_originAppId - In the implementation block
@property (nonatomic,readonly) float score;                                //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)matchingSpanFromSpanMatch:(id)arg1 withMetadata:(id)arg2 score:(float)arg3 ;
+(id)matchingSpanFromSpanMatch:(id)arg1 withMetadata:(id)arg2 score:(float)arg3 priorInfo:(id)arg4 ;
+(BOOL)_isEqualUSOGraph:(id)arg1 compareTo:(id)arg2 ;
+(BOOL)_isEqualUSOGraphNodes:(vector<std::__1::reference_wrapper<siri::ontology::UsoGraphNode>, std::__1::allocator<std::__1::reference_wrapper<siri::ontology::UsoGraphNode>>>*)arg1 compareTo:(vector<std::__1::reference_wrapper<siri::ontology::UsoGraphNode>, std::__1::allocator<std::__1::reference_wrapper<siri::ontology::UsoGraphNode>>>*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)score;
-(unsigned long long)beginIndex;
-(unsigned long long)endIndex;
-(NSString *)itemId;
-(NSString *)semanticValue;
-(NSString *)originAppId;
-(NSString *)ontologyLabel;
-(float)matchScore;
-(id)initWithOntologyGraph:(id)arg1 ontologyLabel:(id)arg2 semanticValue:(id)arg3 beginIndex:(unsigned long long)arg4 endIndex:(unsigned long long)arg5 itemId:(id)arg6 originAppId:(id)arg7 score:(float)arg8 matchScore:(float)arg9 priorOrdinality:(unsigned)arg10 priorScore:(float)arg11 ;
-(BOOL)isEqualToMatchingSpan:(id)arg1 ;
-(USOGraph *)ontologyGraph;
-(unsigned)priorOrdinality;
-(float)priorScore;
@end

