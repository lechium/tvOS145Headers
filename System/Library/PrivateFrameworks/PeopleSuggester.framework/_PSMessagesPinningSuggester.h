/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class NSXPCConnection, _CDInteractionStore, NSDictionary, NSString;

@interface _PSMessagesPinningSuggester : NSObject {

	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;
	BOOL _boostGroups;
	BOOL _outgoingOnly;
	BOOL _boostIndividualFavorites;
	_CDInteractionStore* _interactionStore;
	NSDictionary* _psMessagesPinningConfig;
	double _regularityThreshold;
	double _intensityThreshold;
	double _regularityWeight;
	double _intensityWeight;
	long long _minimalInteractions;
	long long _minimalUniqueDaysInteracted;
	double _lookbackWindow;
	NSString* _configVersion;

}

@property (retain) NSDictionary * psMessagesPinningConfig;                        //@synthesize psMessagesPinningConfig=_psMessagesPinningConfig - In the implementation block
@property (assign,nonatomic) double regularityThreshold;                          //@synthesize regularityThreshold=_regularityThreshold - In the implementation block
@property (assign,nonatomic) double intensityThreshold;                           //@synthesize intensityThreshold=_intensityThreshold - In the implementation block
@property (assign,nonatomic) double regularityWeight;                             //@synthesize regularityWeight=_regularityWeight - In the implementation block
@property (assign,nonatomic) double intensityWeight;                              //@synthesize intensityWeight=_intensityWeight - In the implementation block
@property (assign,nonatomic) long long minimalInteractions;                       //@synthesize minimalInteractions=_minimalInteractions - In the implementation block
@property (assign,nonatomic) long long minimalUniqueDaysInteracted;               //@synthesize minimalUniqueDaysInteracted=_minimalUniqueDaysInteracted - In the implementation block
@property (assign,nonatomic) double lookbackWindow;                               //@synthesize lookbackWindow=_lookbackWindow - In the implementation block
@property (assign,nonatomic) BOOL boostGroups;                                    //@synthesize boostGroups=_boostGroups - In the implementation block
@property (assign,nonatomic) BOOL outgoingOnly;                                   //@synthesize outgoingOnly=_outgoingOnly - In the implementation block
@property (assign,nonatomic) BOOL boostIndividualFavorites;                       //@synthesize boostIndividualFavorites=_boostIndividualFavorites - In the implementation block
@property (nonatomic,retain) NSString * configVersion;                            //@synthesize configVersion=_configVersion - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
-(id)init;
-(_CDInteractionStore *)interactionStore;
-(void)provideMessagesPinningFeedback:(id)arg1 ;
-(void)setConfigVersion:(NSString *)arg1 ;
-(NSString *)configVersion;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(BOOL)loadPSConfig:(id)arg1 ;
-(void)updateModelProperties:(id)arg1 ;
-(void)setBoostGroups:(BOOL)arg1 ;
-(void)setOutgoingOnly:(BOOL)arg1 ;
-(void)setBoostIndividualFavorites:(BOOL)arg1 ;
-(id)initWithRegularityThreshold:(double)arg1 intensityThreshold:(double)arg2 regularityWeight:(double)arg3 intensityWeight:(double)arg4 minimalInteration:(long long)arg5 minimalUniqueDaysInteracted:(long long)arg6 interactionStore:(id)arg7 lookbackWindow:(double)arg8 outgoingOnly:(BOOL)arg9 ;
-(id)chatGuidsForPinningHeuristicApproachWithMaxSuggestions:(long long)arg1 forReferenceDate:(id)arg2 ;
-(id)chatGuidsBasedOnRegularityAndIntensityWithMaxSuggestions:(long long)arg1 referenceDate:(id)arg2 minimumDaysOfHistory:(long long)arg3 maxInteractionsForQuery:(long long)arg4 ;
-(void)setMinimalInteractions:(long long)arg1 ;
-(void)setMinimalUniqueDaysInteracted:(long long)arg1 ;
-(BOOL)outgoingOnly;
-(double)lookbackWindow;
-(long long)minimalInteractions;
-(long long)minimalUniqueDaysInteracted;
-(BOOL)boostIndividualFavorites;
-(double)regularityThreshold;
-(double)intensityThreshold;
-(double)regularityWeight;
-(double)intensityWeight;
-(BOOL)boostGroups;
-(void)submitMessagesPinningFeedback:(id)arg1 ;
-(id)getPayloadOfFeedback:(id)arg1 ;
-(id)initWithRegularityThreshold:(double)arg1 intensityThreshold:(double)arg2 regularityWeight:(double)arg3 intensityWeight:(double)arg4 minimalInteration:(long long)arg5 minimalUniqueDaysInteracted:(long long)arg6 interactionStore:(id)arg7 lookbackWindow:(double)arg8 ;
-(id)chatGuidsForMessagesPinningWithMaxSuggestions:(long long)arg1 ;
-(NSDictionary *)psMessagesPinningConfig;
-(void)setPsMessagesPinningConfig:(NSDictionary *)arg1 ;
-(void)setRegularityThreshold:(double)arg1 ;
-(void)setIntensityThreshold:(double)arg1 ;
-(void)setRegularityWeight:(double)arg1 ;
-(void)setIntensityWeight:(double)arg1 ;
-(void)setLookbackWindow:(double)arg1 ;
@end

