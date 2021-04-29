/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFSearchSuggestion.h>
@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSData;


@protocol SFSearchSuggestion <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * suggestion; 
@property (nonatomic,copy) NSString * query; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSArray * duplicateSuggestions; 
@property (nonatomic,copy) NSString * topicIdentifier; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (assign,nonatomic) BOOL previouslyEngaged; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,copy) NSString * scopedSearchApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * utteranceText; 
@property (nonatomic,copy) NSString * detailText; 
@property (nonatomic,copy) NSMutableDictionary * serverFeatures; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(int)arg1;
-(NSString *)query;
-(int)type;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(double)score;
-(void)setQuery:(id)arg1;
-(void)setBundleIdentifier:(id)arg1;
-(void)setScore:(double)arg1;
-(NSData *)jsonData;
-(NSString *)detailText;
-(void)setDetailText:(id)arg1;
-(void)setSuggestion:(id)arg1;
-(NSString *)suggestion;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(id)arg1;
-(NSString *)topicIdentifier;
-(void)setTopicIdentifier:(id)arg1;
-(BOOL)previouslyEngaged;
-(void)setPreviouslyEngaged:(BOOL)arg1;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(NSString *)scopedSearchApplicationBundleIdentifier;
-(void)setScopedSearchApplicationBundleIdentifier:(id)arg1;
-(NSString *)utteranceText;
-(void)setUtteranceText:(id)arg1;
-(NSMutableDictionary *)serverFeatures;
-(void)setServerFeatures:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSData;

@interface SFSearchSuggestion : NSObject <SFSearchSuggestion, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	BOOL _previouslyEngaged;
	int _type;
	NSString* _identifier;
	NSString* _suggestion;
	NSString* _query;
	double _score;
	NSArray* _duplicateSuggestions;
	NSString* _topicIdentifier;
	NSString* _bundleIdentifier;
	NSString* _fbr;
	NSString* _scopedSearchApplicationBundleIdentifier;
	NSString* _utteranceText;
	NSString* _detailText;
	NSMutableDictionary* _serverFeatures;

}

@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * suggestion;                                           //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy) NSString * query;                                                //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) double score;                                                  //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) int type;                                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * duplicateSuggestions;                                  //@synthesize duplicateSuggestions=_duplicateSuggestions - In the implementation block
@property (nonatomic,copy) NSString * topicIdentifier;                                      //@synthesize topicIdentifier=_topicIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL previouslyEngaged;                                        //@synthesize previouslyEngaged=_previouslyEngaged - In the implementation block
@property (nonatomic,copy) NSString * fbr;                                                  //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,copy) NSString * scopedSearchApplicationBundleIdentifier;              //@synthesize scopedSearchApplicationBundleIdentifier=_scopedSearchApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * utteranceText;                                        //@synthesize utteranceText=_utteranceText - In the implementation block
@property (nonatomic,copy) NSString * detailText;                                           //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * serverFeatures;                            //@synthesize serverFeatures=_serverFeatures - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)query;
-(int)type;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(double)score;
-(void)setQuery:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasType;
-(void)setScore:(double)arg1 ;
-(BOOL)hasScore;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(void)setSuggestion:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(int)arg5 ;
-(id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 type:(int)arg4 ;
-(NSString *)suggestion;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(NSArray *)arg1 ;
-(NSString *)topicIdentifier;
-(void)setTopicIdentifier:(NSString *)arg1 ;
-(BOOL)previouslyEngaged;
-(void)setPreviouslyEngaged:(BOOL)arg1 ;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(NSString *)scopedSearchApplicationBundleIdentifier;
-(void)setScopedSearchApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)utteranceText;
-(void)setUtteranceText:(NSString *)arg1 ;
-(NSMutableDictionary *)serverFeatures;
-(void)setServerFeatures:(NSMutableDictionary *)arg1 ;
-(BOOL)hasPreviouslyEngaged;
@end

