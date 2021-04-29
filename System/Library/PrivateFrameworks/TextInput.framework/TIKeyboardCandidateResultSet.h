/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, TIKeyboardCandidate, NSDictionary, NSString, TIKeyboardIntermediateText;

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding> {

	BOOL _excludedExtensionCandidates;
	BOOL _inputManagerHasPendingCandidatesUpdate;
	NSArray* _candidates;
	unsigned long long _initialSelectedIndex;
	TIKeyboardCandidate* _defaultCandidate;
	NSArray* _sortMethods;
	NSDictionary* _sortMethodGroups;
	NSDictionary* _indexTitles;
	NSDictionary* _showExtensionCandidates;
	NSArray* _disambiguationCandidates;
	unsigned long long _generatedCandidateCount;
	unsigned long long _batchCandidateLocation;
	unsigned long long _selectedDisambiguationCandidateIndex;
	NSArray* _proactiveTriggers;
	NSString* _committedText;
	TIKeyboardIntermediateText* _uncommittedText;
	TIKeyboardCandidate* _acceptedCandidate;

}

@property (nonatomic,readonly) BOOL hasOnlySlottedCandidates; 
@property (nonatomic,readonly) BOOL hasOnlyCompletionCandidates; 
@property (nonatomic,readonly) unsigned long long slottedCandidatesCount; 
@property (nonatomic,retain) NSArray * initiallyHiddenCandidates; 
@property (assign,nonatomic) unsigned long long selectedHiddenCandidateIndex; 
@property (nonatomic,retain) NSArray * candidates;                                                 //@synthesize candidates=_candidates - In the implementation block
@property (assign,nonatomic) unsigned long long initialSelectedIndex;                              //@synthesize initialSelectedIndex=_initialSelectedIndex - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * defaultCandidate;                                 //@synthesize defaultCandidate=_defaultCandidate - In the implementation block
@property (nonatomic,retain) NSArray * sortMethods;                                                //@synthesize sortMethods=_sortMethods - In the implementation block
@property (nonatomic,retain) NSDictionary * sortMethodGroups;                                      //@synthesize sortMethodGroups=_sortMethodGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * indexTitles;                                           //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,retain) NSDictionary * showExtensionCandidates;                               //@synthesize showExtensionCandidates=_showExtensionCandidates - In the implementation block
@property (nonatomic,retain) NSArray * disambiguationCandidates;                                   //@synthesize disambiguationCandidates=_disambiguationCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long selectedDisambiguationCandidateIndex;              //@synthesize selectedDisambiguationCandidateIndex=_selectedDisambiguationCandidateIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasCandidates; 
@property (nonatomic,readonly) BOOL hasOnlyProactiveCandidates; 
@property (nonatomic,readonly) NSArray * proactiveTriggers;                                        //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidate * firstCandidate; 
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (assign,nonatomic) BOOL excludedExtensionCandidates;                                     //@synthesize excludedExtensionCandidates=_excludedExtensionCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long generatedCandidateCount;                           //@synthesize generatedCandidateCount=_generatedCandidateCount - In the implementation block
@property (assign,nonatomic) unsigned long long batchCandidateLocation;                            //@synthesize batchCandidateLocation=_batchCandidateLocation - In the implementation block
@property (nonatomic,readonly) BOOL isDummySet; 
@property (nonatomic,retain) NSString * committedText;                                             //@synthesize committedText=_committedText - In the implementation block
@property (nonatomic,retain) TIKeyboardIntermediateText * uncommittedText;                         //@synthesize uncommittedText=_uncommittedText - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * acceptedCandidate;                              //@synthesize acceptedCandidate=_acceptedCandidate - In the implementation block
@property (assign,nonatomic) BOOL inputManagerHasPendingCandidatesUpdate;                          //@synthesize inputManagerHasPendingCandidatesUpdate=_inputManagerHasPendingCandidatesUpdate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)setWithCandidates:(id)arg1 ;
+(id)setWithCandidates:(id)arg1 proactiveTriggers:(id)arg2 ;
+(id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 disambiguationCandidates:(id)arg8 selectedDisambiguationCandidateIndex:(unsigned long long)arg9 ;
+(id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 disambiguationCandidates:(id)arg8 selectedDisambiguationCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10 ;
+(id)dummySet;
+(id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 ;
+(id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10 ;
-(unsigned long long)slottedCandidatesCount;
-(BOOL)hasOnlySlottedCandidates;
-(BOOL)hasOnlyCompletionCandidates;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasMetadata;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(NSArray *)proactiveTriggers;
-(BOOL)hasCandidates;
-(BOOL)hasOnlyProactiveCandidates;
-(TIKeyboardCandidate *)firstCandidate;
-(BOOL)isDummySet;
-(unsigned long long)positionInCandidateList:(id)arg1 ;
-(id)initWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 disambiguationCandidates:(id)arg8 selectedDisambiguationCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10 ;
-(id)setByAppendingSet:(id)arg1 ;
-(BOOL)isSubsetOf:(id)arg1 ;
-(unsigned long long)initialSelectedIndex;
-(void)setInitialSelectedIndex:(unsigned long long)arg1 ;
-(TIKeyboardCandidate *)defaultCandidate;
-(void)setDefaultCandidate:(TIKeyboardCandidate *)arg1 ;
-(NSArray *)sortMethods;
-(void)setSortMethods:(NSArray *)arg1 ;
-(NSDictionary *)sortMethodGroups;
-(void)setSortMethodGroups:(NSDictionary *)arg1 ;
-(NSDictionary *)indexTitles;
-(void)setIndexTitles:(NSDictionary *)arg1 ;
-(NSDictionary *)showExtensionCandidates;
-(void)setShowExtensionCandidates:(NSDictionary *)arg1 ;
-(NSArray *)disambiguationCandidates;
-(void)setDisambiguationCandidates:(NSArray *)arg1 ;
-(unsigned long long)generatedCandidateCount;
-(void)setGeneratedCandidateCount:(unsigned long long)arg1 ;
-(unsigned long long)batchCandidateLocation;
-(void)setBatchCandidateLocation:(unsigned long long)arg1 ;
-(unsigned long long)selectedDisambiguationCandidateIndex;
-(void)setSelectedDisambiguationCandidateIndex:(unsigned long long)arg1 ;
-(BOOL)excludedExtensionCandidates;
-(void)setExcludedExtensionCandidates:(BOOL)arg1 ;
-(NSString *)committedText;
-(void)setCommittedText:(NSString *)arg1 ;
-(TIKeyboardIntermediateText *)uncommittedText;
-(void)setUncommittedText:(TIKeyboardIntermediateText *)arg1 ;
-(TIKeyboardCandidate *)acceptedCandidate;
-(void)setAcceptedCandidate:(TIKeyboardCandidate *)arg1 ;
-(BOOL)inputManagerHasPendingCandidatesUpdate;
-(void)setInputManagerHasPendingCandidatesUpdate:(BOOL)arg1 ;
-(NSArray *)initiallyHiddenCandidates;
-(void)setInitiallyHiddenCandidates:(NSArray *)arg1 ;
-(unsigned long long)selectedHiddenCandidateIndex;
-(void)setSelectedHiddenCandidateIndex:(unsigned long long)arg1 ;
@end

