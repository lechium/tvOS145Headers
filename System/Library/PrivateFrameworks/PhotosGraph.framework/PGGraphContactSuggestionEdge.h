/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@class NSString;

@interface PGGraphContactSuggestionEdge : PGGraphOptimizedEdge {

	unsigned long long _sexMatch;
	BOOL _contactFaceprintMatch;
	float _weight;
	double _contactScore;
	unsigned long long _numberOfMomentsAtHome;
	unsigned long long _numberOfMomentsAtMentionedAddress;
	unsigned long long _numberOfWeakBirthdayMomentsAroundBirthdayDate;
	unsigned long long _numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
	unsigned long long _numberOfMomentsOverlappingWithCalendarEvents;
	unsigned long long _numberOfAppearancesInSharedAssets;
	unsigned long long _numberOfCMMMoments;
	double _facetimeFaceprintConfidence;
	NSString* _relationshipsDebug;
	double _socialGroupsConfidence;
	NSString* _socialGroupsDebug;
	NSString* _messageGroupsDebug;
	double _birthdayScore;
	double _potentialBirthdayScore;
	double _addressScore;
	double _mentionedAddressScore;
	double _calendarScore;
	double _sharedAssetScore;
	double _sharedCMMScore;
	double _relationshipScore;
	double _scoreAfterMessagePenalty;

}

@property (nonatomic,readonly) double contactScore;                                                                    //@synthesize contactScore=_contactScore - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMomentsAtHome;                                               //@synthesize numberOfMomentsAtHome=_numberOfMomentsAtHome - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMomentsAtMentionedAddress;                                   //@synthesize numberOfMomentsAtMentionedAddress=_numberOfMomentsAtMentionedAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfWeakBirthdayMomentsAroundBirthdayDate;                       //@synthesize numberOfWeakBirthdayMomentsAroundBirthdayDate=_numberOfWeakBirthdayMomentsAroundBirthdayDate - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;              //@synthesize numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate=_numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMomentsOverlappingWithCalendarEvents;                        //@synthesize numberOfMomentsOverlappingWithCalendarEvents=_numberOfMomentsOverlappingWithCalendarEvents - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAppearancesInSharedAssets;                                   //@synthesize numberOfAppearancesInSharedAssets=_numberOfAppearancesInSharedAssets - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCMMMoments;                                                  //@synthesize numberOfCMMMoments=_numberOfCMMMoments - In the implementation block
@property (nonatomic,readonly) double facetimeFaceprintConfidence;                                                     //@synthesize facetimeFaceprintConfidence=_facetimeFaceprintConfidence - In the implementation block
@property (nonatomic,readonly) BOOL contactFaceprintMatch;                                                             //@synthesize contactFaceprintMatch=_contactFaceprintMatch - In the implementation block
@property (nonatomic,readonly) NSString * relationshipsDebug;                                                          //@synthesize relationshipsDebug=_relationshipsDebug - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMatchedRelationships; 
@property (nonatomic,readonly) unsigned long long numberOfMatchedMessageGroups; 
@property (nonatomic,readonly) double socialGroupsConfidence;                                                          //@synthesize socialGroupsConfidence=_socialGroupsConfidence - In the implementation block
@property (nonatomic,readonly) NSString * socialGroupsDebug;                                                           //@synthesize socialGroupsDebug=_socialGroupsDebug - In the implementation block
@property (nonatomic,readonly) NSString * messageGroupsDebug;                                                          //@synthesize messageGroupsDebug=_messageGroupsDebug - In the implementation block
@property (nonatomic,readonly) BOOL personContactBiologicalSexMatch; 
@property (nonatomic,readonly) BOOL personContactBiologicalSexMismatch; 
@property (nonatomic,readonly) double birthdayScore;                                                                   //@synthesize birthdayScore=_birthdayScore - In the implementation block
@property (nonatomic,readonly) double potentialBirthdayScore;                                                          //@synthesize potentialBirthdayScore=_potentialBirthdayScore - In the implementation block
@property (nonatomic,readonly) double addressScore;                                                                    //@synthesize addressScore=_addressScore - In the implementation block
@property (nonatomic,readonly) double mentionedAddressScore;                                                           //@synthesize mentionedAddressScore=_mentionedAddressScore - In the implementation block
@property (nonatomic,readonly) double calendarScore;                                                                   //@synthesize calendarScore=_calendarScore - In the implementation block
@property (nonatomic,readonly) double sharedAssetScore;                                                                //@synthesize sharedAssetScore=_sharedAssetScore - In the implementation block
@property (nonatomic,readonly) double sharedCMMScore;                                                                  //@synthesize sharedCMMScore=_sharedCMMScore - In the implementation block
@property (nonatomic,readonly) double relationshipScore;                                                               //@synthesize relationshipScore=_relationshipScore - In the implementation block
@property (nonatomic,readonly) double scoreAfterMessagePenalty;                                                        //@synthesize scoreAfterMessagePenalty=_scoreAfterMessagePenalty - In the implementation block
@property (readonly) double confidence; 
@property (readonly) BOOL isHighConfidence; 
-(unsigned short)domain;
-(double)confidence;
-(id)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(void)setLocalProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)edgeDescription;
-(unsigned long long)numberOfMomentsAtHome;
-(double)relationshipScore;
-(unsigned long long)numberOfWeakBirthdayMomentsAroundBirthdayDate;
-(unsigned long long)numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
-(unsigned long long)numberOfMomentsAtMentionedAddress;
-(unsigned long long)numberOfMomentsOverlappingWithCalendarEvents;
-(unsigned long long)numberOfAppearancesInSharedAssets;
-(BOOL)contactFaceprintMatch;
-(unsigned long long)numberOfMatchedRelationships;
-(double)birthdayScore;
-(double)potentialBirthdayScore;
-(double)addressScore;
-(double)mentionedAddressScore;
-(double)calendarScore;
-(double)sharedAssetScore;
-(double)sharedCMMScore;
-(double)scoreAfterMessagePenalty;
-(id)initFromPersonNode:(id)arg1 toContactNode:(id)arg2 weight:(float)arg3 ;
-(id)_stringForBiologicalSexMatch:(unsigned long long)arg1 ;
-(BOOL)isFilteredOut;
-(BOOL)isHighConfidence;
-(unsigned long long)numberOfMatchedMessageGroups;
-(BOOL)personContactBiologicalSexMatch;
-(BOOL)personContactBiologicalSexMismatch;
-(id)_readableStringForContactSuggestionProperty:(id)arg1 ;
-(double)contactScore;
-(unsigned long long)numberOfCMMMoments;
-(double)facetimeFaceprintConfidence;
-(NSString *)relationshipsDebug;
-(double)socialGroupsConfidence;
-(NSString *)socialGroupsDebug;
-(NSString *)messageGroupsDebug;
@end
