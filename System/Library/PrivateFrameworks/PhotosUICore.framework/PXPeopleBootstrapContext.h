/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPerson, PXPeopleSuggestionManagerDataSource, PXCMMPersonSuggestion;
@class PXPeopleNameSelection, PXPeopleSuggestionManager, NSString;

@interface PXPeopleBootstrapContext : NSObject {

	BOOL _skipInitialAction;
	BOOL _wantsNaming;
	BOOL _wantsMergeCandidateSuggestions;
	BOOL _wantsPostNaming;
	id<PXPerson> _sourcePerson;
	id<PXPerson> _targetPerson;
	unsigned long long _bootstrapType;
	PXPeopleNameSelection* _nameSelection;
	PXPeopleSuggestionManager* _suggestionManager;
	/*^block*/id _preCommitBlock;
	/*^block*/id _cancelBlock;
	id<PXPeopleSuggestionManagerDataSource> _prefetchedDataSource;
	id<PXCMMPersonSuggestion> _personSuggestion;

}

@property (nonatomic,retain) id<PXCMMPersonSuggestion> personSuggestion;                                //@synthesize personSuggestion=_personSuggestion - In the implementation block
@property (retain) id<PXPerson> sourcePerson;                                                           //@synthesize sourcePerson=_sourcePerson - In the implementation block
@property (retain) id<PXPerson> targetPerson;                                                           //@synthesize targetPerson=_targetPerson - In the implementation block
@property (assign) unsigned long long bootstrapType;                                                    //@synthesize bootstrapType=_bootstrapType - In the implementation block
@property (retain) PXPeopleNameSelection * nameSelection;                                               //@synthesize nameSelection=_nameSelection - In the implementation block
@property (retain) PXPeopleSuggestionManager * suggestionManager;                                       //@synthesize suggestionManager=_suggestionManager - In the implementation block
@property (assign,nonatomic) BOOL skipInitialAction;                                                    //@synthesize skipInitialAction=_skipInitialAction - In the implementation block
@property (nonatomic,copy) id preCommitBlock;                                                           //@synthesize preCommitBlock=_preCommitBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                                              //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (assign,nonatomic) BOOL wantsNaming;                                                          //@synthesize wantsNaming=_wantsNaming - In the implementation block
@property (assign,nonatomic) BOOL wantsMergeCandidateSuggestions;                                       //@synthesize wantsMergeCandidateSuggestions=_wantsMergeCandidateSuggestions - In the implementation block
@property (assign,nonatomic) BOOL wantsPostNaming;                                                      //@synthesize wantsPostNaming=_wantsPostNaming - In the implementation block
@property (nonatomic,retain) id<PXPeopleSuggestionManagerDataSource> prefetchedDataSource;              //@synthesize prefetchedDataSource=_prefetchedDataSource - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
+(id)contextWithPerson:(id)arg1 type:(unsigned long long)arg2 ;
+(id)contextWithPersonSuggestion:(id)arg1 ;
-(id)init;
-(NSString *)localizedName;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(id<PXPerson>)targetPerson;
-(void)setTargetPerson:(id<PXPerson>)arg1 ;
-(PXPeopleSuggestionManager *)suggestionManager;
-(id<PXCMMPersonSuggestion>)personSuggestion;
-(id<PXPerson>)sourcePerson;
-(void)setSourcePerson:(id<PXPerson>)arg1 ;
-(unsigned long long)bootstrapType;
-(void)setBootstrapType:(unsigned long long)arg1 ;
-(PXPeopleNameSelection *)nameSelection;
-(void)setNameSelection:(PXPeopleNameSelection *)arg1 ;
-(void)setSuggestionManager:(PXPeopleSuggestionManager *)arg1 ;
-(BOOL)skipInitialAction;
-(void)setSkipInitialAction:(BOOL)arg1 ;
-(id)preCommitBlock;
-(void)setPreCommitBlock:(id)arg1 ;
-(BOOL)wantsNaming;
-(void)setWantsNaming:(BOOL)arg1 ;
-(BOOL)wantsMergeCandidateSuggestions;
-(void)setWantsMergeCandidateSuggestions:(BOOL)arg1 ;
-(BOOL)wantsPostNaming;
-(void)setWantsPostNaming:(BOOL)arg1 ;
-(id<PXPeopleSuggestionManagerDataSource>)prefetchedDataSource;
-(void)setPrefetchedDataSource:(id<PXPeopleSuggestionManagerDataSource>)arg1 ;
-(void)setPersonSuggestion:(id<PXCMMPersonSuggestion>)arg1 ;
@end

