/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPeopleSuggestionManagerDelegate, PXPeopleSuggestionManagerDataSource, PXPerson;
@class NSMutableSet, PXSuggestionToken, PXPeoplePagingSuggestionProvider, NSArray;

@interface PXPeopleSuggestionManager : NSObject {

	BOOL _mute;
	BOOL _didReachEnd;
	unsigned _confirmYesSoundID;
	unsigned _confirmNoSoundID;
	id<PXPeopleSuggestionManagerDelegate> _delegate;
	id<PXPeopleSuggestionManagerDataSource> _dataSource;
	id<PXPerson> _person;
	unsigned long long _userConfirmationsCount;
	unsigned long long _autoConfirmationsCount;
	NSMutableSet* _skippedSuggestions;
	PXSuggestionToken* _suggestionToken;
	PXPeoplePagingSuggestionProvider* _suggestionProvider;
	NSMutableSet* _confirmedSuggestions;
	NSMutableSet* _rejectedSuggestions;

}

@property (assign,nonatomic) BOOL didReachEnd;                                                   //@synthesize didReachEnd=_didReachEnd - In the implementation block
@property (nonatomic,retain) id<PXPerson> person;                                                //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) NSMutableSet * skippedSuggestions;                                  //@synthesize skippedSuggestions=_skippedSuggestions - In the implementation block
@property (nonatomic,retain) PXSuggestionToken * suggestionToken;                                //@synthesize suggestionToken=_suggestionToken - In the implementation block
@property (assign,nonatomic) unsigned long long userConfirmationsCount;                          //@synthesize userConfirmationsCount=_userConfirmationsCount - In the implementation block
@property (assign,nonatomic) unsigned long long autoConfirmationsCount;                          //@synthesize autoConfirmationsCount=_autoConfirmationsCount - In the implementation block
@property (assign,nonatomic) unsigned confirmYesSoundID;                                         //@synthesize confirmYesSoundID=_confirmYesSoundID - In the implementation block
@property (assign,nonatomic) unsigned confirmNoSoundID;                                          //@synthesize confirmNoSoundID=_confirmNoSoundID - In the implementation block
@property (nonatomic,retain) PXPeoplePagingSuggestionProvider * suggestionProvider;              //@synthesize suggestionProvider=_suggestionProvider - In the implementation block
@property (nonatomic,retain) NSMutableSet * confirmedSuggestions;                                //@synthesize confirmedSuggestions=_confirmedSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableSet * rejectedSuggestions;                                 //@synthesize rejectedSuggestions=_rejectedSuggestions - In the implementation block
@property (assign,nonatomic,__weak) id<PXPeopleSuggestionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<PXPeopleSuggestionManagerDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL mute;                                                          //@synthesize mute=_mute - In the implementation block
@property (nonatomic,readonly) NSArray * currentSuggestions; 
@property (nonatomic,readonly) BOOL canUndo; 
@property (nonatomic,readonly) BOOL isLoading; 
-(id)init;
-(void)dealloc;
-(id<PXPeopleSuggestionManagerDelegate>)delegate;
-(void)setDelegate:(id<PXPeopleSuggestionManagerDelegate>)arg1 ;
-(id<PXPerson>)person;
-(void)setPerson:(id<PXPerson>)arg1 ;
-(BOOL)canUndo;
-(void)undo;
-(id<PXPeopleSuggestionManagerDataSource>)dataSource;
-(BOOL)isLoading;
-(void)setDataSource:(id<PXPeopleSuggestionManagerDataSource>)arg1 ;
-(id)initWithPerson:(id)arg1 ;
-(BOOL)didReachEnd;
-(NSArray *)currentSuggestions;
-(void)preloadSounds;
-(void)requestNextSuggestion;
-(void)requestNextSuggestionsWithPageLimit:(unsigned long long)arg1 ;
-(BOOL)isSuggestionConfirmed:(id)arg1 ;
-(void)markSuggestions:(id)arg1 confirmed:(BOOL)arg2 ;
-(void)markSuggestionsAsSkipped:(id)arg1 ;
-(void)commitUserResponses;
-(id)commitUserResponsesToPerson:(id)arg1 ;
-(void)cancelPendingSuggestionLoading;
-(unsigned)_soundIdWithFilename:(id)arg1 ;
-(void)_playConfirmYesSound;
-(void)_playConfirmNoSound;
-(void)_loadMoreSuggestionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifyDelegateWeHaveMoreSuggestions:(BOOL)arg1 ;
-(id)_nonSkippedSuggestionsForSuggestions:(id)arg1 ;
-(BOOL)_fetchingSuggestions;
-(BOOL)mute;
-(void)setMute:(BOOL)arg1 ;
-(unsigned long long)userConfirmationsCount;
-(void)setUserConfirmationsCount:(unsigned long long)arg1 ;
-(unsigned long long)autoConfirmationsCount;
-(void)setAutoConfirmationsCount:(unsigned long long)arg1 ;
-(void)setDidReachEnd:(BOOL)arg1 ;
-(NSMutableSet *)skippedSuggestions;
-(void)setSkippedSuggestions:(NSMutableSet *)arg1 ;
-(PXSuggestionToken *)suggestionToken;
-(void)setSuggestionToken:(PXSuggestionToken *)arg1 ;
-(unsigned)confirmYesSoundID;
-(void)setConfirmYesSoundID:(unsigned)arg1 ;
-(unsigned)confirmNoSoundID;
-(void)setConfirmNoSoundID:(unsigned)arg1 ;
-(PXPeoplePagingSuggestionProvider *)suggestionProvider;
-(void)setSuggestionProvider:(PXPeoplePagingSuggestionProvider *)arg1 ;
-(NSMutableSet *)confirmedSuggestions;
-(void)setConfirmedSuggestions:(NSMutableSet *)arg1 ;
-(NSMutableSet *)rejectedSuggestions;
-(void)setRejectedSuggestions:(NSMutableSet *)arg1 ;
@end

