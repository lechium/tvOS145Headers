/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSSet, PGGraph, NSArray, NSMutableDictionary;

@interface PGGraphNamingProcessor : NSObject {

	unsigned long long _runOptions;
	NSMutableArray* _analyzersToRun;
	NSSet* _personNodesToName;
	NSSet* _momentNodes;
	PGGraph* _graph;
	NSArray* _sortedPoolOfContactIdentifiers;
	NSMutableDictionary* _contactMatchesByPersonLocalIdentifier;
	NSMutableDictionary* _selectedContactMatchesByPersonLocalIdentifier;
	NSMutableDictionary* _filteredOutContactMatchesByPersonLocalIdentifier;
	unsigned long long _numberOfSignals;

}

@property (nonatomic,readonly) unsigned long long runOptions;                                                     //@synthesize runOptions=_runOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * analyzersToRun;                                                     //@synthesize analyzersToRun=_analyzersToRun - In the implementation block
@property (nonatomic,readonly) NSSet * personNodesToName;                                                         //@synthesize personNodesToName=_personNodesToName - In the implementation block
@property (nonatomic,readonly) NSSet * momentNodes;                                                               //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,readonly) PGGraph * graph;                                                                   //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSignals;                                                //@synthesize numberOfSignals=_numberOfSignals - In the implementation block
@property (nonatomic,retain) NSArray * sortedPoolOfContactIdentifiers;                                            //@synthesize sortedPoolOfContactIdentifiers=_sortedPoolOfContactIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contactMatchesByPersonLocalIdentifier;                         //@synthesize contactMatchesByPersonLocalIdentifier=_contactMatchesByPersonLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * selectedContactMatchesByPersonLocalIdentifier;                 //@synthesize selectedContactMatchesByPersonLocalIdentifier=_selectedContactMatchesByPersonLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filteredOutContactMatchesByPersonLocalIdentifier;              //@synthesize filteredOutContactMatchesByPersonLocalIdentifier=_filteredOutContactMatchesByPersonLocalIdentifier - In the implementation block
-(PGGraph *)graph;
-(NSSet *)momentNodes;
-(id)initWithPersonNodes:(id)arg1 runOptions:(unsigned long long)arg2 ;
-(void)runNamingAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)contactMatchesByPersonLocalIdentifier;
-(void)enumerateContactSuggestionsForPersonNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_extractSignalsFromRunOptions;
-(id)_extractSortedPoolOfContactIdentifiers;
-(void)filterContactMatches;
-(void)_limitNumberOfContactSuggestionsPerPerson;
-(void)_removeSuggestionOfContact:(id)arg1 forPerson:(id)arg2 ;
-(id)_applyMessageFrequencyPenaltyToMatchScores:(id)arg1 ;
-(id)_personMatchScoresByContactIdentifierFromMatchProperties:(id)arg1 ;
-(id)_swapPersonAndContactIdentifiersFromMatchesByContactIdentifier:(id)arg1 ;
-(id)matchPropertiesBetweenContactIdentifier:(id)arg1 andPersonLocalIdentifier:(id)arg2 ;
-(id)personNodesToNameFromPersonNodes:(id)arg1 ;
-(unsigned long long)runOptions;
-(NSMutableArray *)analyzersToRun;
-(void)setAnalyzersToRun:(NSMutableArray *)arg1 ;
-(NSSet *)personNodesToName;
-(NSArray *)sortedPoolOfContactIdentifiers;
-(void)setSortedPoolOfContactIdentifiers:(NSArray *)arg1 ;
-(void)setContactMatchesByPersonLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)selectedContactMatchesByPersonLocalIdentifier;
-(void)setSelectedContactMatchesByPersonLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)filteredOutContactMatchesByPersonLocalIdentifier;
-(void)setFilteredOutContactMatchesByPersonLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(unsigned long long)numberOfSignals;
@end

